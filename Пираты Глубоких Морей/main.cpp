//========================================================================
//! @file       Main.cpp
//{=======================================================================
//!
//! @brief      <���������>\n
//! @brief      <������������>
//!
//! @version    [Version 0.01 alpha, build 1]
//! @author     Copyright (C) <�����>, <���> (<���> <�����>)
//! @date       <����>
//!
//! @par        ��������������
//!           - (TODO: ������ ��������)
//!
//! @todo     - (TODO: ������ ��������� ������ �� ����� �����)
//!
//! @bug      - (TODO: ������ ��������� ������ � ���� �����)
//!
//! @par        ������� ��������� �����
//!           - ������ 0.01 Alpha
//!             - ������ ��� ��������� ����
//!
//}=======================================================================

#include "TXLib.h"
 //������� �������� �������

 void Sea(int x)
 {
  txSetFillColor(RGB(0,130,185));
  txSetColor(RGB(0,130,185));
  txRectangle(x+0-0,450,x+800-0,600);
  }


void drawKarabl(int x,int y)
     {
     txSetColor(RGB(185,122,87));
     txSetFillColor(RGB(185,122,87));
     txRectangle(x+187-428,y+427-160, x+568-428,y+605-160);
     txRectangle(x+117-428,y+353-160, x+329-428,y+542-160);
     txEllipse(x+117-428,y+460-160,x+319-428,y+605-160);
     POINT noskarabla[3] = {{x+568-428,y+427-160},{x+690-428,y+427-160},{x+568-428,y+605-160}};
     txPolygon (noskarabla, 3);
     txSetColor(RGB(185,122,87),5) ;
     txLine(x+690-428,y+427-160,x+803-428,y+395-160);
     txSetColor(RGB(163,82,58),3);
     txRectangle(x+428-428,y+160-160, x+450-428,y+427-160);
     txSetFillColor(TX_WHITE);
     txSetColor(TX_WHITE);
     POINT parus[3] = {{x+450-428,y+160-160},{x+533-428,y+295-160},{x+450-428,y+295-160}};
     txPolygon (parus, 3);
     txEllipse(x+474-428,y+286-160,x+540-428,y+316-160);
     POINT parus1[3] = {{x+450-428,y+310-160},{x+533-428,y+310-160},{x+450-428,y+373-160}};
     txPolygon (parus1, 3);
     txRectangle(x+450-428,y+286-160,x+500-428,y+316-160);
     txSetColor(RGB(163,82,58),3);
     txLine(x+117-428,y+353-160,x+329-428,y+353-160);
     txLine(x+690-428,y+427-160,x+118-428,y+427-160);
     txLine(x+118-428,y+542-160,x+117-428,y+353-160);
     txLine(x+329-428,y+353-160,x+329-428,y+427-160);
     txLine(x+118-428,y+540-160,x+129-428,y+567-160);
     txLine(x+129-428,y+567-160,x+155-428,y+588-160);
     txLine(x+189-428,y+605-160,x+155-428,y+588-160);
     txLine(x+189-428,y+605-160,x+568-428,y+605-160);
     txLine(x+690-428,y+427-160,x+568-428,y+605-160);











 }

void Man(int x, int y, int xLegs)
{
    txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
  //legs
  txSetColor(TX_BLUE,5);
  //655-657
  //r
  txLine(x+655-657,y+400-291,x+615-657+xLegs,y+485-291);
  //l
  txLine(x+655-657,y+400-291,x+685-657-xLegs,y+485-291);


  // telo
  txSetColor(TX_GREEN,5);
  txLine(x+655-657,y+400-291,x+655-657,y+315-291);
  // hands
  // left hand
  txLine(x+655-657,y+315-291,x+630-657,y+350-291);
  txLine(x+630-657,y+350-291,x+630-657, y+385-291);
  //right hand

  txLine(x+655-657,y+315-291,x+685-657,y+350-291);
  txLine(x+685-657,y+350-291,x+685-657,y+385-291);
  //head
  //x=657, y=256
  txSetColor(RGB(239,228,176),5);
    txSetFillColor(RGB(239,228,176));
  txCircle(x+657-657,y+291-291,25);



  }

