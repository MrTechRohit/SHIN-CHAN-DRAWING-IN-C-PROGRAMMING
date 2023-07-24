// _________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL ___________
//__________ C++ PROGRAMMING TO DRAW SHINCHAN CARTOON ANIMATION ____________

#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void floodfill(int a, int b, int old, int fill)
{
int current;
current=getpixel(a,b);
if(current==old)
{
putpixel(a,b,fill);
delay(0);
floodfill(a+1,b,old,fill);
floodfill(a-1,b,old,fill);
floodfill(a,b+1,old,fill);
floodfill(a,b-1,old,fill);
}
}
void main()
{
int gd=DETECT,gm,o=0;
initgraph(&gd,&gm,"c:\\tc\\bgi");

setcolor(4);
settextstyle(1,0,1);
outtextxy(400,380,"Created by :- ");
setcolor(1);
outtextxy(400,400,"COMPUTER SOFT SKILLS");
setcolor(6);
outtextxy(400,420,"(ROHIT)");

arc(210,230,60,280,30);
arc(270,200,30,186,48);
arc(275,190,50,137,45);
arc(290,180,320,70,30);

circle(245,200,9);
circle(242,201,2);
circle(275,200,9);
circle(270,201,2);
circle(200,240,5);

line(210,260,316,220);
arc(320,207,260,135,12);

line(215,280,210,310);
arc(275,195,10,180,10);
arc(242,195,10,180,10);

line(310,175,310,200);
line(230,180,248,175);
line(244,175,258,180);
line(265,180,275,175);

line(275,175,289,180);
line(277,168,289,175);
line(265,175,278,166);
line(230,175,248,168);

line(248,168,258,175);
line(258,175,258,180);
line(230,175,230,180);
line(265,175,264,181);

line(290,175,290,180);
line(310,240,315,310);
line(320,218,350,250);
line(308,240,328,255);

line(328,255,320,284);
line(350,250,330,290);
line(214,280,136,223);
line(180,235,140,215);

arc(265,255,223,310,75);
line(314,308,320,360);
arc(290,308,240,300,60);
arc(240,308,230,295,60);

line(205,355,210,300);
line(220,366,220,408);
line(238,366,228,408);
line(300,366,300,408);
line(280,366,292,408);

arc(228,380,230,295,11);
arc(296,380,227,290,12);
circle(135,215,8);
circle(320,295,10);

line(290,408,302,408);
line(214,408,230,408);
line(214,408,206,414);
line(206,415,230,415);
line(302,408,314,414);
line(290,415,314,415);

line(290,408,290,415);
line(230,408,230,415);
line(260,350,260,360);

setcolor(4);
line(212,300,312,300);
floodfill(216,305,o,4);
line(184,260,312,260);
floodfill(216,270,o,4);
floodfill(250,250,o,4);
floodfill(180,240,o,4);
floodfill(216,315,o,30);
floodfill(230,393,o,15);
floodfill(298,393,o,15);
floodfill(245,200,o,15);
floodfill(275,200,o,15);

closegraph;
getch();
}


//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________










