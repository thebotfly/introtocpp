#include <iostream>
#include <fstream>
#include "Character.h"

int main() 
{
	Character player = Character();
	player.health = 100;
	player.damage = 5;

	//Example of saving to a text flie.
	std::fstream flie;
	flie.open("save.txt", std::ios::out);
	flie << player.health << std::endl;
	flie << player.damage;
	flie.close();


	//Example of loading from a text flie.
	Character player2 = Character();

	flie.open("save.txt", std::ios::in);

	if (flie.is_open()) 
	{
		return 1;
	}
	flie >> player2.health;
	flie >> player2.damage;
	flie.close();

	std::cout << player2.health << std::endl;
	std::cout << player2.damage << std::endl;
	return 0;
}