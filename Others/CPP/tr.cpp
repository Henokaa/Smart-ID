#include<windows.h>

#include <fstream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <conio.h>
#include <ctime>
#include <dos.h>
#include <iomanip>
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;
int i,j,li,lp,rec,valid,grade,tuition=500,ac=900,science=800,activity=400,computer=300;
int ttuition,tac,tscience,tactivity,tcomputer;
char ch,choice,name[10],mode,graphh;
void mainmenu();
class DRAW
{
public :
void LINE_HOR( int , int, int , char) ;
void LINE_VER( int , int, int , char) ;
void BOX( int , int , int, int , char) ;
} ;

void qwert( int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void DRAW :: LINE_HOR( int column1, int column2, int row, char c)
{
for ( column1; column1<=column2; column1++ )
{
qwert(column1,row) ;
cout <<c ;
}
}
//**********************************************************
// FUNCTION TO DRAW VERTICAL LINE
//**********************************************************
void DRAW :: LINE_VER( int row1, int row2, int column, char c)
{
for ( row1; row1<=row2; row1++ )
{
qwert(column,row1) ;
cout <<c ;
}
}
//**********************************************************
// FUNCTION TO DRAW BOX LINE
//**********************************************************
void DRAW :: BOX( int column1, int row1, int column2, int row2, char c)
{
char ch=218 ;
char c1, c2, c3, c4 ;
char l1=196, l2=179 ;
if (c == ch)
{
c1=218 ;
c2=191 ;
c3=192 ;
c4=217 ;
l1 = 196 ;
l2 = 179 ;
}
else
{
c1=c ;
c2=c ;
c3=c ;
c4=c ;
l1 = c ;
l2 = c ;
}
qwert(column1,row1) ;
cout <<c1 ;
qwert(column2,row1) ;
cout <<c2 ;
qwert(column1,row2) ;
cout <<c3 ;
qwert(column2,row2) ;
cout <<c4 ;
column1++ ;
column2-- ;
LINE_HOR(column1,column2,row1,l1) ;
LINE_HOR(column1,column2,row2,l1) ;
column1-- ;
column2++ ;
row1++ ;
row2-- ;
LINE_VER(row1,row2,column1,l2) ;
LINE_VER(row1,row2,column2,l2) ;
}
//**********************************************************
// FUNCTION TO ADD FEE STRUCTURE IN FEE FILE
//**********************************************************
void modify()
{
    system( "cls" ) ;
     system("color 5f");
    cout<<"ARE YOU SURE YOU WANT TO MODIFY THE PROGRAM(Y/N)";
    cin>>mode;
    if(mode=='y')
    {
        qwert(5,5) ;
cout <<"Class : ";
qwert(5,7) ;
cout <<"~~~~~~~~"<<endl ;
qwert(5,8);
cout <<"enter your new Tution Fee  : ";
cin>>ttuition ;
qwert(5,9);
cout <<" enter your new Annual charges Fee  : ";
cin>>tac ;
qwert(5,10) ;
cout <<"enter your new Science Fee : ";
cin>>tscience ;
qwert(5,11) ;
cout <<"enter your new Computer Fee: ";
cin>>tcomputer ;
qwert(5,12) ;
cout <<"enter your new Activity Fee : ";
cin>>tactivity ;
qwert(5,17) ;
cout <<"Class : ";
qwert(5,19) ;
cout <<"~~~~~~~~~~~~" ;
qwert(5,21) ;
tuition=ttuition;
cout <<"your new Tution Fee : "<<tuition ;
qwert(5,23) ;
ac=tac;
cout <<"your new Annual charges Fee  : "<<ac ;
qwert(5,25) ;
science=tscience;
cout <<"your new Science Fee : "<<science ;
qwert(5,27) ;
computer=tcomputer;
cout <<"your new Computer Fee: "<<computer ;
qwert(5,28) ;
activity=tactivity;
cout <<"your new Activity Fee : "<<activity ;


}
else
{
     return mainmenu();
}
cout<<endl;
cout<<"enter a key to continue";
getch();
mainmenu();
    }



void fee()
{
 system( "cls" ) ;
char ch, t1[10] ;
int valid=0, t=0, tclass=0 ;
do
{
valid = 1 ;
qwert(5,25) ;
cout <<"Press <ENTER> for EXIT" ;
qwert(5,5) ;
cout <<"GRADE OF THE STUDENT: " ;
cin>>grade;
/*gets(t1) ;
t = atoi(t1) ;
tclass = t ;
if (strlen(t1) == 0)
return ;*/
if (grade < 1 || grade > 12)
{
valid = 0 ;
qwert(5,25) ;
cout <<" PLS ENTER AGAIN............" ;
getch() ;
}
} while (!valid) ;
char name[26] ;


do
{
qwert(5,25) ;
cout <<"ENTER NAME OF THE STUDENT............." ;
valid = 1 ;
qwert(5,7) ;
cout <<"Name : " ;
gets(name) ;
if (strlen(name) < 1 || strlen(name) > 25)//streln counts array elements
{
valid = 0 ;
qwert(5,25) ;
cout <<"NAME SHOULD NOT BE GREATER THAN 25" ;
getch() ;
}
} while (!valid);
system( "cls" ) ;
DRAW d ;
d.BOX(20,2,61,24,987) ;
qwert(24,3) ;
cout <<"         DANDII BORU SCHOOL      " ;
int d1, m1, y1 ;
time_t td = time(0);
struct tm * now = localtime( & td );
d1 = now->tm_mday ;
m1 = (now->tm_mon +1 ) ;
y1 = (now->tm_year +1900 );
qwert(45,4) ;
cout <<"Date: "<<d1 <<"/"<<m1 <<"/"<<y1 ;
d.LINE_HOR(21,60,5,196) ;
qwert(22,6) ;
cout <<"NAME  : "<<name ;
qwert(22,7) ;
cout <<"CLASS : "<<grade ;
d.LINE_HOR(21,60,8,196) ;
qwert(21,9) ;
cout <<"    PARTICULARS               AMOUNT" ;
d.LINE_HOR(21,60,10,196) ;
d.LINE_HOR(21,60,22,196) ;
d.LINE_HOR(46,60,20,196) ;
qwert(25,21) ;
cout <<"TOTAL" ;
qwert(35,23) ;
cout <<"CASHIER W/0 WEBENESH" ;
float total=0.0 ;
qwert(23,12) ;
cout <<"Tuition fees               "<<setprecision(2) <<tuition ;
total = total+tuition ;
qwert(23,13) ;
cout <<"Annual charges fees       "<<setprecision(2) <<ac ;
total = total+ac ;
qwert(23,14) ;
cout <<"Science fees              "<<setprecision(2) <<science ;
total = total+science ;
qwert(23,15) ;
cout <<"Computer fees             "<<setprecision(2) <<computer ;
total = total+computer ;
qwert(23,16) ;
cout <<"Activity fees             "<<setprecision(2) <<activity ;
total = total+activity ;
d.LINE_VER(9,21,46,179) ;
int tt=total;
qwert(49,21) ;
cout <<tt ;
qwert(33,30);
cout<<"Press any key to return to the main menu........" ;
getch();
mainmenu();
}


	void list()
{
    system("color 5f");
 system( "cls" ) ;
DRAW d ;

 d.BOX(1,2,80,24,218) ;
 qwert(27,3) ;
 cout <<"TOTAL FEES FOR THE CLASSES" ;
d.LINE_HOR(2,79,4,196) ;
qwert(5,5) ;
cout <<"CLASS             TOTAL FEES" ;
d.LINE_HOR(2,79,6,196) ;
d.LINE_HOR(2,79,22,196) ;
float total ;
int row=8 ;



qwert(6,row) ;
cout <<"tuition  "<<tuition <<endl;
qwert(6,10) ;
cout <<"science  " <<science<<endl;
qwert(6,12) ;
cout <<"ac  " <<ac<<endl;
qwert(6,14) ;
cout <<"computer  "<<computer <<endl;
qwert(6,16) ;
cout <<"activity  "<<activity<<endl;
qwert(23,row) ;
total = tuition + ac + science + computer + activity ;
cout <<total;
row++ ;

//file.close() ;
qwert(5,23) ;
cout <<"Press any key to continue............." ;
getch() ;
mainmenu();
}



void graph()
{
     system( "cls" ) ;
 system("color 5F");
int array[6];

array[0]=tuition;
array[1]=ac;
array[2]=science;
array[3]=computer;
array[4]=activity;
//cin>>array[5];

int higest=array[0];
for(int check=0;check<=4;check++)
{
    if(array[check]>=higest)
        higest=array[check]; //assign higest to the highest number
}
for(int rows=higest;rows>=1;rows--)
{
    for(int cols=0;cols<=4;cols++)
    {
        if(array[cols]>=rows)
            cout<<"*   ";
        else
            cout<<"    ";

    }
    cout<<endl;

}

                 for( int cols=0;cols<=4;cols++)

                     cout<<"--  ";
                   cout<<endl;

                    // for(int cols=1;cols<=5;cols++)

                         cout<< "tu" <<"  "<<"ac"<<"  "<<"sc"<<"  "<<"co"<<"  "<<"act"<<"  ";
                         cout<<endl;
                         cout<<"TO DRAW GRAPH PRESS C TO GO BACK TO MAIN MENU PRESS ANY KEY";

cin>>graphh;
    if(graphh=='c')
        {
    int array[6];
    cout<<"enter the first profile";
cin>>array[0];
 cout<<"enter the second profile";
cin>>array[1];
 cout<<"enter the third profile";
cin>>array[2];
 cout<<"enter the forth profile";
cin>>array[3];
 cout<<"enter the 5TH profile";
cin>>array[4];
 cout<<"enter the 6TH profile";
cin>>array[5];
int higest=array[0];
for(int check=0;check<=5;check++)
{
    if(array[check]>=higest)
        higest=array[check]; //assign higest tothe highest number
}
for(int rows=higest;rows>=1;rows--)
{
    for(int cols=0;cols<=5;cols++)
    {
        if(array[cols]>=rows)
            cout<<"* ";
        else
            cout<<"  ";

    }
    cout<<endl;

}

                 for( int cols=0;cols<=5;cols++)

                     cout<<"--";
                   cout<<endl;

                     for(int cols=1;cols<=6;cols++)

                         cout<< cols <<" ";
                         cout<<endl;



}
else{


getch() ;
mainmenu();
}
getch() ;
mainmenu();
}
void help()
{
     system( "cls" );
cout<<"This is a fee structure program"<<endl;
cout<<"It can be used to :  "<<endl;
cout<<"1. View the fee slip of a student of a class"<<endl;
cout<<"2. Modify the fee structure of the school"<<endl;
cout<<"3. View the fee structure of the school in the form of a list"<<endl;
cout<<"The menu functions are described as follows"<<endl;
cout<<"1. pay FEE :  This function displays the fee slip for a given student"<<endl;
 cout<<" from the class entered by the user. "<<endl;

cout<<"2. LIST:      This function displays the list of total fees for all the class that is given by dandii boru school"<<endl;
cout<<"3. MODIFY:    This function modifies the fee structure for a give class."<<endl;
cout<<" The user can change the fees for various fields"<<endl;
 cout<<"Press any key to continue..........."<<endl;
getch();
mainmenu();
}





    void mainmenu()
{
    system("COLOR 3F");

 system( "cls" );
for (li=30;li<=50;li++)
{
qwert(li,12);
Sleep(30);
printf( "*" );
}
for (li=50;li>=30;li--)
{
qwert(li,32);
Sleep(30);
printf( "*" );
}
for (lp=12;lp<33;lp++)
{
qwert(29,lp);
Sleep(100);
printf( "|" );
}
for (lp=32;lp>=13;lp--)
{
qwert(50,lp);
Sleep(100);
printf( "|" );
}
qwert(15,10);
cout<<"Press the Keys for the desired action...";
qwert(35,16);
cout<<"F: PAY FEES";
qwert(35,19);
cout<< "L: list";
qwert(35,22);
cout<<"M: MODIFY";
qwert(35,25);
cout<<"G: draw graph";
qwert(35,28);
printf( "H: HELP" );
qwert(35,31);
printf( "Q: QUIT" );
//choice=getch();
//ch=toupper(choice);
choice=getch();
ch=toupper(choice);
switch(ch)
{
case'F' :fee();
break ;
case'L' :list();
break ;
case'M' :modify();
break ;
case'G' :graph();
break ;
case'H' :help();
break ;
case'Q' :return ;
break ;
default :qwert(33,40);
cout<<"Illegal Choice Press any key to return to Main Menu" ;
}
}



    int main()
{
  system("color 1F");
   // drawing the 1st box
    for (i=10;i<71;i++)
{
qwert(i,15);
Sleep(30);
printf( "/" );
}
for (i=70;i>=10;i--)
{
qwert(i,22);
Sleep(30);
cout<<" / " ;
}
for (j=16;j<=21;j++)
{
qwert(10,j);
Sleep(100);
printf( "-" );
}
for (j=21;j>=16;j--)
{
qwert(70,j);
Sleep(100);
printf( "-" );
}
qwert(16,17);
cout<<"WELCOME TO GROUP TWO IT RPOJECT";
qwert(12,20);


cout<<"press any key to continue.....";
getch();
mainmenu();




return 0;
}


