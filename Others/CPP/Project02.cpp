#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
//#include <SFML/System.hpp>
#include <iostream>
#include <fstream>
#include <conio.h>
//#include <ctime>
#include<windows.h>
using namespace sf;
using namespace std;

int A=1,mainchoice,basicchoice,leadchoice,sectorchoice,i;

struct Memberform
{
 string fname;
 string lname;
 string age;
 string sex;
 string phonenumber;
 string registration;
 string housenumber;
 string woreda;
 string nationality;
};

void text(char a[100])
{
    for (int j=0; a[j] != '\0'; j++)
    {
        for (long i=0; i<1000000; i++);
            cout<<a[j];
    }
}

void gotoxy( int x, int y)
{
 COORD coord;
 coord.X = x;
 coord.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int playmusic()
{
     Music  music;
        if (!music.openFromFile("Sounds/tryh.ogg"))
                return -1;

        music.setPlayingOffset(seconds( 2));
        music.setPitch(1.2);
        music.setVolume(50);
        music.setLoop(true);
        music.play();
}

void basicsectordetails()
{
    playmusic();
    cout<<"\tManaging Director\n";
    cout<<"\tCommunity Officer\n";
    cout<<"\tSupply Officer\n";
    cout<<"\tSecretary\n";
}
void newentry()
{
    playmusic();
    system ("cls");
    system ("color F0");
    ofstream kout("TXT/data1.txt" , ios::app);
    kout.open("TXT/data.txt");
    Memberform person;

    cout<<"\n\tFirst Name: ";
    cin>>person.fname;
    kout<<person.fname<<endl;
    cout<<"\n\tLast Name: ";
    cin>>person.lname;
    kout<<person.lname<<endl;
    cout<<"\n\tAge: ";
    cin>>person.age;
    kout<<person.age<<endl;
    cout<<"\n\tSex: ";
    cin>>person.sex;
    kout<<person.sex<<endl;
    cout<<"\n\tNationality: ";
    cin>>person.nationality;
    kout<<person.nationality<<endl;
    cout<<"\n\tWoreda: ";
    cin>>person.woreda;
    kout<<person.woreda<<endl;
    cout<<"\n\tHouse Number: ";
    cin>>person.housenumber;
    kout<<person.housenumber<<endl;
    cout<<"\n\tRegistration Number: ";
    cin>>person.registration;
    kout<<person.registration<<endl;

kout.close();
}
void registeredinformation()
{
    playmusic();
    system ("cls");
    system ("color F0");
    Memberform person;
    string finddata;
    ifstream kout("TXT/data1.txt");
    cout<<"\n\tEnter First Name To Be Displayed: ";
    cin>>finddata;
    cout<<endl;

    int notFound = 0,i,j;
    for( j=0;(j<i)||(!kout.eof());j++)
    {
    getline(kout,person.fname);
    if(person.fname==finddata)
    {
     notFound = 1;
     getline(kout,person.lname);
     getline(kout,person.age);
     getline(kout,person.sex);
     getline(kout,person.nationality);
     getline(kout,person.woreda);
     getline(kout,person.housenumber);
     getline(kout,person.registration);

    cout<<"\tFirst Name: "<<person.fname<<endl;
    cout<<"\n\tLast Name: "<<person.lname<<endl;
    cout<<"\n\tAge: "<<person.age<<endl;
    cout<<"\n\tSex: "<<person.sex<<endl;
    cout<<"\n\tNationality: "<<person.nationality<<endl;
    cout<<"\n\tWoreda: "<<person.woreda<<endl;
    cout<<"\n\tHouse Number: "<<person.housenumber<<endl;
    cout<<"\n\tRegistration Number: "<<person.registration<<endl;
    }

    }
    if(notFound == 0)
    {
        cout<<"\tNo Record Found\n"<<endl;
    }
    kout.close();
    char id;
    cout<<"Do You Want To View ID... ";
    cin>>id;
    if (id == 'Y' || id == 'y')
    {
            RenderWindow window(VideoMode(640,480), "Personal Information - ID");
            Texture idpicture;
            idpicture.loadFromFile("Images/T.jpg");
            Sprite picture(idpicture);
            Font font1,font2,font3,font4;
            font1.loadFromFile("Fonts/Xephyr Condensed.ttf");
            font2.loadFromFile("Fonts/Xcelsion Italic.ttf");
            font3.loadFromFile("Fonts/Xeroprint  Filetype.ttf");
            font4.loadFromFile("Fonts/Xephyr Condensed.ttf");
            Text texttitle ("KEBELE Identification Card",font1,30);
            Text textname (person.fname + person.lname,font2,15);
            Text textage (person.age,font2,15);
            Text textsex (person.sex,font2,15);
            Text textnationality (person.nationality,font2,15);
            Text textworeda (person.woreda,font2,15);
            Text textregistration (person.registration,font2,15);
            string idpic = "Images/"+ person.fname +".jpg";
            idpicture.loadFromFile(idpic);

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

                window.clear(sf::Color(255,255,255));
                picture.setPosition(40,60);
                texttitle.setPosition(20,10);
                textname.setPosition(170,70);
                window.draw(picture);
                window.draw(texttitle);
                window.draw(textname);
                window.display();
            }
    }

    else
        cout<<"\tPress any key to proceed...\n";
        getch();

}


