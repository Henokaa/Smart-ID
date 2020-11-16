#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>
using namespace sf;
using namespace std;

int main()
{
    int y=1;
    //cin>>y;
    if (y==1)
    {
    RenderWindow window(VideoMode(640,480), "Bouncing mushroom.");
    Texture mushroomTexture;
    mushroomTexture.loadFromFile("Images/quincy.jpg");
    Sprite mushroom(mushroomTexture);
    Vector2u size = mushroomTexture.getSize();
    mushroom.setOrigin(size.x / 2, size.y / 2);
    Vector2f increment(0.4f, 0.4f);
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
        if((mushroom.getPosition().x + (size.x / 2) > window.getSize().x && increment.x > 0) ||(mushroom.getPosition().x - (size.x / 2) < 0 && increment.x < 0))
        {
            // Reverse the direction on X axis.
            increment.x = -increment.x;
        }
        if((mushroom.getPosition().y + (size.y / 2) > window.getSize().y && increment.y > 0) || (mushroom.getPosition().y - (size.y / 2) < 0 && increment.y < 0))
        {
            // Reverse the direction on Y axis.
            increment.y = -increment.y;
        }
        mushroom.setPosition(mushroom.getPosition() + increment);
        window.clear(sf::Color(16,16,16,255)); // Dark gray.
        window.draw(mushroom); // Drawing our sprite.
        window.display();
    }
    }
    cout << "Hi";
}
