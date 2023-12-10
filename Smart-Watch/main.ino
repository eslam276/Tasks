#include <stdlib.h>
#include <string.h>



#include <Wire.h>
#include "MAX30105.h"

#include "heartRate.h"


#include <SoftwareSerial.h>

// #include "HRS_interface.h"

//#include "GPS_interface.h"


MAX30105 particleSensor;

const byte RATE_SIZE = 4; //Increase this for more averaging. 4 is good.
byte rates[RATE_SIZE]; //Array of heart rates
byte rateSpot = 0;
long lastBeat = 0; //Time at which the last beat occurred

float beatsPerMinute;
int beatAvg;



String inputString = ""; // a string to hold incoming data
boolean stringComplete = false; // whether the string is complete
String signal = "$GPGLL";




int AvgBPS ;
//float latitude , longtude ;


char arr[100] = "Langtude = ";


void setup() 
{

  Serial.begin(9600);
  //GPS_Init();
  //HRS_Init();




   Serial.println("Initializing...");

    //Initialize sensor
    if (!particleSensor.begin(Wire, I2C_SPEED_FAST)) //Use default I2C port, 400kHz speed
    {
        Serial.println("MAX30105 was not found. Please check wiring/power. ");
        while (1);
    }
    Serial.println("Place your index finger on the sensor with steady pressure.");

    particleSensor.setup(); //Configure sensor with default settings
    particleSensor.setPulseAmplitudeRed(0x0A); //Turn Red LED to low to indicate sensor is running
    particleSensor.setPulseAmplitudeGreen(0); //Turn off Green LED

    Serial.println("HRS Initialized .....");

 

  

  inputString.reserve(200);


}





void loop() {







 long irValue = particleSensor.getIR();

    if (checkForBeat(irValue) == true)
    {
        //We sensed a beat!
        long delta = millis() - lastBeat;
        lastBeat = millis();

        beatsPerMinute = 60 / (delta / 1000.0);

        if (beatsPerMinute < 255 && beatsPerMinute > 20)
        {
        rates[rateSpot++] = (byte)beatsPerMinute; //Store this reading in the array
        rateSpot %= RATE_SIZE; //Wrap variable

        //Take average of readings
        beatAvg = 0;
        for (byte x = 0 ; x < RATE_SIZE ; x++)
            beatAvg += rates[x];
        beatAvg /= RATE_SIZE;

        AvgBPS = beatAvg ;
        }
    }






 
  // put your main code here, to run repeatedly:
 if (stringComplete) {
        String BB = inputString.substring(0, 6);
        if (BB == signal) {
            String LAT = inputString.substring(7, 17);
            int LATperiod = LAT.indexOf('.');
            int LATzero = LAT.indexOf('0');
            if (LATzero == 0) {
                LAT = LAT.substring(1);
            }

            

            String LON = inputString.substring(20, 31);
            int LONperiod = LON.indexOf('.');
            int LONTzero = LON.indexOf('0');
            if (LONTzero == 0) {
                LON = LON.substring(1);
            }

              



            char arr[100] = "Latitude = ";

    // 10 = 2+6
    



    char BPS[3];




    // latitude = GPS_Get_Latitude();
    // longtude = GPS_Get_Longitude(); 

    //AvgBPS =  HRS_GetAvgBPM();

  

  //  dtostrf(latitude, 2,6, latString); 
  //  dtostrf(longtude, 2,6, lonString); 

  
    // char latString[20];
    // char lonString[20];

    // strcpy(latString , LAT.c_str());
    // strcpy(lonString , LON.c_str());



   strcat(arr,LAT.c_str());
   strcat(arr," longtude = ");
   strcat(arr,LON.c_str());
   strcat(arr,"  AVG BPS = ");




   sprintf(BPS, "%d", AvgBPS);
   strcat(arr,BPS);

  

  Serial.println(arr);
  Serial.println("-------------------------------");




            // Serial.println("--LAT--");
            // Serial.println(LAT);
            // Serial.println("--LON--");
            // Serial.println(LON);
            // Serial.println("================");

        }

        // Serial.println(inputString);
        // clear the string:
        inputString = "";
        stringComplete = false;
    }
}

void serialEvent() {
    while (Serial.available()) {
        // get the new byte:
        char inChar = (char) Serial.read();
        // add it to the inputString:
        inputString += inChar;
        // if the incoming character is a newline, set a flag
        // so the main loop can do something about it:
        if (inChar == '\n') {
            stringComplete = true;
        }
    }
}




/*
char arr[100] = "Latitude = ";

    // 10 = 2+6
    



    char BPS[3];




    // latitude = GPS_Get_Latitude();
    // longtude = GPS_Get_Longitude(); 

    AvgBPS = 80 ; // HRS_GetAvgBPM();

  

  //  dtostrf(latitude, 2,6, latString); 
  //  dtostrf(longtude, 2,6, lonString); 

  
    // char latString[20];
    // char lonString[20];

    // strcpy(latString , LAT.c_str());
    // strcpy(lonString , LON.c_str());



   strcat(arr,LAT.c_str());
   strcat(arr," longtude = ");
   strcat(arr,LON.c_str());
   strcat(arr,"  AVG BPS = ");




   sprintf(BPS, "%d", AvgBPS);
   strcat(arr,BPS);

  

  Serial.println(arr);
  Serial.println("-------------------------------");
*/