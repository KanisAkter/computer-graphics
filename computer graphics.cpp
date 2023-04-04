#include<iostream>
#include<stdio.h>
#include<graphics.h>
using namespace std;

void menu();
void ShaheedMinar();
void Running_Bus();
void NationalMartyrs();
void Emoji();
void Home();
void Star();
void Flag();
int main()

{
    cout<<"\n\n\t\t\t\t\t Kanis Akter\n\t\t\t\t\tCSE_2001019263-\t19A\n\n\n\n";


    int gd=DETECT,gm;
    //initgraph(&gd,&gm,"");


    //myinfo();
    //ShaheedMinar();
    //NationalMartyrs();
    //Emoji();
    //menu();
    int choose;
    menu();
    {
        cout<<"\tEnter your choice :";
        cin>> choose;
        initwindow (1280,1024,"test");
        //cout<<"you entered :"<< choose;

        switch(choose)
        {



        case 1:
            ShaheedMinar();
            break;
        case 2:
            Running_Bus();
            break;


        case 3:
            NationalMartyrs();
            break;


        case 4:
            Emoji();
            break;


        case 5:
            Home();
            break;

        case 6:
            Star();
            break;


        case 7:
            Flag();
            break;


        //case 8:
        // break;


        //case 9:
        //break;

        default:
            cout<<"Invalid choice";
            break;


        }
    }




}

void ShaheedMinar()
{
    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);


    //name end


    line(300,500,1000,500);
    line(300,500,300,510);
    line(1000,500,1000,510);

    line(290,510,1010,510);
    line(290,510,290,520);
    line(1010,510,1010,520);

    line(290,520,1010,520);

    line(280,520,1020,520);
    line(280,520,280,530);
    line(1020,520,1020,530);
    line(280,530,1020,530);


    line(647,250,647,500);
    line(653,250,653,500);

    line(647,250,687,150);
    line(653,250,693,150);

    line(687,150,647,150);
    line(693,150,733,150);

    line(647,250,647,500);

    line(607,250,607,500);
    line(607,250,647,150);

    line(601,250,601,500);
    line(601,250,649,130);


    line(693,250,693,500);
    line(693,250,733,150);

    line(699,250,699,500);
    line(699,250,749,130);


    line(649,130,749,130);



    rectangle(739,280,799,500);
    rectangle(749,300,789,500);

    rectangle(839,330,899,500);
    rectangle(849,350,889,500);


    //left


    rectangle(501,280,561,500);
    rectangle(511,300,551,500);

    rectangle(401,330,461,500);
    rectangle(411,350,451,500);

    //color

    setfillstyle(1,7);
    floodfill(301,501,WHITE);


    setfillstyle(1,7);
    floodfill(291,511,WHITE);

    setfillstyle(1,7);
    floodfill(281,521,WHITE);

    setfillstyle(1,15);
    floodfill(402,331,WHITE);

    setfillstyle(1,15);
    floodfill(502,281,WHITE);

    setfillstyle(1,15);
    floodfill(650,131,WHITE);


    setfillstyle(1,15);
    floodfill(740,281,WHITE);

    setfillstyle(1,15);
    floodfill(840,331,WHITE);



    setcolor(RED);
    circle(650,375,80);
    setfillstyle(SOLID_FILL,RED);
    floodfill(654,379,RED);




    getch();
    closegraph();



}