void basicinformation()
{
    playmusic();
    system ("cls");
    system ("color F0");
    cout<<"\t\tBasic Information\n\t\t=================\n";
    cout<<"\t1. Health\n";
    cout<<"\t2. Education\n";
    cout<<"\t3. Justice\n";
    cout<<"\t4. Vital\n";
    cout<<"\t5. Micro Finance\n";
    cout<<"\t6. It Department\n";
}
void personalinformation()
{
    playmusic();
    system ("cls");
    system ("color F0");
    int choice;
    cout<<"\t\tPersonal Information\n\t\t====================\n";
    cout<<"\t1. Create New Entry\n";
    cout<<"\t2. Display Registered Information\n";
    cout<<"\t3. Return To Main\n";
    cout<<"\tEnter Your Choice: ";
    cin>>choice;
    switch (choice)
    {
      case 1: newentry(); break;
      case 2: registeredinformation(); break;
      case 3: return; break;
    }
}
void selectsector()
{
    system ("cls");
    system ("color F0");
    cout<<"\t\tSelect Sector\n\t\t=============\n";
    cout<<"\t1. Health\n";
    cout<<"\t2. Education\n";
    cout<<"\t3. Justice\n";
    cout<<"\t4. Vital\n";
    cout<<"\t5. Micro Finance\n";
}
void leadtime()
{
    system ("cls");
    system ("color FC");
    cout<<"\t\tLead Time Service\n\t\t=================\n";
    cout<<"\tAvailable Appointment Time Schedule:\n\n";
    cout<<"\t\t\t -----------------------------\n";
    cout<<"\t\t\t|    Day         |    Time    |\n";
    cout<<"\t\t\t|    ===         |    ====    |\n";
    cout<<"\t\t\t| ----------------------------|\n";
    cout<<"\t\t\t| 1. Monday      |  7am - 3pm |\n";
    cout<<"\t\t\t| 2. Tuesday     |  7am - 3pm |\n";
    cout<<"\t\t\t| 3. Wednesday   |  7am - 3pm |\n";
    cout<<"\t\t\t| 4. Thursday    |  7am - 3pm |\n";
    cout<<"\t\t\t| 5. Friday      |  7am - 3pm |\n";
    cout<<"\t\t\t| 6. Saturday    |  7am - 3pm |\n";
    cout<<"\t\t\t|-----------------------------|\n";
    cout<<"\n\n\t\t=> At What Day Are You Available? ";
    cin>>leadchoice;
}
void budget()
{
    system ("cls");
    system ("color F0");
    cout<<"\t\tBudget\n\t\t======\n";
    cout<<"\t Enter the annual budget: ";
    cout<<"\t1. Health\n";
    cout<<"\t2. Education\n";
    cout<<"\t3. Justice\n";
    cout<<"\t4. Vital\n";
    cout<<"\t5. Micro Finance\n";
}

int exit()
{
    system ("cls");
    system ("color 2F");
    char sure;
    cout<<"\n\n\n\t\tAre You Absolutely Sure? ";
    cin>>sure;
    if (sure == 'Y' || sure == 'y')
    {
        A = 2;
        system ("cls");
        system ("color CF");
        cout<<"\n\n\t\t\tIT\'S YOUR LOSS!!\n\n";
    }

    return 0;
}



