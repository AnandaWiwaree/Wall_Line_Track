

void Track_FW()
{
  check1 = 0;
  while (check1 == 0)
  {
    ConvertADC();
    if ((FL1 == 0) && (FR1 == 1)) //เจอดำซ้ายก่อน
    {
      check1 = 1;
      Stopp1();
    }
    else if ((FL1 == 1) && (FR1 == 0)) //เจอดำขวาก่อน
    {
      check1 = 1;
      Stopp1();
    }
    else if ((FL1 == 0) && (FR1 == 0)) //เจอดำขวาก่อน
    {
      check1 = 1;
      Stopp1();
    }
    else if ((SL1 == 1) && (SR1 == 1)) //เจอขาวทั้งคู่
    {
      goStraight();
    }
    else if ((SL1 == 0) && (SR1 == 1)) //เจอดำทางซ้าย
    {
      goRight();
    }
    else if ((SL1 == 1) && (SR1 == 0)) //เจอดำทางซ้าย
    {
      goLeft();
    }
    delay(1);
  }
  delay(1);
}

void Track_Delay()
{
  for (dulation == Timedulation ; dulation <= Timedulation ; dulation++)
  {
    ConvertADC();
    if ((SL1 == 1) && (SR1 == 1)) //เจอขาวทั้งคู่
    {
      goStraight();
    }
    if ((SL1 == 0) && (SR1 == 1)) //เจอดำทางซ้าย
    {
      goRight();
    }
    if ((SL1 == 1) && (SR1 == 0)) //เจอดำทางซ้าย
    {
      goLeft();
    }
    delayMicroseconds (1);
  }
  Stopp1();
  dulation = 0;
  Timedulation = 0;
  delay (200);
}

void RunBridge1() //วิ่งบนสะพาน
{
  motor(1, LSpeed + 1);  motor(2, RSpeed + 3);
  delay(TimeRunBridge);
  motor(1, 0);  motor(2, 0);//หยุด
  TimeRunBridge = 900;
  delay(500);
}

void RunBridge2() //วิ่งบนสะพาน
{
  motor(1, LSpeed - 13);  motor(2, RSpeed - 9);
  delay(TimeRunBridge);
  motor(1, 0);  motor(2, 0); //หยุด
  TimeRunBridge = 900;
  delay(500);
}


void StoppL()
{
  motor(1, -LSpeed);  motor(2, -RSpeed);
  delay(250);
  motor(1, 0);  motor(2, 0);
  delay(1000);

  ConvertADC();
  while (FR1 == 1)
  {
    ConvertADC();
    motor(1, 10);  motor(2, 25);
    delay(20);
  }

  motor(1, 0);  motor(2, 0);
  delay(500);


}

void StoppR()
{
  motor(1, -LSpeed);  motor(2, -RSpeed);
  delay(250);
  motor(1, 0);  motor(2, 0);
  delay(1000);

  ConvertADC();
  while (FL1 == 1)
  {
    ConvertADC();
    motor(1, 25);  motor(2, 10);
    delay(20);
  }

  motor(1, 0);  motor(2, 0);
  delay(500);


}

void ForwardDelay()
{
  motor(1, LSpeed);  motor(2, RSpeed);
  delay(FWDelay);
  Stopp();
  delay(50);

}

void goBox1()
{
  motor(1, -LSpeed + 15);  motor(2, -RSpeed + 15);
  delay(730);
  Stopp();
}
void goBox2()
{
  motor(1, -LSpeed + 15);  motor(2, -RSpeed + 15);
  delay(510);
  Stopp();
}
void goBox3()
{
  motor(1, -LSpeed + 15);  motor(2, -RSpeed + 15);
  delay(100);
  Stopp();
}

void goStraight()
{
  motor(1, LSpeed);  motor(2, RSpeed);
}

void goStraightF1()   ////Step 5
{
  motor(1, LSpeed);  motor(2, RSpeed);
  //  delay(TimeForward);
  Stopp();
  delay(500);
}

void goStraightB1()   ////Step 5
{
  motor(1, -LSpeed);  motor(2, -RSpeed);
  //  delay(TimeBackward);
  Stopp();
  delay(500);
}

void goRight()
{
  motor(1, LSpeed + 15);  motor(2, RSpeed - 15);
  delayMicroseconds (1);
}