void NPC(int x, int y, int xLegsNps)
  {
  txSetColor(TX_BLACK, 5);
    txSetFillColor(TX_BLACK);
  //legs
  txSetColor(TX_BROWN,5);
  //655-657
  //r
  txLine(x+655-657,y+400-291,x+615-657+xLegsNps,y+485-291);
  //l
  txLine(x+655-657,y+400-291,x+685-657-xLegsNps,y+485-291);


  // telo
  txSetColor(RGB(255,174,201),5);
  txLine(x+655-657,y+400-291,x+655-657,y+315-291);
  // hands
  // left hand
  txLine(x+655-657,y+315-291,x+630-657,y+350-291);
  txLine(x+630-657,y+350-291,x+630-657, y+385-291);
  //right hand

  txLine(x+655-657,y+315-291,x+685-657,y+350-291);
  txLine(x+685-657,y+350-291,x+685-657,y+385-291);
  //head
  //x=657, y=256
  txSetColor(RGB(239,228,176),5);
    txSetFillColor(RGB(239,228,176));
  txCircle(x+657-657,y+291-291,25);
   //Shlyapa :)
  txSetColor(TX_BLACK);
  txSetFillColor(RGB(119,73,49));
  txEllipse(x+607-657,y+252-291,x+705-657,y+293-291);
  txSetFillColor(RGB(135,0,21));
  txRectangle(x+639-657,y+259-291,x+675-657,y+277-291);
  txSetFillColor(RGB(119,73,49));
  txEllipse(x+639-657,y+249-291,x+675-657,y+270-291);

  }


 void fon()
 {// ��������
    txSetColor(TX_BLACK);
    txLine(0, 450, 800, 450);
  }

 void drawSky(COLORREF color)
 //RGB (31, 196, 224)
 {txSetColor(color);
 txSetFillColor(color);
    txRectangle(0, 0, 800, 600);

 }

 void drawSun(int x, int y)
 {txSetColor(RGB (255,255,0));
    txSetFillColor(RGB (255,255,0));
    txCircle  ( x, y,60 );}
    // 700, 102

void drawLand()
    {     txSetFillColor(RGB (85, 205, 50));
    txRectangle(0, 450, 800, 600);
    txSetColor(TX_YELLOW);
    }
void DrawSand()
    {     txSetFillColor(RGB (255, 201, 14));
    txRectangle(0, 450, 800, 600);
    }

void tree(int x, int y)
    {//������

    txSetColor(TX_BLACK);
    txSetFillColor(RGB(185,122,87));
    txRectangle(x+115-145,y+410-450,x+145-145,y+450-450);
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(64,151,60));
   POINT star[3] = {{x+90-145, y+410-450}, {x+170-145, y+410-450}, {x+130-145,y+340-450}};
          txPolygon (star, 3);

    POINT tree [3] = {{x+100-145, y+370-450}, {x+160-145, y+370-450}, {x+130-145,y+300-450}};
    txPolygon (tree, 3);

    POINT tree1 [3] = {{x+108-145, y+330-450}, {x+153-145, y+330-450}, {x+130-145,y+275-450}};
    txPolygon (tree1, 3);}

void tree2(int x, int y)
    {
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(185,122,87));
    txRectangle(x+315-341,y+321-474,x+341-341,y+474-474);


    txSetColor(RGB(34,177,76));
    txSetFillColor(RGB(34,177,76));
    txEllipse (x+292-341,y+186-474,x+376-341,y+310-474);
    txEllipse (x+320-341,y+256-474,x+409-341,y+349-474);
    txEllipse (x+265-341,y+239-474,x+346-341,y+346-474);
    txEllipse (x+296-341,y+299-474,x+360-341,y+384-474);
     }
