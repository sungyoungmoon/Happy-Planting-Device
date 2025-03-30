#include "DFRobotDFPlayerMini.h"
#include "SoftwareSerial.h"

int ledPin=9;
int sensorValue=0;
int vol=15;
int brightness = 0; // LED light level
int wetnessbefore;
int buttonRead=A4;
int sensorPin=A0;
// Use pins 2 and 3 to communicate with DFPlayer Mini
static const uint8_t PIN_MP3_TX = 2; // Connects to module's TX
static const uint8_t PIN_MP3_RX = 3; // Connects to module's RX
SoftwareSerial softwareSerial(PIN_MP3_RX, PIN_MP3_TX);
DFRobotDFPlayerMini player;

void setup() {
// Initalize
  Serial.begin(9600);
  softwareSerial.begin(9600);
  player.begin(softwareSerial);
  pinMode(buttonRead, INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
}

void loop() {
//Looping for checking moisture level 
sensorValue=analogRead(sensorPin);
brightness=map(sensorValue,280,750,0,255);
analogWrite(ledPin, brightness);
int difference=wetnessbefore-sensorValue;

Serial.println(sensorValue);

if(difference>70){

  Serial.println("Need water!!!!");

    // Set volume to maximum (0 to 30).
    player.volume(vol);
    // Play the "0001.mp3" in the "mp3" folder on the SD card
    player.playMp3Folder(1);
    delay(2000);
}


if (digitalRead(buttonRead) == 0){
  if(sensorValue>400){ 
    Serial.println("Really Really Dry");

    // Set volume to maximum (0 to 30).
    player.volume(vol);
    // Play the "0001.mp3" in the "mp3" folder on the SD card
    
    player.playMp3Folder(1);
    delay(2000);
  } 
 else{
        Serial.println("Got Enough water!!!!!!!");

       // Set volume to maximum (0 to 30).
        player.volume(vol);
        // Play the "0001.mp3" in the "mp3" folder on the SD card
       player.playMp3Folder(1);
       delay(2000);
  }
}
wetnessbefore=sensorValue;
  delay(250);
}
