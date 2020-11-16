#include <SFML/Graphics.hpp>
#include<iostream>
using namespace sf;
using namespace std;
int main()
{
   RenderWindow window(VideoMode(500, 500), "Hi");
   RectangleShape rectangle(Vector2f(50.0f,50.0f));
   rectangle.setFillColor (Color::Red);
   int i=0;
   while(window.isOpen())
   {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
            {
                window.close();
            }
        }
        //rectangle.setOrigin(64,64);
        rectangle.setPosition (i,i);
        window.clear(Color::Black);
        window.draw(rectangle);
        window.display();
        if(i<=450)
        {
          i++;
        }

   }
}


