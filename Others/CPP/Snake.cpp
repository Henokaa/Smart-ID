#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
using namespace sf;
using namespace std;


int main()
{
    RenderWindow window(VideoMode(640,480), "hi");
    RectangleShape hi1(Vector2f(16.0f,16.0f));
    RectangleShape hi2(Vector2f(16.0f,16.0f));
    RectangleShape hi3(Vector2f(16.0f,16.0f));
    RectangleShape hi4(Vector2f(16.0f,16.0f));
    hi1.setFillColor(Color::Yellow);
    hi2.setFillColor(Color::Red);
    hi3.setFillColor(Color::Red);
    hi4.setFillColor(Color::Red);
    sf::Font m_font;
    sf::Text m_content;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i =0;
    e=g+20;
    c=e+20;
    a=c+20;
    int q=1, m=1;
    while(window.isOpen())
    {
        //if (Keyboard::isKeyPressed(Keyboard::Escape)) window.close;
        if (Keyboard::isKeyPressed(Keyboard::Right) || i == 0)
        {
            if (q == 1)
            {
                if (f != b) f++;
                else {e++;}
                if (d != b) d++;
                else {c++;}
                if (h != b) h++;
                else {g++;m=1;}
            }
            else
            {
                if (f != b) f--;
                else {e++;}
                if (d != b) d--;
                else {c++;}
                if (h != b) h--;
                else {g++;m=1;}
            }
            //sleep(milliseconds(10));
            hi1.setPosition(a,b);
            hi2.setPosition(c,d);
            hi3.setPosition(e,f);
            hi4.setPosition(g,h);
            a++;
            i=0;
        }
        if (Keyboard::isKeyPressed(Keyboard::Left) || i == 1)
        {
            if (q==1)
            {
                if (f != b) f++;
                else {e--;}
                if (d != b) d++;
                else {c--;}
                if (h != b) h++;
                else {g--;m=0;}
            }
            else
            {
                if (f != b) f--;
                else {e--;}
                if (d != b) d--;
                else {c--;}
                if (h != b) h--;
                else {g--;m=0;}
            }
            //sleep(milliseconds(10));
            hi1.setPosition(a,b);
            hi2.setPosition(c,d);
            hi3.setPosition(e,f);
            hi4.setPosition(g,h);
            a--;
            i=1;
        }
        if (Keyboard::isKeyPressed(Keyboard::Down) || i == 2)
        {
            if (m==1)
            {
                if (e != a) e++;
                else {f++;}
                if (c != a) c++;
                else {d++;}
                if (g != a) g++;
                else {h++; q=1;}
            }
            else
            {
                if (e != a) e--;
                else {f++;}
                if (c != a) c--;
                else {d++;}
                if (g != a) g--;
                else {h++; q=1;}
            }
            hi1.setPosition(a,b);
            hi2.setPosition(c,d);
            hi3.setPosition(e,f);
            hi4.setPosition(g,h);
            i =2;
            b++;
        }
        if (Keyboard::isKeyPressed(Keyboard::Up) || i == 3)
        {
            if (m==1)
            {
                if (e != a) e++;
                else {f--;}
                if (c != a) c++;
                else {d--;}
                if (g != a) g++;
                else {h--;q=0;}
            }
            else
            {
                if (e != a) e--;
                else {f--;}
                if (c != a) c--;
                else {d--;}
                if (g != a) g--;
                else {h--;q=0;}
            }
            hi1.setPosition(a,b);
            hi2.setPosition(c,d);
            hi3.setPosition(e,f);
            hi4.setPosition(g,h);
            i =3;
            b--;
        }
        window.clear(Color::Black);
        window.draw(hi1);
        window.draw(hi2);
        window.draw(hi3);
        window.draw(hi4);
        window.display();
    }
}
/*
sf::Font m_font;
sf::Text m_content;
m_font.loadFromFile("arial.ttf");
m_content.setFont(m_font);
m_content.setString("");
m_content.setCharacterSize(l_charSize);
m_content.setColor(sf::Color::White);
m_content.setPosition(l_screenPos + l_offset);
*/
