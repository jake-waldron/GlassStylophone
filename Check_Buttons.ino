int checkButtonLeft() { //check button on current pin
  int result;
  if (analogRead(leftPin) < 1010) { // if value, button is pressed, return HIGH
    result = HIGH;
  }
  if (analogRead(leftPin) > 1010) { //if no value, button is not pressed, return LOW
    result = LOW;
  }
  leftVal = analogRead(leftPin); //set value to the current value
  return result;
}

int checkButtonRight() { //check button on current pin
  int result;
  if (analogRead(rightPin) < 1010) { // if value, button is pressed, return HIGH
    result = HIGH;
  }
  if (analogRead(rightPin) > 1010) { //if no value, button is not pressed, return LOW
    result = LOW;
  }
  rightVal = analogRead(rightPin); //set value to the current value
  return result;
}