void Running_Bus()
{

    int page=0;



    for(int i=0; i<=1280; i++)
    {

        //name
        line(200,10,200,30);
        line(200,20,215,10);
        line(200,20,215,30);

        line(230,10,221,30);
        line(230,10,239,30);
        line(225,20,235,20);

        line(243,10,243,30);
        line(243,10,260,30);
        line(260,30,260,10);

        line(265,10,265,30);

        line(270,10,285,10);
        line(285,10,270,30);
        line(270,30,285,30);

        line(310,10,300,30);
        line(310,10,320,30);
        line(305,20,315,20);

        line(325,10,325,30);
        line(325,20,340,10);
        line(325,20,340,30);

        line(345,10,365,10);
        line(355,10,355,30);

        line(370,10,385,10);
        line(370,10,370,30);
        line(370,30,385,30);
        line(370,20,385,20);

        line(390,10,390,30);
        line(390,10,403,10);
        line(390,23,407,23);
        arc(400,20,328,65,10);
        line(390,23,408,30);

        //id


        arc(190,50,80,280,10);

        arc(200,50,45,130,10);
        line(192,44,205,55);
        arc(200,50,200,310,9);

        line(210,40,210,60);
        line(210,40,220,40);
        line(210,50,220,50);
        line(210,60,220,60);

        arc(240,50,270,130,8);
        line(237,57,250,65);
        circle(258,50,8);
        circle(278,50,8);
        line(290,40,290,60);
        line(290,40,286,43);
        circle(300,50,8);
        line(310,40,310,60);
        line(310,40,307,43);


        circle(318,45,6);
        arc(319,50,0,90,10);
        arc(320,50,300,0,10);
        arc(319,50,270,0,10);

        arc(335,47,265,115,8);
        line(334,55,346,61);

        circle(355,55,6);
        arc(356,50,70,270,10);

        arc(369,45,260,130,6);
        arc(369,55,250,130,6);


//bus start
        //lower side

        line(50+i,400,120+i,400);
        line(51+i,401,121+i,401);

        arc(150+i,400,0,180,30);
        arc(151+i,401,0,180,31);

        line(180+i,400,260+i,400);
        line(181+i,401,261+i,401);

        arc(290+i,400,0,180,30);
        arc(291+i,402,0,180,31);

        line(320+i,400,410+i,400);
        line(321+i,401,411+i,401);



        //chaka

        setcolor(WHITE);
        circle(150+i,400,25);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(151+i,401,WHITE);



        setcolor(WHITE);
        circle(290+i,400,25);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(291+i,401,WHITE);



        //bus body
        line(50+i,400,50+i,290);
        line(51+i,401,51+i,291);

        line(50+i,290,410+i,290);
        line(51+i,291,411+i,291);

        line(410+i,290,410+i,400);
        line(411+i,291,411+i,400);

        line(50+i,350,410+i,350);
        line(51+i,351,411+i,351);


        line(140+i,290,140+i,350);
        line(141+i,291,141+i,351);

        line(230+i,290,230+i,350);
        line(231+i,290,231+i,351);

        line(320+i,290,320+i,350);
        line(321+i,291,321+i,351);

        rectangle(60+i,300,130+i,340);
        rectangle(61+i,301,131+i,341);

        rectangle(150+i,300,220+i,340);
        rectangle(151+i,301,221+i,341);

        rectangle(240+i,300,310+i,340);
        rectangle(241+i,301,311+i,341);

        rectangle(330+i,300,400+i,340);
        rectangle(331+i,301,401+i,341);

//driver
        line(380+i,320,400+i,340);
        circle(380+i,320,5);
        circle(355+i,315,10);



        line(355+i,323,355+i,340);
        line(355+i,323,380+i,320);

        setcolor(WHITE);
        rectangle(0,425,1280,1024);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(1,426,WHITE);

        setcolor(WHITE);
        circle(50+i,100,30);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(51+i,101,WHITE);


        setactivepage(page);
        setvisualpage(1-page);

        cleardevice();
        delay(2);
        page=1-page;


    }





    getch();
    closegraph();











}


void NationalMartyrs()
{
    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);

    //name end

//last floor
    line(300,500,1000,500);
    line(300,500,300,510);
    line(1000,500,1000,510);
    line(300,510,1000,510);

//
    line(650,250,650,500);
    line(651,251,651,501);
    line(650,250,660,500);
    line(651,251,661,501);

    line(700,200,700,500);
    line(701,201,701,501);
    line(700,200,710,500);
    line(701,201,711,501);

    line(650,250,700,300);
    line(651,251,701,301);
    line(650,250,704,300);
    line(651,251,705,301);

    line(750,150,750,500);
    line(751,151,751,501);
    line(750,150,760,500);
    line(751,151,761,501);
    line(700,200,750,250);
    line(701,201,751,251);
    line(700,200,754,250);
    line(701,201,755,251);


    line(800,100,800,500);
    line(801,101,801,501);
    line(800,100,810,500);
    line(801,101,811,501);

    line(750,150,800,200);
    line(751,151,801,201);
    line(750,150,804,200);
    line(751,151,805,201);


    line(600,300,600,500);
    line(601,301,601,501);
    line(600,300,610,500);
    line(601,301,611,501);

    line(600,300,650,350);
    line(601,301,651,351);
    line(600,300,654,350);
    line(601,301,655,351);

    line(550,350,550,500);
    line(551,351,551,501);
    line(550,350,560,500);
    line(551,351,561,501);

    line(550,350,600,400);
    line(551,351,601,401);
    line(550,350,604,400);
    line(551,351,605,401);

    line(470,400,450,500);
    line(471,401,451,501);
    line(470,400,470,500);
    line(470,401,471,501);

    line(470,400,550,450);
    line(471,401,551,451);
    line(470,400,554,460);
    line(471,401,555,461);

    setcolor(RED);
    circle(700,370,90);
    setfillstyle(SOLID_FILL,RED);
    floodfill(654,379,RED);



    //c0l0r



    /* setfillstyle(1,2);
     floodfill(480,499,WHITE);

      setfillstyle(1,2);
     floodfill(553,461,WHITE);

      setfillstyle(1,2);
     floodfill(801,350,WHITE);

      setfillstyle(1,2);
     floodfill(653,351,WHITE);

      setfillstyle(1,2);
     floodfill(751,499,WHITE);

      setfillstyle(1,2);
     floodfill(701,499,WHITE);

      setfillstyle(1,2);
     floodfill(601,499,WHITE);
    */
    setfillstyle(1,8);
    floodfill(301,501,WHITE);

    getch();
    closegraph();

}

