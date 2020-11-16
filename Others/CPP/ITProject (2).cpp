#include <SFML/Graphics.hpp>
//#include <SFML/System.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include<stdio.h>
#include<Windows.h>
using namespace sf;
using namespace std;

int A=1,mainchoice,basicchoice,sectorchoice;

struct Memberform
{
 string fname;
 string mname;
 string lname;
 string age;
 string sex;
 string nationality;
 string birthplace;
 string occupation;
 string workplace;
 string phonenumber;
 string woreda;
 string housenumber;
 string registration;
};
 void text(char a[100])
  {
  	int i;double k;
  	for(i=0;a[i]!='\0';++i)
	{
		for(k=0;k<3000000;++k);
		 cout<<a[i];
	}
  }


void basicsectordetails()
{
    system("cls");
    system("color 0F");
    if (basicchoice == 1)
    {
         text("\n\tManaging Director: Selamawit Wondossen Taye\n\tEmail:selam_w@gmail.com\n\tP.O. Box: 34251\n\tFax:+251 11 542 3432\n\tOffice no.:+251 11 542 3432\n\tMobile no.: +251 93 234 0098\n\n");
         text("\tCommunity Officer: Thomas Gruim Haile\n\tEmail: tom_gruim@hotmail.com\n\tP.O. Box: 43325\n\tFax: +251 11 544 2862\n\tOffice no.:+251 11 544 2862\n\tMobile no.: +251 91 272 4534\n\n");
         text("\tSupply Officer: Meriam Tesfa Alem\n\tEmail: meri_alem@yahoo.com\n\tP.O. Box: 5439\n\tFax: +251 11  443 8762\n\tOffice no.:+251 11  443 8762\n\tMobile no.: +251 93 345 1123\n\n");
         text("\tSecretary: Kassahun Samson Belihu\n\tEmail: kassa_s@yahoo.com\n\tP.O. Box: 63657\n\tFax: +251 11 338 3416\n\tOffice no.:+251 11 338 3416\n\tMobile no.: +251 93 675 4231\n\n");
    }
    else if (basicchoice == 2)
    {
        text("\tManaging Director: Yilma Tariku Dagnaw\n\tEmail: yilma1981@hotmail.com\n\tP.O. Box: 21346\n\tFax: +251 11 827 2435\n\tOffice no.:+251 11 827 2435\n\tMobile no.: +251 91 123 6523\n\n");
        text("\tCommunity Officer: Zahara Mohammed Siraj\n\tEmail: zahara_m@gmail.com\n\tP.O. Box: 32461 \n\tFax: +251 11 354 2496\n\tOffice no.:+251 11 354 2496\n\tMobile no.: +251 92 234 2311\n\n");
        text("\tSupply Officer: Meleku Shiferaw Tadesse \n\tEmail: mele.s@hotmail.com\n\tP.O. Box: 7289\n\tFax: +251 11 432 4573\n\tOffice no.:+251 11 432 4573\n\tMobile no.: +251 92 16 2938\n\n");
        text("\tSecretary: Shimelis Mebratu Girma \n\tEmail: shimelis_mebratu@gmail.com\n\tP.O. Box: 829947\n\tFax: +251 11 234 5768\n\tOffice no.:+251 11 234 5768\n\tMobile no.: +251 11 234 5768\n\n");
    }
    else if (basicchoice == 3)
    {
         text("\tManaging Director: Bereket Mamo Debebe\n\tEmail: bereket_m@hotmail.com\n\tP.O. Box: 83904\n\tFax: +251 11 736 5830\n\tOffice no.:+251 11 736 5830\n\tMobile no.: +251 91 564 2548\n\n");
         text("\tCommunity Officer: Mebrat Gizaw Kassa \n\tEmail:mebi_giz@gmail.com\n\tP.O. Box: 8398\n\tFax: +251 11 129 9500\n\tOffice no.:+251 11 129 9500\n\tMobile no.: +251 91 128 3849\n\n");
         text("\tSupply Officer: Derartu Chala Jigssa\n\tEmail:derartu_chala@hotmail.com\n\tP.O. Box: 85469\n\tFax: +251 11 743 9647\n\tOffice no.:+251 11 743 9647\n\tMobile no.: +251 91 146 9384\n\n");
         text("\tSecretary: Tsegaye Araya Bahru\n\tEmail:tsegaye_a@yahoo.com\n\tP.O. Box: 85490\n\tFax: +251 11 552 8952\n\tOffice no.:+251 11 552 8952\n\tMobile no.: +251 92 256 1718\n\n");
    }
    else if (basicchoice == 4)
    {
         text("\tManaging Director: Tilahun Senay Abraham\n\tEmail:tilo.senay@gmail.com\n\tP.O. Box: 93954\n\tFax: +251 11 249 7445\n\tOffice no.:+251 11 249 7445\n\tMobile no.: +251 92 483 5932\n\n");
         text("\tSupply Officer: Rahel Solomon W0ndessen\n\tEmail:rahel1985@hotmail.com\n\tP.O. Box: 92075\n\tFax: +251 11 828 3627\n\tOffice no.:+251 11 828 3627\n\tMobile no.: +251 92 381 7923\n\n");
         text("\tSecretary: Hanan Mengistu Getachew\n\tEmail:hanan_g@hotmail.com\n\tP.O. Box: 09224\n\tFax: +251 11 365 8963\n\tOffice no.:+251 11 365 8963\n\tMobile no.: +251 93 461 7985\n\n");
    }
    else if (basicchoice == 5)
    {
         text("\t Getachew Tsegaye Alemayehu\n\tEmail:gech_t@yahoo.com\n\tP.O. Box: 786965\n\tFax: +251 11 634 9834\n\tOffice no.:+251 11 634 9834\n\tMobile no.: +251 92 254 8743\n\n");
    }
    else if (basicchoice == 6)
    {
         text("\t\tTECHNICIANS\n");
         text("\t\t===========\n");
         text("\tAbraha Shimelis Telela \n\tEmail:abraha.s@gmail.com \n\tP.O. Box: 92750\n\tFax: +251 11 634 3467 \n\tMobile no.: +251 94 934 7483\n\n");
         text("\tDanait Adugna Tesfaye\n\tEmail:danait_adugna@yahoo.com\n\tP.O. Box: 98759\n\tFax: +251 11 538 7849\n\tMobile no.: +251  91 245 3689\n\n");
    }
    else
        cout<<"\n\t\tYou Were Supposed To Choose From 1 - 6";
    cout<<"\n\tPress any key to proceed...\n";
        getch();
}
void sectors()
{
    system("cls");
    system("color 0F");
    if (sectorchoice == 1)
    {
        text("\t\t 1.Health office \n");
        text("\t\t================ \n");
        text("\t i.Number of health institutions in the Woreda\n");
        text("In this kebele we have number of health institutions specifically 15 in number.\n");
        text("Based on their qualities and the service they give they are classified  as: \n");
        cout<<endl;
        text("\t\t a. Specialized hospital\n");
        cout<<endl;
        text("\t\t\t *	3 in number. \n");
        text("\t\t\t *	Haran specialized hospital. \n");
        text("\t\t\t *	Doctor saran specialized hospital. \n");
        text("\t\t\t *	Merrily specialized hospital. \n");
        cout<<endl;
        text("\t\t b. General hospitals.\n");
        cout<<endl;
        text("\t\t\t *	4 in number. \n");
        text("\t\t\t *	Hallelujah general hospital. \n");
        text("\t\t\t *	WWJ general hospital. \n");
        text("\t\t\t *	Wesen general hospital. \n");
        text("\t\t\t *	Brook general hospital. \n");
        cout<<endl;
        text("\t\t c.	Clinics\n");
        cout<<endl;
        text("\t\t\t *	4 in number. \n");
        text("\t\t\t *	BGM clinic. \n");
        text("\t\t\t *	Addis clinic. \n");
        text("\t\t\t *	Hiwot clinic. \n");
        text("\t\t\t *	Doctor Yared children’s clinic. \n");
        cout<<endl;
        text("\t\t d.	Health extension offices\n");
        cout<<endl;
        text("\t\t\t *	4 in number. \n");
        cout<<endl;
        text("\t ii.Number of professionals in the Woreda\n");
        text("In our kebele there are registered professional who give services to patients an endingly.\n");
        text("Totally we have over 350 professionals.\n");
        cout<<endl;
        text("To be specific the doctors are 180, the nurses are 100 and health officers are 70 in number.\n");
        cout<<endl;
        text("\t iii. Death and birth rate kebele \n");
        cout<<endl;
        text("In the 15 health institutions in our kebele the birth rate and the date rate is as follows\n");
        text("\t\t\t *	Death rate= 2 people die out of 150 patients.  \n");
        text("\t\t\t *	Birth rate= 5 babies are being born every day. \n");
        text("To generalize 120 people die and 300 babies are born every year in this kebele. \n");
    }
    else if (sectorchoice == 2)
    {
        text("\t\t2.Education office \n");
        text("\t\t================== \n");
        text("\t i.Number of educational facilities. \n");
        text("In this kebele we have number of educational institutions specifically 7 in number. \n");
        text("All of this 7 schools consist from primary level up to preparatory level. Based on their owners they are classified  as: \n");
        text("\t\t a. Government schools\n");
        cout<<endl;
        text("\t\t\t *	2 in number.\n");
        text("\t\t\t *    Nestanet berhan public school.\n");
        text("\t\t\t *	Temengayasge public school.\n");
        cout<<endl;
        text("\t\t b.	Private schools\n");
        cout<<endl;
        text("\t\t\t *	4 in number. \n");
        text("\t\t\t *    Daventery acadamey.\n");
        text("\t\t\t *	Joy acadamey.\n");
        text("\t\t\t *	Dandii boru school.\n");
        text("\t\t\t *	School of tomorrow.\n");
        cout<<endl;
        text("\t\t c.	Community schools\n");
        cout<<endl;
        text("\t\t\t *	1 in number. \n");
        text("\t\t\t *    Asaye community school.\n");
        cout<<endl;
        text("\t ii. Number of students and teachers in the kebele. \n");
        text("In our kebele the total number of teachers and students is 450 and 9,000 respectively.\n");
        text("To be specific the number of students who are in primary level are 4000,\n");
        text("the number of students who are on secondary level are 3000 and the number of students who are in preparatory level are 2550.\n");
        cout<<endl;
        text("\t iii. Number of students who failed grade 10 and 12 national exams.\n");
        text(" As you can observe from the above data as the level increases the number of students is decreasing.\n");
        text(" This section provides information about students who failed grade 10 and 12 national exams.\n");
        text(" From grade 10 national exam 450 students have failed from this kebele.\n");
        text("\t150 of them are girls whereas 300 of them are boys.\n");
        text(" From grade 12 university entrance exam 163 students have failed from this kebele.\n");
        text("\t70 of them are girls whereas 93 of them are boys.\n");
        text("\t\tiv. Inter school competions.\n");
        text(" This kebele’s educational office organizes annual inter school competitons.\n");
        text(" The Main competions include: - \n");
        text("\t\t Soccer \n");
        text("\t\t Basketball \n");
        text("\t\t Athletics \n");
    }
    else if (sectorchoice == 3)
    {
        text("\t\t\t 3.Justice office \n");
        text("\t\t\t ================ \n");
        text(" This kebelesjustice office provides numerous services some of them are: \n");
        text("\t\t\t a.investige police cases \n");
        text("\t\t\t b. investigte cases that are applied from one court c \n");
    }
    else if (sectorchoice == 4)
    {
        text("\t\t\t 4. Vital registration office \n");
        text(" This kebele vital regestration office provide services like giving birth card , \n");
        text(" identification card, death certificate, marriage certificate and so on. \n");
    }
    else if (sectorchoice == 5)
    {
        text("\t\t\t 5.Micro finance office \n");
        text("\t\t\t ====================== \n");
        text(" This kebele’s micro finance office gives the following services: \n");
        text("\t\t a.Organize unemployed youth to start working \n");
        text("\t\t b.Give loans \n");
        text("\t\t c.Support small business \n");
        text("\t\t d.Give training and support for youth who failed grade 10 and 12 national exams. \n");
    }
    else
        cout<<"\n\t\tYou Were Supposed To Choose From 1 - 6";
        cout<<"\n\tPress any key to proceed...\n";
        getch();
}

