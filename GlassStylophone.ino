#include <MIDI.h>

MIDI_CREATE_DEFAULT_INSTANCE();

byte leftPin = 1; //Set pins for left and right sections
byte rightPin = 0;

byte buttonStateLeft = 0; //Set states to be able to tell when key is pressed on either side
byte lastButtonStateLeft = 0;
byte buttonStateRight = 0;
byte lastButtonStateRight = 0;

int leftVal = 0; //Set variables to hold value from each section
int rightVal = 0;

byte leftNoteVal = 0; //Set notes for each section based on value gotten from keys
byte rightNoteVal = 0;


void setup() {
  // put your setup code here, to run once:
  MIDI.begin(4);
  //Serial.begin(9600);
}

void loop() {
  checkStates(); //Check to see whether key is being pressed
  processStates(); //If keys are pressed, do what needs to be done
  updateStates(); //Updates status of key press 
}