void drawHome()
    {//����� ���
      //�����
     txSetColor(TX_BLACK);
    txLine(200, 280, 200,550);
    txLine(560, 280, 560, 550);
    txLine(560, 550, 200,550);
    txSetFillColor(RGB(185,122,87));
    txRectangle(200, 280, 560, 550);

    // �����

    txSetFillColor(TX_ORANGE);
    POINT star[3] = {{380, 30}, {180, 280}, {580, 280}};
    txPolygon (star, 3);
    txSetColor(TX_BLACK);
    txLine(180, 280, 580, 280);
    txLine(380, 30, 580, 280);
    txLine(380, 30, 180, 280);



    //����
    txSetFillColor(RGB (129,228,254));
    txRectangle(320,380, 450,480);

    txLine(320, 380, 450, 380);
    txLine(320, 380, 320, 480);
    txLine(450,380, 450, 480);
    txLine(450, 480, 320, 480);
    txLine(385, 380, 385, 480);
    txLine(320,430, 450, 430);
}
void drawCloud(int x, int y)
    {
    //txEllipse (61, 57, 280, 141);
     //txEllipse (190,30, 340, 124);
     //txEllipse (220,78,190,150);
     //txEllipse (120,87, 280,175);
    txSetColor (TX_WHITE);
    txSetFillColor(TX_WHITE);
     txEllipse (x+61-61, y, x+280-61, 141);
     txEllipse (x+190-61,30, x+340-61, 124);
     txEllipse (x+220-61,78,x+190-61,150);
     txEllipse (x+120-61,87, x+280-61,175);
     }
void drawMapa(int x, int y)
   {

    txSetColor(RGB(239,228,176));
    txSetFillColor(RGB(239,228,176));
    POINT mapa[4] = {{x+109-109, y+390-390},{x+138-109,y+420-390},{x+165-109,y+390-390},{x+138-109,y+364-390}};
    txPolygon (mapa, 4);
    txSetColor(RGB(236,14,26), 3);
    txLine (x+125-109,y+395-390, x+138-109, y+392-390);
    txLine (x+138-109,y+385-390,x+153-109,y+392-390);
    txLine (x+143-109,y+397-390,x+143-109,y+383-390);

    }
void doska ()
  {txSetColor(RGB(123,77,51));
    txSetFillColor(RGB(123,77,51));
    POINT doska[4] = {{394,576},{743,343},{801,343},{497,576}};
    txPolygon (doska, 4);
}
void bar(int x, int y)
    {
    // sand
    txSetColor(RGB (255, 201, 14));
    txSetFillColor(RGB (255, 201, 14));
    txRectangle(x+0-0, y+450-450, x+800-0, y+600-450);
    //sea
    txSetFillColor(RGB(0,130,185));
  txSetColor(RGB(0,130,185));
  txRectangle(x+-200-0,450,x+200-0,600);
    //bar
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(139,87,58));
    txRectangle(x+373-0,y+306-450,x+805-0,y+544-450);
    txRectangle(x+361-0,y+261-450,x+817-0,y+326-450);
    txRectangle(x+11-0,y+454-450,x+26-0,y+605-450);
    POINT pirs[4] = {{x+9-0,y+453-450},{x+373-0,y+451-450},{x+373-0,y+519-450},{x+54-0,y+519-450}};
    txPolygon (pirs, 4);
    txRectangle(x+55-0,y+519-450,x+70-0,y+605-450);

    txSelectFont("Comic Sans MS", 65);
    txDrawText(x+460-0,y+265-450,x+729-0,y+325-450, "���");

     }

void Titrs(int y,const char* text, int sizeFont)
     {


     txSetFillColor(TX_BLACK);
     txSetColor(TX_WHITE);
     txSelectFont("Comic Sans MS" , sizeFont);
     txDrawText (0,y,800,y+600,text);
     }