void newentry()
{
    system ("cls");
    system ("color 0F");
    ofstream kout;
    kout.open ("TXT/data.txt" , ios::app);
    Memberform person;

    cout<<"\n\tFirst Name: ";
    cin>>person.fname;
    kout<<person.fname<<endl;
    cout<<"\n\tMiddle Name: ";
    cin>>person.mname;
    kout<<person.mname<<endl;
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
    cout<<"\n\tPlace Of Birth: ";
    cin>>person.birthplace;
    kout<<person.birthplace<<endl;
     cout<<"\n\tOccupation: ";
    cin>>person.occupation;
    kout<<person.occupation<<endl;
     cout<<"\n\tPlace Of Work: ";
    cin>>person.workplace;
    kout<<person.workplace<<endl;
    cout<<"\n\tPhone Number: ";
    cin>>person.phonenumber;
    kout<<person.phonenumber<<endl;
    cout<<"\n\tWoreda: ";
    cin>>person.woreda;
    kout<<person.woreda<<endl;
    cout<<"\n\tHouse Number: ";
    cin>>person.housenumber;
    kout<<person.housenumber<<endl;
    cout<<"\n\tRegistration Number: ";
    cin>>person.registration;
    kout<<person.registration<<endl<<endl;
    cout<<"\n\n\t\tInformation Saved Successfully...\n\n";

    kout.close();
}
void registeredinformation()
{
    system ("cls");
    system ("color 0F");
    Memberform person;
    string finddata;
    ifstream kout("TXT/data.txt");
    cout<<"\n\tEnter First Name To Be Displayed: ";
    cin>>finddata;
    cout<<endl;
    int i,j;
    int notFound = 0;

    for(j=0;(j<i)||(!kout.eof());j++)
    {
        getline(kout,person.fname);
        if(person.fname == finddata)
        {
         notFound = 1;
         getline(kout,person.mname);
         getline(kout,person.lname);
         getline(kout,person.age);
         getline(kout,person.sex);
         getline(kout,person.nationality);
         getline(kout,person.birthplace);
         getline(kout,person.occupation);
         getline(kout,person.workplace);
         getline(kout,person.phonenumber);
         getline(kout,person.woreda);
         getline(kout,person.housenumber);
         getline(kout,person.registration);

        cout<<"\tFirst Name: "<<person.fname<<endl;
        cout<<"\n\tMiddle Name: "<<person.mname<<endl;
        cout<<"\n\tLast Name: "<<person.lname<<endl;
        cout<<"\n\tAge: "<<person.age<<endl;
        cout<<"\n\tSex: "<<person.sex<<endl;
        cout<<"\n\tNationality: "<<person.nationality<<endl;
        cout<<"\n\tPlace Of Birth: "<<person.birthplace<<endl;
        cout<<"\n\tOccupation: "<<person.occupation<<endl;
        cout<<"\n\tPlace Of Work: "<<person.workplace<<endl;
        cout<<"\n\tPhone Number: "<<person.phonenumber<<endl;
        cout<<"\n\tWoreda: "<<person.woreda<<endl;
        cout<<"\n\tHouse Number: "<<person.housenumber<<endl;
        cout<<"\n\tRegistration Number: "<<person.registration;
        }
        else break;
    }
    if(notFound == 0)
    {
        cout<<"\tNo Record Found\n"<<endl;
    }
    kout.close();

    if (notFound == 1)
    {
    char id;
    cout<<"\n\n\tDo You Want To View ID... ";
    cin>>id;
    if (id == 'Y' || id == 'y')
    {
            int i1=0,j1=-390,i2=895,j2=-390,i3=-916,j3=495,a=150,b=90,k=1;
            RenderWindow window(VideoMode(900,500), "Kebele-08 Identification Card");
            RectangleShape border1(Vector2f(5,500));
            RectangleShape border2(Vector2f(5,500));
            RectangleShape border3(Vector2f(900,5));
            RectangleShape box(Vector2f(900,110));
            CircleShape line1(4);
            CircleShape line2(4);
            CircleShape line3(4);
            border1.setFillColor (Color::Black);
            border2.setFillColor (Color::Black);
            border3.setFillColor (Color::Black);
            box.setFillColor (Color::Black);
            line1.setFillColor (Color(255,200,0));
            line2.setFillColor (Color(255,200,0));
            line3.setFillColor (Color(255,200,0));

            Texture logo;
            logo.loadFromFile("Images/logoid03.png");
            Sprite pic(logo);
            Texture idpicture;
            string fpname = person.fname;
            idpicture.loadFromFile("Images/"+ finddata +".jpg");
            //idpicture.loadFromFile("Images/Tollan4.jpg");
            Sprite picture(idpicture);

            Font font1,font2,font3,font4;
            font1.loadFromFile("Fonts/Xcelsion Italic.ttf");
            font2.loadFromFile("Fonts/ZipDown.ttf");
            font3.loadFromFile("Fonts/Xeroprint  Filetype.ttf");
            font4.loadFromFile("Fonts/Xephyr Condensed.ttf");
            Text texttitle ("addis ababa, Kebele-08 Identification Card",font4,45);

            Text textname ("Name: " + finddata + " " + person.mname + " " + person.lname,font1,15);
            Text textage ("Age: " + person.age,font1,15);
            Text textsex ("Sex: " + person.sex,font1,15);
            Text textnationality ("Nationality: " + person.nationality,font1,15);
            Text textbirthplace ("Place Of Birth: " + person.birthplace,font1,15);
            Text textoccupation ("Occupation: " + person.occupation,font1,15);
            Text textworkplace ("Place Of Work: " + person.workplace,font1,15);
            Text textphonenumber ("Phone No: " + person.phonenumber,font1,15);
            Text textworeda ("Woreda: " + person.woreda,font1,15);
            Text texthousenumber ("House No: " + person.housenumber,font1,15);
            Text textregistration ("Registration No: " + person.registration,font1,15);

            texttitle.setFillColor(Color::White);
            textname.setFillColor(Color::Black);
            textage.setFillColor(Color::Black);
            textsex.setFillColor(Color::Black);
            textnationality.setFillColor(Color::Black);
            textbirthplace.setFillColor(Color::Black);
            textoccupation.setFillColor(Color::Black);
            textworkplace.setFillColor(Color::Black);
            textphonenumber.setFillColor(Color::Black);
            textworeda.setFillColor(Color::Black);
            texthousenumber.setFillColor(Color::Black);
            textregistration.setFillColor(Color::Black);


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

                if (j1>=-390 && j1<0 && i1==0)
                    j1+=4;
                if (j2>=-390 && j2<0 && i2==895)
                    j2+=4;
                if (i3>=-916 && i3<-8 && j3==495)
                    i3+=8;
                if (a>=150 && a<820 && k==1)
                {
                    a+=2;
                    k=1;
                }
                else k=0;
                if (a<=820 && a>150 && k==0)
                {
                    a-=2;
                    k=0;
                }
                else k=1;

                window.clear(sf::Color(255,200,0));
                border1.setPosition (i1,j1);
                border2.setPosition (i2,j2);
                border3.setPosition (i3,j3);
                box.setPosition (0,0);
                line1.setPosition(a,b);
                line2.setPosition(a+20,b);
                line3.setPosition(a+40,b);
                picture.setPosition(50,150);
                pic.setPosition(30,15);
                texttitle.setPosition(150,10);
                textname.setPosition(350,120);
                textage.setPosition(350,150);
                textsex.setPosition(500,150);
                textnationality.setPosition(350,190);
                textphonenumber.setPosition(350,230);
                texthousenumber.setPosition(350,280);
                textworeda.setPosition(600,280);
                textbirthplace.setPosition(350,320);
                textoccupation.setPosition(350,360);
                textworkplace.setPosition(350,400);
                textregistration.setPosition(610,440);

                window.draw(border1);
                window.draw(border2);
                window.draw(border3);
                window.draw(box);
                window.draw(line1);
                window.draw(line2);
                window.draw(line3);
                window.draw(picture);
                window.draw(pic);
                window.draw(texttitle);
                window.draw(textname);
                window.draw(textage);
                window.draw(textsex);
                window.draw(textnationality);
                window.draw(textbirthplace);
                window.draw(textoccupation);
                window.draw(textworkplace);
                window.draw(textphonenumber);
                window.draw(textworeda);
                window.draw(texthousenumber);
                window.draw(textregistration);
                window.display();
            }
    }
     system("cls");
    }
}


