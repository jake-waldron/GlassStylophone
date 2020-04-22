void processStates() {
  if (buttonStateLeft != lastButtonStateLeft) { //if button state is different run this
    doLeft();
  }
  if (buttonStateRight != lastButtonStateRight) { //if button state is different run this
    doRight();
  }
  delay(10);
}


void doLeft() {
  if (buttonStateLeft == HIGH) { //if button is pressed, play note
    leftNote();
    MIDI.sendNoteOn(leftNoteVal, 127, 1);
    delay(10);
    //Serial.println("Left : ON");
    //Serial.println(leftNoteVal);
  }
  else { //if button is let go, turn off note
    MIDI.sendNoteOff(leftNoteVal, 0, 1);
    //Serial.println("Left : OFF");
  }
}

void doRight() {
  if (buttonStateRight == HIGH) { //if button is pressed, play note
    rightNote();
    MIDI.sendNoteOn(rightNoteVal, 127, 1);
    delay(10);
    //Serial.println("Right : ON");
    //Serial.println(rightNoteVal);
  }
  else { //if button is let go, turn off note
    MIDI.sendNoteOff(rightNoteVal, 0, 1);
    //Serial.println("Right : OFF");
  }
}
