/* CSCI 261 LAB/HW: 
*
* Author: Cody CLayton
*
* ...
*/

#include <iostream>
#include <SFML/Graphics.hpp>
#include <string>
#include <fstream>
#include <cmath>

using namespace std;
using namespace sf;


int main()
{
    HEllo
	RenderWindow window(sf::VideoMode(1000, 650, 1), "Dark Souls III: Scholar of the Second Sin");
	VertexArray vert(sf::LinesStrip);

	while (window.isOpen())
	{
		window.clear();

		window.display();

		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
	}
    return EXIT_SUCCESS;
}