int main()
{
    playmusic();
    while (A == 1)
    {
    Memberform person;

    int j=200,k=1;

    if(false)
    {
        RenderWindow welcomewindow (VideoMode(850,600) , "Credits...");


        Texture logo;
        logo.loadFromFile("Images/logo.png");
        Sprite pic(logo);
        Music  music;
                if (!music.openFromFile("Sounds/tryh.ogg"))
                    return -1;

                music.setPlayingOffset(seconds( 2));
                music.setPitch(1.2);
                music.setVolume(50);
                //music.setLoop(true);
                music.play();
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
                j-=5;

                /*
                Font font;
                font.loadFromFile("Fonts/Xcelsion Italic.ttf");
                Text textinfo (" KEBELE-08 MANAGEMENT SOFTWARE",font,25);
                Text text1 ("\tEXECUTIVE PRODUCER\n\n\t\tTollan Sitotaw\n\n\n CO-EXECUTIVE PRODUCERS\n\n\t\tTollan Sitotaw\n\n\t  Yabsira Alemayehu",font,20);
                Text text2 ("\n\n  LEAD ANIMATION DESIGNER\n\n\t\tTollan Sitotaw\n\n\n\t\t LOGO DESIGNER\n\n\t Yabsira Alemayehu\n\n\n\n\t\t\tCASTING BY\n\n\t\tTollan Sitotaw",font,20);
                Text text3 ("\nRESEARCH OPERATORS\n\n\t  Ruth Samuel\n\n\tYanet Aregawi",font,20);
                Text text4 ("\n\tOTHER MEMBERS\n\nSaron Simon\n\nSemegn Abraham\n\nSenaf Dhaba\n\nSumeya Ibrahim\n\nTemesgen Belachew\n\nWongelawit Nebiyu\n\nYeabtsega Mahri\n\nYohannes Mulugeta",font,20);
                Text text5 ("\nSPECIAL THANKS\n\n\t  Kidus G/Kiristos\n\n\t  Henok Fisseha\n\n\t  Gedion Teshome",font,20);
                Text text6 ("  The Development Of This Software Required A Great Deal Of \n\t\t\t\t\t\t   Dedication And Hard Work.",font,15);
                Text text7 ("Our Team Would Like To Thank Our Teacher, Markos Borena For \nGiving Us This Amazing Opportunity To Encounter What It\'s Like \n\t\t\t\t\tTo Be A Real Software Developer. ",font,15);
                Text text8 (" Any Unauthorized Duplication, Distribution, \nor Exhibition Of This Software Is Prohibited \n And Could Result In Criminal Prosecution.\n\n\n\t\t\t\t\t  (c) Copyright 2017\n\n\t\t\t\t\tALL RIGHTS RESERVED",font,15);
                */
                Font font;
                font.loadFromFile("Fonts/Xcelsion Italic.ttf");
                Text textinfo (" KEBELE-08 MANAGEMENT SOFTWARE",font,25);
                Text text1 ("\tEXECUTIVE PRODUCER\n\n\t\tTollan Sitotaw\n\n\n CO-EXECUTIVE PRODUCERS\n\n\t\tTollan Sitotaw\n\n\t  Yabsira Alemayehu",font,20);
                Text text2 ("\n\n  LEAD ANIMATION DESIGNER\n\n\t\tTollan Sitotaw\n\n\n\t\t LOGO DESIGNER\n\n\t Yabsira Alemayehu\n\n\n\n\t\t\tCASTING BY\n\n\t\tTollan Sitotaw",font,20);
                Text text3 ("\nRESEARCH OPERATORS\n\n\t  Ruth Samuel\n\n\tYanet Aregawi\n\n\n\nREPORT WRITERS\n\n\tWongelawit Nebiyu\n\n\tTemesgen Belachew\n\n\n\nREPORT DESIGNERS\n\n\tSumeya Ibrahim\n\n\tYeabtsega Mehari\n\n\t\n\n\n\nPPT SLIDE PRODUCERS\n\n\tSenaf Dhaba\n\n\tSemegn Abraham\n\n\n\nPPT SLIDE DESIGNERS\n\n\tYohannes Mulugeta\n\n\tSaron Simon\n\n\n\n",font,20);
                Text text4 ("\n\tOTHER MEMBERS\n\nSaron Simon\n\nSenaf Dhaba\n\nSumeya Ibrahim\n\nTemesgen Belachew\n\nWongelawit Nebiyu\n\nYohannes Mulugeta",font,20);
                Text text5 ("\nSPECIAL THANKS\n\n\t  Kidus G/Kiristos\n\n\t  Henok Fisseha\n\n\t  Gedion Teshome",font,20);
                Text text6 ("  The Development Of This Software Required A Great Deal Of \n\t\t\t\t\t\t   Dedication And Hard Work.",font,15);
                Text text7 ("Our Team Would Like To Thank Our Teacher, Markos Borena For \nGiving Us This Amazing Opportunity To Encounter What It\'s Like \n\t\t\t\t\tTo Be A Real Software Developer. ",font,15);
                Text text8 (" Any Unauthorized Duplication, Distribution, \nor Exhibition Of This Software Is Prohibited \n And Could Result In Criminal Prosecution.\n\n\n\t\t\t\t\t  (c) Copyright 2017\n\n\t\t\t\t\tALL RIGHTS RESERVED",font,15);

                textinfo.setFillColor(Color::White);
                text1.setFillColor(Color::White);
                text2.setFillColor(Color::White);
                text3.setFillColor(Color::White);
                text4.setFillColor(Color::White);
                text5.setFillColor(Color::White);
                text6.setFillColor(Color::White);
                text7.setFillColor(Color::White);
                text8.setFillColor(Color::White);

                welcomewindow.clear(sf::Color(0,0,0));
                pic.setPosition(325,j);
                textinfo.setPosition(65,j+150);
                text1.setPosition(200,j+300);
                text2.setPosition(200,j+530);
                text3.setPosition(250,j+850);
                text4.setPosition(250,j+1500);
                text5.setPosition(250,j+1900);
                text6.setPosition(20,j+2200);
                text7.setPosition(30,j+2250);
                text8.setPosition(130,j+2450);

                welcomewindow.draw(pic);
                welcomewindow.draw(textinfo);
                welcomewindow.draw(text1);
                welcomewindow.draw(text2);
                welcomewindow.draw(text3);
                welcomewindow.draw(text4);
                welcomewindow.draw(text5);
                welcomewindow.draw(text6);
                welcomewindow.draw(text7);
                welcomewindow.draw(text8);
                cout<<j<<endl;

                welcomewindow.display();
                if (j <= -2590) break;

        }
    }
        system("title Kebele 08 Management Software");
        //system("color F0");
        system("cls");

    for (i=10;i<71;i++)
        {
        gotoxy(i,0);
        Sleep(30);
        cout<<"*";
        //printf( "*" );
        }
    for (i=70;i>=10;i--)
        {
        gotoxy(i,10);
        Sleep(30);
        cout<<"*" ;
        }
    for (j=16;j<=21;j++)
        {
        gotoxy(0,j);
        Sleep(100);
        printf( "-" );
        }
    for (j=21;j>=16;j--)
        {
        gotoxy(10,j);
        Sleep(100);
        printf( "-" );
        }
    gotoxy(16,17);
    text("WELCOME TO KEBELE MANAGENENT SOFTWARE");
    gotoxy(12,20);


cout<<"press any key to continue.....\n\n";
getch();

        text("\t    ***************************************************\n");
        text("\t    *=================================================*\n");
        text("\t    *     K   K   EEEE   BBB    EEEE   L      EEEE    *\n");
        text("\t    *     K  K    E      B  B   E      L      E       *\n");
        text("\t    *     K K     EEEE   BBB    EEEE   L      EEEE    *\n");
        text("\t    *     K  K    E      B  B   E      L      E       *\n");
        text("\t    *     K   K   EEEE   BBB    EEEE   LLLL   EEEE    *\n");
        text("\t    *=================================================*\n");
        text("\t    ***************************************************\n\n");
        text("--------------------------------------------------------------------------------\n\n");
        k++;
    cout<<"\t\t\tMain Screen\n\t\t\t===========\n\n";
    cout<<"\t\tChoose From The Following Menu...\n";
    cout<<"\t1. Basic Information\n";
    cout<<"\t2. Personal Information\n";
    cout<<"\t3. Select Sector\n";
    cout<<"\t4. Lead Time Service\n";
    cout<<"\t5. Budget\n";
    cout<<"\t6. Exit Program\n";
    cout<<"\n\t\tEnter Your Choice... ";

    cin>>mainchoice;
    switch (mainchoice)
    {
        case 1: basicinformation(); break;
        case 2: personalinformation(); break;
        case 3: selectsector(); break;
        case 4: leadtime(); break;
        case 5: budget(); break;
        case 6: exit(); break;
        default: cout<<"You Were Supposed To Choose From 1 - 6"; break;
    }


        if (false)
        {

        }
    continue;
    }

}

