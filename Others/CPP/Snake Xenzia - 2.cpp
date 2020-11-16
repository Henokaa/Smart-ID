#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
int main()
{
    int i=65,j=5,a=47,b=29,c=11,d=5,e=5,f=5,h=4,posx=170,posy=180,ab=0;

    RenderWindow window(VideoMode(640,480), "Snake Xenzia - 2");
    RectangleShape rec1(Vector2f(16,16));
    RectangleShape rec2(Vector2f(16,16));
    RectangleShape rec3(Vector2f(16,16));
    RectangleShape rec4(Vector2f(16,16));
    RectangleShape rec(Vector2f(16,16));
    CircleShape cir (8);
    rec1.setFillColor (Color::Yellow);
    rec2.setFillColor (Color::Red);
    rec3.setFillColor (Color::Red);
    rec4.setFillColor (Color::Red);
    rec.setFillColor (Color::Red);
    cir.setFillColor (Color::Yellow);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed || Keyboard::isKeyPressed (Keyboard::Escape))
                window.close();
        }
            if (Keyboard::isKeyPressed (Keyboard::Up) || h == 1)
            {
                j--;
                if (a == i) d--;
                else
                {
                    if (a < i) a++;
                    if (a > i) a--;
                }
                if (b == a) e--;
                else {
                    if (b < a) b++;
                    if (b > a) b--;
                }
                if (c == b) f--;
                else {
                    if (c < b) c++;
                    if (c > b) c--;
                }
                h = 1;
                sleep(milliseconds(5));
            }
            if (Keyboard::isKeyPressed (Keyboard::Down) || h == 2)
            {
                j++;
                if (a == i) d++;
                else {
                    if (a < i) a++;
                    if (a > i) a--;
                }
                if (b == a) e++;
                else {
                    if (b < a) b++;
                    if (b > a) b--;
                }
                if (c == b) f++;
                else {
                    if (c < b) c++;
                    if (c > b) c--;
                }
                h = 2;
                sleep(milliseconds(5));
            }

            if (Keyboard::isKeyPressed (Keyboard::Left) || h == 3)
            {
                i--;
                if (d == j) a--;
                else {
                    if (d < j) d++;
                    if (d > j) d--;
                }
                if (e == d) b--;
                else {
                    if (e < d) e++;
                    if (e > d) e--;
                }
                if (f == e) c--;
                else {
                    if (f < e) f++;
                    if (f > e) f--;
                }
                h = 3;
                sleep(milliseconds(5));
            }

            if (Keyboard::isKeyPressed (Keyboard::Right) || h == 4)
            {
                i++;
                if (d == j) a++;
                else {
                    if (d < j) d++;
                    if (d > j) d--;
                }
                if (e == d) b++;
                else {
                    if (e < d) e++;
                    if (e > d) e--;
                }
                if (f == e) c++;
                else {
                    if (f < e) f++;
                    if (f > e) f--;
                }
                h = 4;
                sleep(milliseconds(5));
            }
        rec.setPosition(c+18,f);
        if ((posx + 18)>= i && i >=(posx) && (posy + 18)>= j && j >=(posy))
        {
        posx = (i/5) * (j * (0.03));
        posy = (j/7) * (i * (0.03));
        ab++;
        }


        rec1.setPosition (i,j);
        rec2.setPosition (a,d);
        rec3.setPosition (b,e);
        rec4.setPosition (c,f);
        cir.setPosition (posx,posy);

        window.clear(Color::Black);
        window.draw(cir);
        window.draw(rec1);
        window.draw(rec2);
        window.draw(rec3);
        window.draw(rec4);
        if (ab == 1) window.draw(rec);
        window.display();
    }

}