void goLeft()
{
  motor(1, LSpeed - 15);  motor(2, RSpeed + 15);
  delayMicroseconds (1);
}

void goTurnLeft ()
{
  motor(1, -LSpeed + 10);  motor(2, RSpeed - 10);
  delay(TimeLeft);
  Stopp();
  delay(500);
  TimeLeft = 290;
}

void goTurnRight ()
{
  motor(1, LSpeed - 10);  motor(2, -RSpeed + 10);
  delay(TimeRight);
  Stopp();
  delay(500);
  TimeRight = 290;
}

void UTurnR ()
{
  motor(1, LSpeed);  motor(2, -RSpeed);
  delay(UTurnRight);
  Stopp();
  delay(500);
  UTurnRight = 390;
}
void UTurnL ()
{
  motor(1, -LSpeed);  motor(2, RSpeed);
  delay(UTurnLeft);
  Stopp();
  delay(500);
  UTurnLeft = 450;
}
void Stopp()
{
  motor(1, 0);  motor(2, 0);
  delay(50);
}

void Stopp1()
{
  //check1 = 1;
  motor(1, -LSpeed + 10);  motor(2, -RSpeed + 10);
  delay(200);
  motor(1, 0);  motor(2, 0);
  delay(500);

  //  //  motor(1, -50);  motor(2, -50);
  //  //  delay(100);
  //  motor(1, 0);  motor(2, 0);
  //  delay(500);
}

void Stopp12()
{
  check1 = 1;
//  motor(1, -LSpeed + 10);  motor(2, -RSpeed + 10);
//  delay(50);
  motor(1, 0);  motor(2, 0);
  delay(500);

  //while(1); 

  ConvertADC();
  while ((FL1 == 0) || (FR1 == 0))
  {
    ConvertADC();
    motor(1, -5);  motor(2, -5);

  }

  motor(1, 0);  motor(2, 0);
  delay(200);
  //while(1); 

  ConvertADC();
  while ((FL1 == 1) || (FR1 == 1))
  {
    ConvertADC();
    motor(1, 5);  motor(2, 5);
  }
   
  motor(1, -10);  motor(2, -10);
  delay(30);
  motor(1, 0);  motor(2, 0);
  //delayMicroseconds(1);
  while(1);
  
  ConvertADC();
  if (FL1 == 0)
  {
    motor(1, 0);
    ConvertADC();
    while (FR1 == 1)
    {
      ConvertADC();
      motor(1, -8); motor(2, 50);
    }
    motor(2, 0);
  }
  else if (FR1 == 0)
  {
    motor(2, 0);
    ConvertADC();
    while (FL1 == 1)
    {
      ConvertADC();
      motor(1, 50); motor(2, -8);
    }
    motor(1, 0);
  }

  motor(1, 0);  motor(2, 0);
  while(1);
}

void BW()
{
  check1 = 1;
  motor(1, -80);  motor(2, -80);
  delay(250);
  motor(1, 0);  motor(2, 0);
  delay(200);
  //while(1);
}

void BWLine()
{
  st = 0;
  ConvertADC();
  while ((BL1 == 1) && (BR1 == 1))
  {
    ConvertADC();
    motor(1, -30);  motor(2, -30);
    delay(10);
    //    if ((BL1 == 0) || (BR1 == 1))
    //    {
    //      motor(1, 0);  motor(2, -40);
    //      delay(10);
    //    }
    //    if ((BL1 == 1) || (BR1 == 0))
    //    {
    //      motor(1, -40);  motor(2, 0);
    //      delay(10);
    //    }
  }

  ConvertADC();
  while (st == 0)
  {
    ConvertADC();
    if ((BL1 == 0) && (BR1 == 1))
    {
      motor(1, 0);  motor(2, -50);
      delay(10);
    }
    else if ((BL1 == 1) && (BR1 == 0))
    {
      motor(1, -50);  motor(2, 0);
      delay(10);
    }
    else
    {
      motor(1, 0);  motor(2, 0);
      delay(200);
      st = 1;
    }

  }
  check1 = 0;
  motor(1, 40);  motor(2, 40);
  delay(200);
  motor(1, 0);  motor(2, 0);
  delay(500);
}

void TestRun()
{
  goStraight();
  delay(3000);
  Stopp();
}
