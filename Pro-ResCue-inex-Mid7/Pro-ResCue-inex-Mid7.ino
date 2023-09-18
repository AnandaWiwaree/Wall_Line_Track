#include <POP32.h>
#include <POP32_IO.h>

#include <POP32.h>
int FL1, FR1, SL1, SR1, BL1, BR1;
//int RefFL1 = 600, RefFR1 = 500 , RefSL1 = 1800, RefSR1 = 1800, RefBL1 = 1985, RefBR1 = 2354;
int RefFL1 = 2500, RefFR1 = 2700, RefSL1 = 1900, RefSR1 = 2500, RefBL1 = 1985, RefBR1 = 2354;
//int RefFL1 = 385, RefFR1 = 406, RefSL1 = 1200, RefSR1 = 1300, RefBL1 = 1985, RefBR1 = 2354;
int Speed, LSpeed, RSpeed;
int check1 = 0;
int st = 0;
int dulation = 0;
int Timedulation = 0;
int TimeRunBridge = 900;
int TimeLeft = 290;
int TimeRight = 290;
int UTurnRight = 489;
int UTurnLeft = 519;
int FWDelay = 0;

void setup()
{
  LSpeed = 59;
  RSpeed = 59;

  beep();
  delay(500);
  BoxC();

  sw_OK_press();

  beep();
  delay(500);
  beep();
  delay(500);


}

