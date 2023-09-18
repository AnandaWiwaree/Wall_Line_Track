
void ReadADC () //อ่านค่าเซ็นเซอร์เช็คเส้น
{
  FL1 = analog (1);
  FR1 = analog (2);
  SL1 = analog (3);
  SR1 = analog (4);
  BL1 = analog (5);
  BR1 = analog (6);

}

void ConvertADC()
{
  ReadADC();
  if (FL1 < RefFL1)FL1 = 0;  // ดำ = 0 , ขาว = 1
  else FL1 = 1;
  if (FR1 < RefFR1)FR1 = 0;
  else FR1 = 1;
  if (SL1 < RefSL1)SL1 = 0;
  else SL1 = 1;
  if (SR1 < RefSR1)SR1 = 0;
  else SR1 = 1;
  if (BL1 < RefSL1)BL1 = 0;
  else BL1 = 1;
  if (BR1 < RefSR1)BR1 = 0;
  else BR1 = 1;
  
}

//void ShowADC ()
//{
//  ReadADC (); //เรียกใช้ฟังก์ชันอ่านค่าสี
//  set_oled_clear(); 
//  set_oled(0,0,"FL1: ");  //แสดงผลคำว่า "analogA0 = " ขึ้นที่หน้าจอ คอลัมที่ 0  บรรทัด ที่ 0
//  set_oled(30,0,analog(A1)); 
//  set_oled(70,0,"FR1: ");  //แสดงผลคำว่า "analogA0 = " ขึ้นที่หน้าจอ คอลัมที่ 0  บรรทัด ที่ 0
//  set_oled(100,0,analog(A2)); 
//  
//  set_oled(0,25,"SL1: ");  //แสดงผลคำว่า "analogA0 = " ขึ้นที่หน้าจอ คอลัมที่ 0  บรรทัด ที่ 0
//  set_oled(30,25,analog(A3));
//  set_oled(70,25,"SR1: ");  //แสดงผลคำว่า "analogA0 = " ขึ้นที่หน้าจอ คอลัมที่ 0  บรรทัด ที่ 0
//  set_oled(100,25,analog(A4));
//
//  set_oled(0,50,"BL1: ");  //แสดงผลคำว่า "analogA0 = " ขึ้นที่หน้าจอ คอลัมที่ 0  บรรทัด ที่ 0
//  set_oled(30,50,analog(A5));
//  set_oled(70,50,"BR1: ");  //แสดงผลคำว่า "analogA0 = " ขึ้นที่หน้าจอ คอลัมที่ 0  บรรทัด ที่ 0
//  set_oled(100,50,analog(A6));
//}
