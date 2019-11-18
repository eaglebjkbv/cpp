#include <SFML/Graphics.hpp>
#include <iostream>
// g++ -c main.cpp -I/usr/local/Cellar/sfml/2.5.1/include
// g++  main.o -o main  -I/usr/local/Cellar/sfml/2.5.1/include -L /usr/local/Cellar/sfml/2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system
int main()
{
    int rx=50,ry=10;
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML Calisiyor...");
    sf::CircleShape shape(10.f);
    shape.setFillColor(sf::Color::Red);
    sf::RectangleShape rs;
    rs.setPosition(rx,ry);
    rs.setSize(sf::Vector2f(10,10));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if(event.type==sf::Event::KeyPressed){
                if(event.key.code==sf::Keyboard::Right)
                {
                    rx++;
                }
                if(event.key.code==sf::Keyboard::Left)
                {
                    rx--;
                }
                if(event.key.code==sf::Keyboard::Up)
                {
                    ry--;
                }
                if(event.key.code==sf::Keyboard::Down)
                {
                    ry++;
                }

                rs.setPosition(rx,ry);
            }
            
        }

        window.clear();
        window.draw(rs);
        window.draw(shape);
        window.display();
    }

    return 0;
}