void inBar()
     {
     //���������
     txSetFillColor(RGB(135,0,21));
     txSetColor(RGB(135,0,21));
     txRectangle(0,360,800,600);
     txSetFillColor(RGB(185,122,87));
     txSetColor(RGB(185,122,87));
     txRectangle(0,0,800,360);
     //����
    txSetFillColor(RGB(31, 196, 224));
     txSetColor(RGB(102,64,43),3);
     txRectangle(190,60,412,234);
     txLine(301,60,301,234);
     txLine(190,147,412,147);



     }

void table()
     {//����
     txSetFillColor(RGB(102,64,43));
     txSetColor(TX_BLACK);
     txRectangle(510,391,566,544);
     txEllipse(357,324,739,440);



     }

void Replic(int x, int y, const char* text, int sizeFont)
     {
     txSetFillColor(TX_WHITE);
     txSetColor(TX_BLACK);
     txEllipse(x+454-454,y+280-280,x+551-454,y+334-280);
     txEllipse(x+389-454,y+220-280,x+531-454,y+319-280);
     txEllipse(x+150-454,y+100-280,x+543-454,y+268-280);
     txSetColor(TX_BLACK);
     txSelectFont("Comic Sans MS" , sizeFont);
     txDrawText (x+162-454,y+100-280,x+533-454,y+268-280,text);
     }

void Point(int x)
{
txLine(x,-300,x+1,-300);
}

void island()
{
txSetColor(RGB(31, 196, 224));
txSetFillColor(RGB(31, 196, 224));
txRectangle(0, 0, 800, 600);
txSetFillColor(RGB(0,130,185));
txSetColor(RGB(0,130,185));
txRectangle(0,450,800,600);
txSetColor(TX_BLACK);
txLine(0, 450, 800, 450);
txSetColor(TX_BLACK);
txSetFillColor(RGB(255,242,0));
txEllipse(79,429,866,767);
//����� ������
txSetColor(TX_BLACK,2);
txSetFillColor(RGB(185,122,87));
POINT palm3[5] = {{608,365},{650,365},{662,295},{629,253},{595,295}};
txPolygon (palm3, 5);
POINT palm4[5] = {{608,415},{650,415},{662,345},{629,303},{595,345}};
txPolygon (palm4, 5);
POINT palm2[5] = {{608,465},{650,465},{662,395},{629,353},{595,395}};
txPolygon (palm2, 5);
POINT palm1[5] = {{608,515},{650,515},{662,445},{629,403},{595,445}};
txPolygon (palm1, 5);
//����� ������
txSetFillColor(RGB(32,177,76));
POINT palmlist1[4] = {{629,253},{576,202},{525,245},{564,242}};
txPolygon (palmlist1, 4);
POINT palmlist2[4] = {{629,253},{699,200},{744,255},{692,241}};
txPolygon (palmlist2, 4);
POINT palmlist3[4] = {{629,253},{568,236},{492,335},{572,277}};
txPolygon (palmlist3, 4);
POINT palmlist4[4] = {{627,255},{582,285},{570,360},{611,311}};
txPolygon (palmlist4, 4);
POINT palmlist5[4] = {{629,253},{687,230},{762,321},{685,275}};
txPolygon (palmlist5, 4);
POINT palmlist6[4] = {{629,253},{697,303},{691,361},{657,312}};
txPolygon (palmlist6, 4);

}

void redkrest(int x,int y)
{ txSetColor(RGB(237,28,36),6);
txLine(x-0,y-0, x+50-0, y+50-0);
txLine(x-0,y+50-0,x+50-0, y+0-0);
}
void sunduk(int x, int y)
{
txSetColor(TX_BLACK);
txSetFillColor(RGB(255,242,0));
txEllipse(x+521-516,y+329-368,x+635-516,y+400-368);
txSetFillColor(RGB(150,94,63));
txRectangle(x+516-516,y+368-368,x+638-516,y+457-368);
}

void text(int x, int y, const char* text, int sizeFont)
{
txSetColor(TX_BLACK);
txSelectFont("Comic Sans MS" , sizeFont);
txDrawText (x,y,x+300,y+100,text);
}