void Emoji()
{

    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);

//name end

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL,YELLOW);
    circle(600,300,160);
    floodfill(601,301,YELLOW);
    setcolor(BLACK);
    ellipse(545,260,180,0,30,30);
    ellipse(546,261,180,0,30,30);
    ellipse(547,262,180,0,30,30);

    ellipse(655,260,180,0,30,30);
    ellipse(656,261,180,0,30,30);
    ellipse(657,262,180,0,30,30);

    ellipse(600,300,180,0,110,100);
    ellipse(601,301,180,0,110,100);
    ellipse(602,302,180,0,110,100);

    getch();
    closegraph();


}

void Home()
{

    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);


    //name end

    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);


    //house

    line(200,100,140,200);
    line(200,100,350,100);
    line(210,100,150,200);
    line(140,200,150,200);
    line(210,100,300,200);
    line(350,100,450,200);
    line(300,200,450,200);
    line(148,200,148,300);
    line(305,200,305,300);
    line(445,200,445,300);
    line(148,300,305,300);
    line(305,300,445,300);
    line(148,300,140,310);
    line(305,300,305,310);
    line(445,300,455,310);
    line(140,310,305,310);
    line(305,310,455,310);


    rectangle(200,230,250,270);
    rectangle(350,220,400,300);

    line(350,220,360,230);
    line(400,220,390,230);
    line(360,230,360,300);
    line(390,230,390,300);

    setfillstyle(1,12);
    floodfill(210,110,WHITE);
    setfillstyle(6,12);
    floodfill(201,101,WHITE);
    setfillstyle(2,3);
    floodfill(201,231,WHITE);
    setfillstyle(4,3);
    floodfill(320,201,WHITE);
    setfillstyle(1,12);
    floodfill(351,225,WHITE);
    setfillstyle(1,12);
    floodfill(399,225,WHITE);
    setfillstyle(1,8);
    floodfill(149,301,WHITE);
    setfillstyle(1,8);
    floodfill(310,301,WHITE);


