//===============================================================================
//  Main
//===============================================================================
void loop() 
{
  if (Serial.available() > 0)           // If something is typed in the serial monitor
  {
    ch = Serial.read();
    if (ch >= 'a' && ch <= 'z')         // Need same Morse code for upper and lowercase
    {
      flashSequence(letters[ch - 'a']); // ASCII c - a = 99 - 97 = 2, so address letters[2]
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
      flashSequence(letters[ch - 'A']); // Same idea for ASCII value of capital letters
    }
    else if (ch >= '0' && ch <= '9')
    {
      flashSequence(numbers[ch - '0']);
    }
    else if (ch == ' ')
    {
      delay(dotDelay * 4);               // Pause between words
    }
  }
}
