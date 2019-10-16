///////////////////
// flashSequence //
///////////////////
void flashSequence(char* sequence)
{
  int i = 0;
  while (sequence[i] != '\0')   // Until the array end marker is reached
  {
    flashDotOrDash(sequence[i]);
    i++;
  }
  delay(dotDelay * 3);          // Pause between letters
}
