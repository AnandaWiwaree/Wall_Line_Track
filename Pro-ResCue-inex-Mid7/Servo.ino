
void BoxC()
{
  servo(3, 90);
  delay(1000);
}

void BoxL()
{
  servo(3, 180);
  delay(1000);
  BoxC();
  delay(500);
}

void BoxR()
{
  servo(3, 0);
  delay(1000);
  BoxC();
  delay(500);
}
