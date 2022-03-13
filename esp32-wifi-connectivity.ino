#include <Arduino.H>
/*
#include "WiFi.h"

#define WIFI_NETWORK "Name"
#define WIFI_PASSWORD "password"
#define WIFI_TIMEOUT_MS 20000 //20 seconds

void connectToWiFi(){
  Serial.print("Connecting to WiFi"); //so we know what the esp is doing 
  //from this point on we can use SPA (station) mode or AP (access point) mode.
  //we'll be using SPA since we're connecting to an existing wifi network. 
  WiFi.mode(WIFI_STA); 
  //We could apply the access point mode when we want to configure the ESP32??? Future implementation?
  WiFi.begin(WIFI_NETWORK, WIFI_PASSWORD);

  unsigned long attempt_time = millis(); //returns the up time of the esp32, therefore, we'll be storing the time we started the wifi connection attempt.
  
  while(WIFI.status() != WL_CONNECTED && millis() - attempt_time < WIFI_TIMEOUT_MS){ 
    //will loop while we are not connected
    //to make sure we are within our timeout time 
    //we keep looping while we are within our timeout time and we're not connected. 
    Serial.println("connecting...");
    delay(100);
  }

  if(WiFi.status() != WL_CONNECTED){
    Serial.println("Connection Failed");
    //what action do we want it to take?
    }else{
      Serial.print("Successfully connected!");
      Serial.println(WiFi.localIP()); //hehe
    }
  
}
// We dont want the esp32 to keep trying to connect, 
//so the line above is to basically put a timer on how long the esp32 can attempt to connect to a network.
//we can either restart the esp32 at this point or put it in deep sleep.


void setup() {
  Serial.begin(9600);//initializing our serial monitor
  connectToWiFi();

}

void loop() {
  // put your main code here, to run repeatedly:

}
*/
void setup() {
 // put your setup code here, to run once:
 Serial.begin(9600);
 Serial.println("Hello World!");
}

void loop() {
 // put your main code here, to run repeatedly:
}