void basicinformation()
{
    system ("cls");
    system ("color FC");
    cout<<"\t\tBasic Information\n\t\t=================\n";
    cout<<"\t1. Health Sector\n";
    cout<<"\t2. Education Sector\n";
    cout<<"\t3. Justice Sector\n";
    cout<<"\t4. Vital Sector\n";
    cout<<"\t5. Micro Finance\n";
    cout<<"\t6. It Department\n";
    cout<<"\n\tEnter Your Choice... ";
    cin>>basicchoice;
    basicsectordetails();
}
void personalinformation()
{
    system ("cls");
    system ("color FC");
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
    cout<<"\tPress any key to proceed...\n";
        getch();
}
void selectsector()
{
    system ("cls");
    system ("color FC");
    cout<<"\t\tSelect Sector\n\t\t=============\n";
    cout<<"\t1. Health Office\n";
    cout<<"\t2. Education Office\n";
    cout<<"\t3. Justice Office\n";
    cout<<"\t4. Vital Registration Office\n";
    cout<<"\t5. Micro Financing Office\n";
    cout<<"\n\tEnter Your Choice... ";
    cin>>sectorchoice;
    sectors();
}

void leadtime()
{
    system ("cls");
    system ("color FC");
    cout<<"\t\tLead Time Service\n\t\t=================\n";
    cout<<"\n\tLead Time Weekly Schedule:\n";
    cout<<"\t\t\t -----------------------------------\n";
    cout<<"\t\t\t|      Day       |       Time       |\n";
    cout<<"\t\t\t|      ===       |       ====       |\n";
    cout<<"\t\t\t|-----------------------------------|\n";
    cout<<"\t\t\t|-----------------------------------|\n";
    cout<<"\t\t\t| 1. Monday      |   2:00 - 10:00   |\n";
    cout<<"\t\t\t| 2. Tuesday     |   2:00 - 10:00   |\n";
    cout<<"\t\t\t| 3. Wednesday   |   2:00 - 10:00   |\n";
    cout<<"\t\t\t| 4. Thursday    |   2:00 - 10:00   |\n";
    cout<<"\t\t\t| 5. Friday      |   2:00 - 10:00   |\n";
    cout<<"\t\t\t| 6. Saturday    |   2:00 - 7:00    |\n";
    cout<<"\t\t\t|-----------------------------------|\n";
    int leadday,leadchoice1,leadchoice2;
    cout<<"\n\n\t=> At What Day Did You Use Lead Time Service?...  ";
    cin>>leadday;
    cout<<"\n\t\t=> At What Time Did You Check In?...  ";
    cin>>leadchoice1;
    cout<<"\n\t\t=> At What Time Did You Check Out?...  ";
    cin>>leadchoice2;
    int elapsedtime = leadchoice2 - leadchoice1;
    if (leadday != 6)
    {
        if (elapsedtime >= 7)
            cout<<"\n\n\t\tYour Time Is Satisfactory!\n";
        else if (elapsedtime >= 5 && elapsedtime < 7)
            cout<<"\n\n\t\tYour Time Acceptable.\n";
        else if (elapsedtime >=3 && elapsedtime < 5)
            cout<<"\n\n\t\tYou Should Work More.\n";
        else
            cout<<"\n\n\t\tIs This A Joke!!!\n";
    }
    else
        cout<<"\n\n\t\tYour Time Is Acceptable.\n";
    cout<<"\n\tPress any key to proceed...\n";
        getch();
}
void budget()
{
    system ("cls");
    system ("color FC");
    double budget;
    cout<<"\t\tBudget\n\t\t======\n";
    cout<<"\n\tEnter The Total Annual Budget In US Dollar$: ";
    cin>>budget;
    cout<<"\n\n\t   SECTOR           |     BUDGET";
    cout<<"\n\t====================================";
    cout<<"\n\t1. Health:          |    $ "<<budget*0.3;
    cout<<"\n\t2. Education:       |    $ "<<budget*0.2;
    cout<<"\n\t3. Justice:         |    $ "<<budget*0.15;
    cout<<"\n\t4. Vital:           |    $ "<<budget*0.1;
    cout<<"\n\t5. Micro Finance:   |    $ "<<budget*0.25;
    cout<<"\n\tPress any key to proceed...\n";
        getch();
}
void credits()
{
    int j=200;
    RenderWindow welcomewindow (VideoMode(850,600) , "More Information");

        Texture logo;
        logo.loadFromFile("Images/logo.png");
        Sprite pic(logo);

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
                j-=3;

                Font font;
                font.loadFromFile("Fonts/Xcelsion Italic.ttf");
                Text textinfo (" KEBELE-08 MANAGEMENT SOFTWARE",font,25);
                Text text1 ("\tEXECUTIVE PRODUCER\n\n\t\tTollan Sitotaw\n\n\n CO-EXECUTIVE PRODUCERS\n\n\t\tTollan Sitotaw\n\n\t  Yabsira Alemayehu",font,20);
                Text text2 ("\n\n  LEAD ANIMATION DESIGNER\n\n\t\tTollan Sitotaw\n\n\n\t\t LOGO DESIGNER\n\n\t Yabsira Alemayehu\n\n\n\n\t\t\tCASTING BY\n\n\t\tTollan Sitotaw",font,20);
                Text text3 ("\nRESEARCH OPERATORS\n\n\t  Ruth Samuel\n\n\tYanet Aregawi",font,20);
                Text text4 ("\n\tGROUP MEMBERS\n\nRuth Samuel\n\nSaron Simon\n\nSemegn Abraham\n\nSenaf Dhaba\n\nSumeya Ibrahim\n\nTemesgen Belachew\n\nTollan Sitotaw\n\nWongelawit Nebiyu\n\nYabsira Alemayehu\n\nYanet Aregawi\n\nYeabtsega Mehari\n\nYohannes Mulugeta",font,20);
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
                text4.setPosition(250,j+1000);
                text5.setPosition(250,j+1500);
                text6.setPosition(20,j+1800);
                text7.setPosition(30,j+1850);
                text8.setPosition(130,j+2050);

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

                welcomewindow.display();
                if (j == -2200) break;

        }
}
void exit()
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
}



