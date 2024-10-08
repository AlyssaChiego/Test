#include <iostream>
#include <SFML/Window.hpp>

int main(){

    sf::Window window(sf::VideoMode(10, 10), "Window");

    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        sf::Event event;
        while (window.pollEvent(event))
        {
            // "close requested" event: we close the window
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

//    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
//    {
//        std::cout << "A";
//    }

    return 0;
}
