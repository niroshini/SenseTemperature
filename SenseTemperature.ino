//Libraries
#include <DHT.h>

//Constants
#define DHTPIN 2     // what pin we're connected to
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for normal 16mhz Arduino

//Variables
float temp; //Stores temperature value

void setup()
{
    Serial.begin(9600);
    dht.begin();
}

void loop()
{
    //Read data and store it to variable temp
    temp= dht.readTemperature();
    
    //Print temperature values to serial monitor
    Serial.println(temp);
    delay(2000); //Delay 2 sec.
}
