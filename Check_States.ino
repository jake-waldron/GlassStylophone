void checkStates() {
  buttonStateLeft = checkButtonLeft(); //check to see if "button" is pressed
  buttonStateRight = checkButtonRight();
}

void updateStates() {
  lastButtonStateLeft = buttonStateLeft; //set button state as current state
  lastButtonStateRight = buttonStateRight;
}