int main()
{
    int k=1;
    while (A == 1)
    {
    Memberform person;

    int i=5,j=5;

    if (k==1)
    {
        RenderWindow welcomewindow (VideoMode(950,500) , "More Information");

        RectangleShape border1(Vector2f(5,5));
        RectangleShape border2(Vector2f(5,5));
        RectangleShape border3(Vector2f(5,5));
        RectangleShape border4(Vector2f(5,5));

        border1.setFillColor (Color::Red);
        border2.setFillColor (Color::Green);
        border3.setFillColor (Color::Blue);
        border4.setFillColor (Color::Yellow);

        Texture logo;
        logo.loadFromFile("Images/logo.png");
        Sprite pic(logo);

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
                if (i>=5 && i<933 && j==5) i+=4;
                if (j>=5 && i==933 && j<483) j+=2;
                if (j==483 && i>5) i-=4;
                if (i==5 && j>=5) j-=2;
                Font font;
                font.loadFromFile("Fonts/Xcelsion Italic.ttf");
                Text textinfo ("WELCOME TO KEBELE-08 MANAGEMENT \n\t\t\t\t\tSOFTWARE",font,30);
                textinfo.setFillColor(Color::White);

               // welcomewindow.clear(sf::Color(0,0,0));
                textinfo.setPosition(40,250);
                pic.setPosition(375,100);
                border1.setPosition (i,j);
                border2.setPosition (i+7,j);
                border3.setPosition (i,j+7);
                border4.setPosition (i+7,j+7);

                welcomewindow.draw(textinfo);
                welcomewindow.draw(pic);
                welcomewindow.draw(border1);
                welcomewindow.draw(border2);
                welcomewindow.draw(border3);
                welcomewindow.draw(border4);
                welcomewindow.display();

        }
        k++;
    }
        system("title Kebele 08 Management Software");
        system("color F0");
        system("cls");

        cout<<"\t    ***************************************************\n";
        cout<<"\t    *=================================================*\n";
        cout<<"\t    *     K   K   EEEE   BBB    EEEE   L      EEEE    *\n";
        cout<<"\t    *     K  K    E      B  B   E      L      E       *\n";
        cout<<"\t    *     K K     EEEE   BBB    EEEE   L      EEEE    *\n";
        cout<<"\t    *     K  K    E      B  B   E      L      E       *\n";
        cout<<"\t    *     K   K   EEEE   BBB    EEEE   LLLL   EEEE    *\n";
        cout<<"\t    *=================================================*\n";
        cout<<"\t    ***************************************************\n\n";
        cout<<"--------------------------------------------------------------------------------\n\n";

    cout<<"\t\t\tMain Screen\n\t\t\t===========\n\n";
    cout<<"\t\tChoose From The Following Menu...\n";
    cout<<"\t1. Basic Information\n";
    cout<<"\t2. Personal Information\n";
    cout<<"\t3. Select Sector\n";
    cout<<"\t4. Lead Time Service\n";
    cout<<"\t5. Budget\n";
    cout<<"\t6. View Credits\n";
    cout<<"\t7. Exit Program\n";
    cout<<"\n\t\tEnter Your Choice... ";
    cin>>mainchoice;
    switch (mainchoice)
    {
        case 1: basicinformation(); break;
        case 2: personalinformation(); break;
        case 3: selectsector(); break;
        case 4: leadtime(); break;
        case 5: budget(); break;
        case 6: credits(); break;
        case 7: exit(); break;
        default: cout<<"\n\tYou Were Supposed To Choose From 1 - 7"; getch(); break;
    }
    continue;
    }

}