void loop()
{
  Timedulation = 1300;
  Track_Delay();

  TimeLeft = 313;
  goTurnLeft();//ลี้ยวซ้าย1

  Track_FW();// ตรง

  TimeLeft = 303;
  goTurnLeft();// เลี้ยวซ้าย2

  Track_FW();     //เดินหน้าเจอเส้นดำ
  BoxL();

  UTurnL ();//ยูเทิร์น

  Track_FW(); // ตรง

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา1


  Track_FW(); // ตรง


  TimeRight = 304;
  goTurnRight ();// เลี้ยวขวา2


  Track_FW(); // ตรง

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา3

  Track_FW(); // ตรง

  TimeLeft = 323;
  goTurnLeft();// เลี้ยวซ้าย3

  Track_FW(); // ตรง

  TimeLeft = 301;
  goTurnLeft();// เลี้ยวซ้าย4

  Track_FW(); // ตรง

  UTurnL ();//ยูเทิร์น

  Track_FW(); // ตรง

  TimeRight = 296;
  goTurnRight ();// เลี้ยวขวา4

  Timedulation = 1001;
  Track_Delay();

  TimeRight = 297;
  goTurnRight ();// เลี้ยวขวา5

  Timedulation = 4459;
  Track_Delay();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Track_FW(); // ตรง

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Track_FW(); // ตรง
  BoxL();

  UTurnR ();//ยูเทิร์น

  Track_FW(); // ตรง

  TimeLeft = 303;
  goTurnLeft();// เลี้ยวซ้าย

  Track_FW(); // ตรง


  goTurnRight ();// เลี้ยวขวา

  Track_FW(); // ตรง

  TimeRight = 294;
  goTurnRight ();// เลี้ยวขวา

  Track_FW(); // ตรง
  BoxR();
  
  UTurnR ();//ยูเทิร์น

  Track_FW();

  TimeLeft = 303;
  goTurnLeft();// เลี้ยวซ้าย

  Timedulation = 1001;
  Track_Delay();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Track_FW();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Track_FW();

  BoxR();

  UTurnL ();//ยูเทิร์น

  Track_FW();

  TimeLeft = 303;
  goTurnLeft();// เลี้ยวซ้าย

  Track_FW();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Timedulation = 1300;
  Track_Delay();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Track_FW();

  UTurnL ();//ยูเทิร์น

  Track_FW();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Timedulation = 800;
  Track_Delay();

  TimeRight = 303;
  goTurnRight ();// เลี้ยวขวา

  Timedulation = 800;
  Track_Delay();

  
  while (1);







  //  RunBridge1(); //วิ่งบนสะพาน
  //  delay(1000);
  //
  //  TimeRunBridge = 1100;
  //  RunBridge2(); //วิ่งบนสะพาน
  //
  //  //  Track_FW();// ตรง
  //
  //  //TimeRight = 300;
  //  goTurnRight ();//เลี้ยวขวา
  //
  //  Track_FW(); // ตรง
  //
  //  TimeRight = 280;
  //  goTurnRight ();//เลี้ยวขวา
  //
  //  Track_FW(); // ตรง
  //
  //  BoxL();//วาง2
  //
  //  //goBox1();//ถอย
  //
  //  UTurnL ();//ยูเทิร์น  /////
  //
  //  Track_FW(); // ตรง
  //
  //  goBox2();//ถอย
  //
  //
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); // ตรง
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); // ตรง
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); // ตรง
  //
  //  goBox2();
  //
  //  TimeLeft = 270;
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); // ตรง
  //
  //  BoxR();//วาง3
  //
  //  goBox2();
  //
  //  TimeRight = 250;
  //  goTurnRight ();//เลี้ยวขวา
  //
  //  Timedulation = 610;
  //  Track_Delay();
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  goBox3();
  //
  //  motor(1, 50);  motor(2, 48);
  //  delay(1100);
  //  motor(1, 0);  motor(2, 0);              //ข้ามตะเกียบ
  //  delay(500);
  //
  //  Track_FW(); //ตรงไป
  //
  //  goTurnRight ();//เลี้ยวขวา
  //
  //  Track_FW(); //ตรงไป
  //
  //  BoxL();//วาง
  //
  //  UTurnR ();
  //
  //  Track_FW(); //ตรงไป
  //
  //  goBox1();
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  goBox3();
  //
  //  motor(1, 46);  motor(2, 44);
  //  delay(900);
  //  motor(1, 0);  motor(2, 0);              //ข้ามตะเกียบ
  //  delay(500);
  //
  //  Track_FW(); //ตรงไป
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Timedulation = 570;
  //  Track_Delay();
  //
  //
  //
  //  goTurnRight ();//เลี้ยวขวา
  //
  //
  //  RunBridge1(); //วิ่งบนสะพาน
  //  delay(1000);
  //
  //  TimeRunBridge = 1100;
  //  RunBridge2(); //วิ่งบนสะพาน
  //
  //  goTurnRight ();//เลี้ยวขวา
  //
  //  Track_FW(); //ตรงไป
  //
  //  goTurnRight ();//เลี้ยวขวา
  //
  //  Track_FW(); //ตรงไป
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); //ตรงไป
  //
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); //ตรงไป
  //
  //  goTurnLeft();// เลี้ยวซ้าย
  //
  //  Track_FW(); //ตรงไป

  while (1);






  //  goTurnRight (); //เลี้ยวซ้ายแรก
  //    UTurn ();
  //
  //    Timedulation = 200;
  //    Track_Delay();
  //
  //    TimeRight = 330;
  //    goTurnRight();
  //
  //    Timedulation = 1400; //ข้ามสะพาน
  //    Track_Delay();
  //
  //    TimeRight = 300;
  //    goTurnRight();
  //
  //    Track_FW();
  //
  //    TimeRight = 300;
  //    goTurnRight();
  //
  //    Track_FW();
  //
  //    BoxR();
  //    BoxC();
  //
  //    UTurn ();//ยูเทินติดสะพาน
  //
  //    Timedulation = 1050;
  //    Track_Delay();
  //
  //
  //    UTurn ();
  //
  //    Timedulation = 200;
  //    Track_Delay();
  //
  //    TimeRight = 300;
  //    goTurnRight();
  //
  //    Track_FW();
  //
  //    TimeLeft = 250;
  //    goTurnLeft ();
  //
  //    Track_FW();
  //
  //    TimeLeft = 250;
  //    goTurnLeft ();
  //
  //    Track_FW();
  //
  //    UTurn ();
  //
  //    Track_FW();
  //
  //    TimeRight = 260;
  //    goTurnRight();
  //
  //    Track_FW();
  //
  //    TimeRight = 260;
  //    goTurnRight();
  //
  //    Timedulation = 200;
  //    Track_Delay();
  //
  //    TimeLeft = 250;
  //    goTurnLeft ();
  //
  //
  //    Timedulation = 700;
  //
  //    TimeRight = 260;
  //    goTurnRight();
  //
  //    BoxR();
  //    BoxC();
  //
  //    UTurn ();
  //
  //    Track_FW();
  //
  //    TimeLeft = 250;
  //    goTurnLeft ();
  //
  //    Track_FW();
  //
  //    BoxL();
  //    BoxC();//จบ




  //Timedulation = 1300; //ข้ามสะพาน
  // Track_Delay();
  // Track_FW()
  //Timedulation = 750;
  //Track_Delay();

  //TimeRight = 280;
  //goTurnRight();  //เลี้ยวขวา

  //Speed = 80; //ข้ามตะเกียบ
  //LSpeed = 80;
  //RSpeed = 80;
  //Timedulation = 900;// ข้ามตะเกียบ
  //Speed = 40;
  //LSpeed = 40;
  //RSpeed = 40;
  //Track_Delay();

  //TimeLeft = 300;
  //goTurnLeft (); //เลี้ยวซ้าย

  //Track_FW();

  //TimeLeft = 300;
  //goTurnLeft (); //เลี้ยวซ้าย

  motor(1, 62);  motor(2, 60);
  delay(900);
  motor(1, 0);  motor(2, 0);              //ข้ามตะเกียบ
  delay(500);

  Track_FW(); //ตรงไป





  while (1);







  Track_FW();     //เดินหน้าเจอเส้นดำ

  goTurnRight();  //เลี้ยวขวา


  //  delay(3000);
  //
  Track_FW();     //เดินหน้าเจอเส้นดำ

  goTurnRight();  //เลี้ยวขวา
  //
  Track_FW();     //เดินหน้าเจอเส้นดำ

  TimeRight = 295;
  goTurnRight();  //เลี้ยวขวา
  //
  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  goTurnLeft ();  //เลี้ยวซ้าย
  //  delay(3000);
  //
  //  UTurn ();
  //  delay(3000);
  //
  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  BoxL();         //หยอดถุงกู้ภัยทางขวา

  // BoxC();
  //
  //UTurn ();
  //
  Timedulation = 100;
  Track_Delay();
  //
  //  //TimeRight = 280;
  goTurnRight();  //เลี้ยวขวา
  //
  //  Timedulation = 410;
  //  Track_Delay();
  //
  //  //TimeRight = 280;
  //  goTurnRight();  //เลี้ยวขวา
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //  BoxR();         //หยอดถุงกู้ภัยทางขวา
  //
  //  goTurnRight();  //เลี้ยวขวา
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  UTurnLeft = 470;
  //  UTurn ();
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  goTurnLeft ();  //เลี้ยวซ้าย
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  goTurnLeft ();  //เลี้ยวซ้าย
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  UTurn ();
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  goTurnRight();  //เลี้ยวขวา
  //
  //  Timedulation = 150;
  //  Track_Delay();
  //
  //  goTurnLeft ();  //เลี้ยวซ้าย
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  goTurnLeft ();  //เลี้ยวซ้าย
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  goTurnLeft ();  //เลี้ยวซ้าย
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //  BoxL();         //หยอดถุงกู้ภัยทางขวาxxx
  //
  //  UTurnRight = 450;
  //  UTurn ();
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  goTurnRight();  //เลี้ยวขวา
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ
  //
  //  UTurn ();
  //
  //  Timedulation = 100;
  //  Track_Delay();
  //
  //  goTurnLeft();  //เลี้ยวขวา
  //
  //  Track_FW();     //เดินหน้าเจอเส้นดำ

  while (1);

}
