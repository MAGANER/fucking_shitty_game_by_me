#include<SFML/Graphics.hpp>
#include"rule_variables.h"
#include"stdafx.h"
#include"objects.h"
int main()
{

	while (window.isOpen())
	{
//////////////////////////////////////////////
//////////EVENT///////////////////////////////
//////////////////////////////////////////////
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
//////////////////////////////////////////////
/////////////////////////////////////////////
////////KEY PRESSING/////////////////////////
		if (game)
		{

        }
		if (game_menu)
		{

		}

/////////////////////////////////////////////
///////////ACTIONS///////////////////////////


//////////////////////////////////////////////
//////////////////////////////////////////////
////////////DRAWING///////////////////////////
//////////////////////////////////////////////
		window.clear();
		if (game)
		{

		}
		if (game_menu)
		{

		}
		window.display();
//////////////////////////////////////////////
//////////////////////////////////////////////
	}

	return 0;
}