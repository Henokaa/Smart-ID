#include <SFML/System.hpp>
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
using namespace sf;
using namespace std;
struct personalinfo
{
    char name[50];
};
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
int main()
{
    int i=5,j=5,k=1,x=10;
    float a=20,b=10;
    personalinfo person;
    /*cout<<"\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
    cout<<"\t\\\\ ================================================================ \\\\\n";
    cout<<"\t\\\\ @   K   @EEE   @BB    @EEE   @      @EEE      0000  8888           \\\\\n";
    cout<<"\t\\\\ @  K    @      @  B   @      @      @         0  0  8  8           \\\\\n";
    cout<<"\t\\\\ @ K     @EEE   @BB    @EEE   @      @EEE  ==  0  0  8888           \\\\\n";
    cout<<"\t\\\\ @  K    @      @  B   @      @      @         0  0  8  8           \\\\\n";
    cout<<"\t\\\\ @   K   @EEE   @BB    @EEE   @LLL   @EEE      0000  8888           \\\\\n";
    cout<<"\t\\\\ ================================================================\n";
    cout<<"\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n\n";*/

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
qwert(12,20);


    cout<<"\t  ***************************************************\n";
    cout<<"\t  *=================================================*\n";
    cout<<"\t  *     K   K   EEEE   BBB    EEEE   L      EEEE    *\n";
    cout<<"\t  *     K  K    E      B  B   E      L      E       *\n";
    cout<<"\t  *     K K     EEEE   BBB    EEEE   L      EEEE    *\n";
    cout<<"\t  *     K  K    E      B  B   E      L      E       *\n";
    cout<<"\t  *     K   K   EEEE   BBB    EEEE   LLLL   EEEE    *\n";
    cout<<"\t  *=================================================*\n";
    cout<<"\t  ***************************************************\n\n";
   // cout<<"Welcome to KEBELE MANAGEMENT SOFTWARE. Please walk through this tutorial before beginning...\n";
  //  cout<<"Do you want to get more information about the software? (Yes or No)\n";
    string ans1;
  //  getline(cin,ans1);
   // do
   // {

        if (true)//(ans1 == "Yes" || "yes")
        {
            RenderWindow welcomewindow (VideoMode(600,600) , "WELCOME!");
            Texture logopic;
            logopic.loadFromFile("Images/Logo3.jpg");
            Sprite pic(logopic);
            while (welcomewindow.isOpen())
            {
                Event event;
                 while(welcomewindow.pollEvent(event))
                 {
                    if(event.type == Event::Closed)
                    {
                        welcomewindow.close();
                    }
                 }
                Font font;
                font.loadFromFile("Fonts/Xefus.ttf");
                Text textinfo ("Welcome to KEBELE MANAGEMENT SOFTWARE.",font,15);
                textinfo.setFillColor(Color::White);
                textinfo.setPosition(50,50);
                pic.setPosition(80,60);
                welcomewindow.clear(sf::Color(255,255,255));
                welcomewindow.draw(textinfo);
                welcomewindow.draw(pic);
                welcomewindow.display();
            }
        }
        else if (ans1 == "No" || "no")
            cout<<"Whatever you say, but you are missing a lot of awesome stuff.";
        else
            cout<<"Sorry, I didn\'t get that. Yes or No?";
   // }while (ans1 != "Yes" || "yes" || "No" || "no");
    cout<<"What do you wish to do?\n";
    cout<<"\tA. Display a member\'s information\n\tB. Fill out membership Form\n";
    string s1,s2;
   // getline(cin,s1);
  //  system("color F0");
    if (s1 == "B")
    {

    }
    if (true)//(s1 == "A")
    {
        cout<<"Enter name of the citizen\n";
        cin.getline(person.name, 50);
        string name = person.name;
        RenderWindow window(VideoMode(640,480), "Personal Information");
        Texture idpicture;
        idpicture.loadFromFile("Images/T.jpg");
        Sprite picture(idpicture);
        Font font1,font2,font3,font4;
       // Text textname;
        font1.loadFromFile("Fonts/Xephyr Condensed.ttf");
        font2.loadFromFile("Fonts/Xcelsion Italic.ttf");
        font3.loadFromFile("Fonts/Xeroprint  Filetype.ttf");
        font4.loadFromFile("Fonts/Xephyr Condensed.ttf");
        Text texttitle ("KEBELE Identification Card Form.",font1,30);

        //if (true)//(name == "Tollan" || "tollan" || "Tollan Sitotaw")
        //{

           // Text textname ("Name:",font3,15);
            Text textname ("Tollan Sitotaw Brehanu",font2,15);

        //}

        if (name == "Yabsira") idpicture.loadFromFile("Images/Y.jpg");
        if (name == "Nahom") idpicture.loadFromFile("Images/N.jpg");
       // idpicture.loadFromFile("quincy.jpg");

        RectangleShape border1(Vector2f(5,5));
        RectangleShape border2(Vector2f(5,5));
        RectangleShape border3(Vector2f(5,5));
        RectangleShape border4(Vector2f(5,5));
        CircleShape line1(4);
        CircleShape line2(4);
        CircleShape line3(4);
        border1.setFillColor (Color::Black);
        border2.setFillColor (Color::Black);
        border3.setFillColor (Color::Black);
        border4.setFillColor (Color::Black);
        line1.setFillColor (Color::Black);
        line2.setFillColor (Color::Black);
        line3.setFillColor (Color::Black);
        texttitle.setFillColor(Color::Black);
        textname.setFillColor(Color::Black);


        while(window.isOpen())
        {
            Event event;
            while(window.pollEvent(event))
            {
                if(event.type == Event::Closed)
                {
                    window.close();
                }
            }
                if (i>=5 && i<623 && j==5)
                {
                    i++;
                  //  a+=0.12;
                }
                if (j>=5 && i==623 && j<463)
                    j++;
                if (j==463 && i>5)
                {
                    i--;
                   // a-=0.12;
                }
                if (i==5 && j>=5)
                    j--;
            window.clear(sf::Color(255,200,0));
            picture.setPosition(40,60);
            border1.setPosition (i,j);
            border2.setPosition (i+7,j);
            border3.setPosition (i,j+7);
            border4.setPosition (i+7,j+7);
            line1.setPosition(i*2-18,j-293);
            line2.setPosition(i*2-38,j-293);
            line3.setPosition(i*2-58,j-293);
            texttitle.setPosition(a,b);
            textname.setPosition(170,70);
            window.draw(picture);
            window.draw(border1);
            window.draw(border2);
            window.draw(border3);
            window.draw(border4);
            window.draw(line1);
            window.draw(line2);
            window.draw(line3);
            window.draw(texttitle);
            window.draw(textname);
            window.display();
        }
    }
}