void zadvizhki(int y, int zhdvig)
{
txSetFillColor(TX_BLACK);
txSetColor(TX_BLACK);
txRectangle(0,-300,800,y+0+y+zhdvig);
txRectangle(800,900,0,y+600+y-zhdvig);
}

int main()
    {
    txCreateWindow (800, 600);

    int yMan = 291;
    int xMan = 657;
    int xLegs = 0;
    int xSun = -100;
    int ySun = 250;
    int xCloud = -20;
    int xMapa = 109;
    int yMapa = 390;
    int xBar = 0;
    int yBar = 450;
    int xKarabl = 838;
    int yKarabl = 80;
    int xSea = 500;
    int xNPS = 558;
    int yNPS = 234 ;
    int xLegsNps = 0;
    int xPoint = 0;
    int yTitrs = 0;
    int xZadvizhki = 0;
    int zhdvig = 0;

    while(xPoint<110)
    {
    txBegin();
    Point(xPoint);
    txRectangle(0,0,800,600);
    Titrs(yTitrs,"������� ������� �.", 50);
    txEnd();
    xPoint +=1.5;
    txSleep(20);
    }

    xPoint=0;

    while(xPoint<60)
    {
    txBegin();
    Point(xPoint);
    txSetFillColor(TX_BLACK);
    txRectangle(0,0,800,600);
    Titrs(yTitrs,"� ������", 50);
    txEnd();
    xPoint +=1;
    txSleep(20);
    }

    xPoint=0;

    while(xPoint<100)
    {
    txBegin();
    Point(xPoint);
    txRectangle(0,0,800,600);
    Titrs(yTitrs,"������ �������� �����", 60);
    txEnd();
    xPoint +=1.5;
    txSleep(20);
    }

    while (yMan<375)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan - 2;
    yMan = yMan + 2;
    ySun = ySun - 1;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    text(500, 0, "���������:������� �.", 35);
    txSleep(20);
    }

    while (xMan>100)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(500, 0, "���������:������� �.", 35);
    txEnd();
    xMan = xMan - 3;
    ySun = ySun - 1;
    xSun = xSun + 2;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);
    }

    while (yMan >291)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);


    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan - 3;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);
    }

    while (yMan <375)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs + 13;
    xCloud = xCloud + 2;
    txSleep(20);


    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(0, 0, "��������:������� �.", 35);
    txEnd();
    yMan = yMan + 3;
    yMapa = yMapa + 3;
    xSun = xSun + 3;
    xLegs = xLegs - 13;
    xCloud = xCloud + 2;
    txSleep(20);
    }

    while (xMan <890)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs + 13;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs + 13;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs + 13;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs - 13;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs - 13;
    txSleep(15);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xMan = xMan + 4;
    xMapa = xMapa + 4;
    xSun = xSun + 3;
    xCloud = xCloud + 2;
    xLegs = xLegs - 13;
    txSleep(15);
    }

    while (xSun<900)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(10);
    }

    while (xCloud<900)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    tree(145,450);
    tree(90,470);
    drawLand();
    fon();
    drawHome();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    text(500, 0, "��������:������� �.", 35);
    txEnd();
    xCloud = xCloud + 2;
    txSleep(20);
    }

    xMan = -50;
    xMapa = -50;
    xCloud = -50;
    xSun = -50;

    while (xMan<900)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;xBar = 0;
    yBar = 450;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;xBar = 0;
    yBar = 450;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    drawLand();
    fon();
    tree2(50,480);
    tree(145,450);
    tree(180,480);
    tree(270,473);
    tree(350,475);
    tree(410,460);
    tree(450,480);
    tree2(430,485);
    tree(500,460);
    tree(550,470);
    tree(600,450);
    tree(100,460);
    tree2(700,480);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;xBar = 0;
    yBar = 450;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);
    }

    xMan = -50;
    xMapa = -50;
    xCloud = -50;
    xSun = -50;

    while (xMan<460)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(10);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(10);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
     xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(10);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    xMapa = xMapa + 3;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);
    }


    while (xMan<800)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    DrawSand();
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    doska ();
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    yMan = yMan - 2;
    xMapa = xMapa + 3;
    yMapa = yMapa - 2;
    xCloud = xCloud + 2;
    xSun = xSun + 3;
    txSleep(20);
    }

     //����
     xMan = 90;
     yMan = 79;
     xSea = 0;
     xKarabl = 330;
     yKarabl = 80;



    while (xSun<1200)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan + 1;
    yKarabl = yKarabl + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawSun(xSun, ySun);
    drawCloud(xCloud, 70);
    Sea(xSea);
    fon();
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    drawMapa(xMapa, yMapa);
    txEnd();
    xCloud = xCloud + 1;
    xSun = xSun + 2;
    yMan = yMan -1;
    yKarabl = yKarabl - 1;
    txSleep(20);
    }

    xBar = 200;
    yBar = 450;
    yMan = 150;
    xMan = 90;
    xKarabl = 0;
    yKarabl = 80;
    xSun = 0;

    while (xBar>50)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs - 13;
    txSleep(20);
    }

    while (xBar>0)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs - 13;
    yMan = yMan - 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs - 13;
    yMan = yMan - 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs - 13;
    yMan = yMan - 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs + 13;
    yMan = yMan - 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs + 13;
    yMan = yMan - 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xBar = xBar - 3;
    xKarabl = xKarabl - 3;
    xLegs = xLegs + 13;
    yMan = yMan - 3;
    txSleep(20);
    }

    while (yMan<300)
    {

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs - 13;
    yMan = yMan + 6;
    xMan = xMan + 1;

    txSleep(20);
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs - 13;
    yMan = yMan + 6;
    xMan = xMan + 1;
    txSleep(20);


    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs + 13;
    yMan = yMan + 6;
    xMan = xMan + 1;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs + 13;
    yMan = yMan + 6;
    xMan = xMan + 1;
    txSleep(20);
    }

    while (xMan<340)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs + 13;
    xMan = xMan + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    txEnd();
    xLegs = xLegs - 13;
    xMan = xMan + 3;
    txSleep(20);
    }

    xMan = 90;

    while( xMan< 295)
    {
    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan+3;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan+3;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan+3;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan+3;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan+3;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xMan = xMan+3;
    xLegs = xLegs - 13;
    txSleep(20);
    }


    xPoint = 0;

    while( xPoint< 30)
    {
    txBegin();
    Point(xPoint);
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xPoint = xPoint + 1;
    txSleep(20);
    }

    while( xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    Replic(410, 160, "������, ������ ���� ����� ��������", 25);
    txEnd();
    xPoint = xPoint + 1;
    txSleep(20);
    }

    xPoint = 0;

    while( xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    Replic(410, 160, "� ������ ����, �� �� ��������� �������", 25);
    txEnd();
    xPoint = xPoint + 1;
    txSleep(20);
    }

        while( xPoint< 130)
    {
    txBegin();
    Point(xPoint);
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xPoint = xPoint + 1;
    txSleep(20);
    }

    while( xNPS> -100)
    {
    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    inBar();
    NPC(xNPS,yNPS,xLegsNps);
    table();
    Man(xMan,yMan,xLegs);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txSleep(20);
    }

 //�� ���� ������� � �� ����� ����������� � ������� :)

    xMan = 280;
    yNPS = yMan;
    xNPS = 360;