//green field
    setcolor(GREEN);
    rectangle(0,312,1280,1024);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1,501,GREEN);

    //megh

    setcolor(15);
    circle(520,30,30);
    setfillstyle(SOLID_FILL,15);
    floodfill(521,31,15);


    /* setcolor(15);
     circle(560,50,30);
     setfillstyle(SOLID_FILL,15);
     floodfill(561,51,15);

     setcolor(15);
     circle(470,60,30);
     setfillstyle(SOLID_FILL,15);
     floodfill(471,61,15);


     setcolor(15);
     circle(510,80,30);
     setfillstyle(SOLID_FILL,15);
     floodfill(511,81,15);
    */

    //dolna



    line(730,200,630,380);
    line(820,200,730,380);

    line(630,380,730,380);
    line(630,380,620,400);
    line(730,380,720,400);
    line(620,400,720,400);

    setfillstyle(1,WHITE);
    floodfill(621,399,WHITE);


    line(700,200,700,350);
    line(701,201,701,350);
    line(850,200,850,350);
    line(851,201,851,351);
    line(700,200,850,200);
    line(701,201,851,201);


    //TREE
    //circle(950,100,40);
    //circle(900,120,40);
    //circle(950,150,40);
    //circle(900,70,40);
    //circle(950,40,40);
    //circle(1000,75,40);
    //circle(1000,130,40);

    setcolor(GREEN);
    circle(950,100,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(950,101,GREEN);

    setcolor(GREEN);
    circle(900,120,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(901,121,GREEN);

    setcolor(GREEN);
    circle(950,150,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(951,151,GREEN);

    setcolor(GREEN);
    circle(900,70,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(901,72,GREEN);

    setcolor(GREEN);
    circle(950,40,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(951,41,GREEN);

    setcolor(GREEN);
    circle(1000,75,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1001,76,GREEN);

    setcolor(GREEN);
    circle(1000,130,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1001,131,GREEN);

    setcolor(6);
    rectangle(950,155,970,320);
    setfillstyle(SOLID_FILL,6);
    floodfill(951,156,6);

    //2nd tree

    setcolor(GREEN);
    circle(1095,150,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1096,151,GREEN);

    setcolor(GREEN);
    circle(1115,100,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1116,101,GREEN);

    setcolor(GREEN);
    circle(1145,150,40);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(1146,151,GREEN);


    setcolor(6);
    rectangle(1115,159,1125,320);
    setfillstyle(SOLID_FILL,6);
    floodfill(1116,160,6);

    getch();
    closegraph();

}



void Star()
{

    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);


    //name end


    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    line(100,100,50,300);
    line(100,100,150,300);

    line(10,180,190,180);
    line(10,180,150,300);
    line(190,180,50,300);
    floodfill(75,190,WHITE);

    floodfill(55,290,WHITE);

    floodfill(130,200,WHITE);

    floodfill(110,250,WHITE);


    floodfill(101,170,WHITE);

    floodfill(80,200,WHITE);

    getch();
    closegraph();


}
void Flag()
{

    line(200,10,200,30);
    line(200,20,215,10);
    line(200,20,215,30);

    line(230,10,221,30);
    line(230,10,239,30);
    line(225,20,235,20);

    line(243,10,243,30);
    line(243,10,260,30);
    line(260,30,260,10);

    line(265,10,265,30);

    line(270,10,285,10);
    line(285,10,270,30);
    line(270,30,285,30);

    line(310,10,300,30);
    line(310,10,320,30);
    line(305,20,315,20);

    line(325,10,325,30);
    line(325,20,340,10);
    line(325,20,340,30);

    line(345,10,365,10);
    line(355,10,355,30);

    line(370,10,385,10);
    line(370,10,370,30);
    line(370,30,385,30);
    line(370,20,385,20);

    line(390,10,390,30);
    line(390,10,403,10);
    line(390,23,407,23);
    arc(400,20,328,65,10);
    line(390,23,408,30);

    //id


    arc(190,50,80,280,10);

    arc(200,50,45,130,10);
    line(192,44,205,55);
    arc(200,50,200,310,9);

    line(210,40,210,60);
    line(210,40,220,40);
    line(210,50,220,50);
    line(210,60,220,60);

    arc(240,50,270,130,8);
    line(237,57,250,65);
    circle(258,50,8);
    circle(278,50,8);
    line(290,40,290,60);
    line(290,40,286,43);
    circle(300,50,8);
    line(310,40,310,60);
    line(310,40,307,43);


    circle(318,45,6);
    arc(319,50,0,90,10);
    arc(320,50,300,0,10);
    arc(319,50,270,0,10);

    arc(335,47,265,115,8);
    line(334,55,346,61);

    circle(355,55,6);
    arc(356,50,70,270,10);

    arc(369,45,260,130,6);
    arc(369,55,250,130,6);


    //name end

    setcolor(WHITE);
    rectangle(500,100,510,600);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(501,101,WHITE);

    setcolor(WHITE);
    rectangle(470,600,540,610);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(471,601,WHITE);


    setcolor(GREEN);
    rectangle(510,110,860,300);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(511,111,GREEN);



    setcolor(4);
    circle(690,205,60);
    setfillstyle(SOLID_FILL,4);
    floodfill(691,206,4);




    getch();
    closegraph();



}
void menu()
{

    cout<<"\t1. Shaheed Minar\n";
    cout<<"\t2. Running Bus\n";
    cout<<"\t3. National Martyrs\n";
    cout<<"\t4. Emoji\n";
    cout<<"\t5. Home\n";
    cout<<"\t6. star\n";
    cout<<"\t7. Flag\n";

}










