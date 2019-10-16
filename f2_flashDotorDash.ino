///////////////////
// flashDotOrDash //
///////////////////
void flashDotOrDash(char dotOrDash)
{
  digitalWrite(ledPin, HIGH);
  if (dotOrDash == '.')
  {
    delay(dotDelay);        // Dot corresponds to short flash
  }
  else // must be a dash
  {
    delay(dotDelay * 3);    // Dash is three times longer than a dot
  }
  digitalWrite(ledPin, LOW);
  delay(dotDelay);          // Pause between flashes
}