while (xMan>100)
    {
    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txSleep(20);


    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txSleep(20);

    txBegin();
    drawSky(RGB (31, 196, 224));
    drawKarabl(xKarabl,yKarabl);
    bar(xBar,yBar);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    txEnd();
    xNPS = xNPS-3;
    xMan = xMan-3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txSleep(20);
    }
    xPoint = -5;

    while (xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    txSetFillColor(TX_BLACK);
    txRectangle(0,0,800,600);
    Titrs(0, "� ����� ��� �� �������", 60);
    txEnd();
    xPoint = xPoint +1;
    txSleep(20);
    }

    xPoint = 50;

    while (xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    Titrs(0, "", 60);
    txEnd();
    xPoint = xPoint +1;
    txSleep(20);
    }

    xPoint = 0;

    while (xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    txSetFillColor(TX_BLACK);
    txRectangle(0,0,800,600);
    Titrs(0, "������ 2 ���...", 60);
    txEnd();
    xPoint = xPoint +1;
    txSleep(20);
    }

    xKarabl = 30;
    xMan = 280;
    xNPS = xMan -70;
    yNPS = yMan +50;

    while(xMan<440)
    {
    txBegin();
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    xNPS = xNPS+3;
    xMan = xMan+3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txEnd();
    txSleep(20);

    txBegin();
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    xNPS = xNPS+3;
    xMan = xMan+3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txEnd();
    txSleep(20);

    txBegin();
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    xNPS = xNPS+3;
    xMan = xMan+3;
    xLegsNps = xLegsNps +13;
    xLegs = xLegs + 13;
    txEnd();
    txSleep(20);

    txBegin();
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    xNPS = xNPS+3;
    xMan = xMan+3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txEnd();
    txSleep(20);

    txBegin();
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    xNPS = xNPS+3;
    xMan = xMan+3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txEnd();
    txSleep(20);

    txBegin();
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    Man(xMan,yMan,xLegs);
    NPC(xNPS,yNPS,xLegsNps);
    xNPS = xNPS+3;
    xMan = xMan+3;
    xLegsNps = xLegsNps -13;
    xLegs = xLegs - 13;
    txEnd();
    txSleep(20);
    }

    while( xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    island();
    redkrest(500,500);
    drawKarabl(xKarabl,yKarabl);
    NPC(xNPS,yNPS,xLegsNps);
    Man(xMan,yMan,xLegs);
    Replic(290, 250, "���, ��� �����!", 28);
    txEnd();
    xPoint = xPoint + 1;
    txSleep(20);
    }

    xPoint = 0;

    while (xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    txSetFillColor(TX_BLACK);
    txRectangle(0,0,800,600);
    Titrs(0, "5 ����� ������...", 60);
    txEnd();
    xPoint = xPoint +1;
    txSleep(20);
    }

    xPoint = 0;

    while( xPoint< 100)
    {
    txBegin();
    Point(xPoint);
    island();
    sunduk(480,450);
    drawKarabl(xKarabl,yKarabl);
    NPC(xNPS,yNPS,xLegsNps);
    Man(xMan,yMan,xLegs);
    Replic(290, 250, "�� ����� ���!", 28);
    txEnd();
    xPoint = xPoint + 1;
    txSleep(20);
    }

    while( zhdvig< 300)
    {
    txBegin();
    Point(xPoint);
    island();
    sunduk(480,450);
    drawKarabl(xKarabl,yKarabl);
    NPC(xNPS,yNPS,xLegsNps);
    Man(xMan,yMan,xLegs);
    zadvizhki(xZadvizhki,zhdvig);
    txEnd();
    zhdvig = zhdvig + 2;
    txSleep(20);
    }

    yTitrs = 600;

    while(yTitrs+1500>0)
    {
    txBegin();
    txSetColor(TX_BLACK);
    txRectangle(0,0,800,600);
    Titrs(yTitrs-200,"� ��� � ��", 65);
    Titrs(yTitrs+100,"�� ������ ���������� �������", 60);
    Titrs(yTitrs+400,"����������, ������,", 60);
    Titrs(yTitrs+800,"� ����� �������,", 60);
    Titrs(yTitrs+1000,"� ���� ������� ���������� �����.", 60);
    Titrs(yTitrs+1500,"�����.", 70);
    txEnd();
    yTitrs = yTitrs - 2;
    txSleep(20);
}



    txTextCursor (false);
    return 0;
    }

