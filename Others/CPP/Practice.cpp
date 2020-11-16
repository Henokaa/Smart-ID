#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;
int main()
{
   // cout<<"ኣማርኛ";
    cout<<"\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
    cout<<"\t\\\\     EEEEE    QQQ    U   U   BBBB      \\\\\n";
    cout<<"\t\\\\     E       Q   Q   U   U   B   B     \\\\\n";
    cout<<"\t\\\\     EEEEE   Q   Q   U   U   BBBB      \\\\\n";
    cout<<"\t\\\\     E       Q  QQ   U   U   B   B     \\\\\n";
    cout<<"\t\\\\     EEEEE    QQQ Q   UUU    BBBB      \\\\\n";
    cout<<"\t\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\n";
    RenderWindow win (VideoMode(100,200) , "Practice makes you perfect");
    RectangleShape rectangle (Vector2f(50,50));
    rectangle.setFillColor(Color::Red);
    while (win.isOpen())
    {
        Event event;
        while(win.pollEvent(event))
        {
            if(event.type == Event::Closed)
            {
                win.close();
            }
        }
    rectangle.setPosition(0,0);
    win.clear(Color::Black);
    win.draw(rectangle);
    win.display();
    }

}
