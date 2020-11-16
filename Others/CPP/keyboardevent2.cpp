#include <iostream>
#include <SFML/Graphics.hpp>
#include <windows.h>
using namespace std;
using namespace sf;
int main()
{
    int i=0,j=0,x=100,y=100;
    RenderWindow winname(VideoMode(640,480), "dispname");
    RectangleShape rec(Vector2f(16.0f,16.0f));
    //RectangleShape rect(Vector2f(16.0f,16.0f));
    rec.setFillColor (Color::Yellow);
    //rect.setFillColor (Color::Red);
    while (winname.isOpen())
    {
        Event eventname;
        while (winname.pollEvent(eventname))
        {
            if (eventname.type == Event::Closed)
                winname.close();
        }
            if (Keyboard::isKeyPressed (Keyboard::Up))
                j--;
            if (Keyboard::isKeyPressed (Keyboard::Down))
                j++;
            if (Keyboard::isKeyPressed (Keyboard::Left))
                i--;
            if (Keyboard::isKeyPressed (Keyboard::Right))
                i++;
        cout<<j<<" "<<i<<endl;
        rec.setPosition (i,j);
       // rect.setPosition (x,y);
        winname.clear(Color::Black);
        winname.draw(rec);
        //winname.draw(rect);
        winname.display();
    }


}
