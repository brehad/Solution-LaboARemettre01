//But: Reconnaitre si un nombre entré par l'utilisateur a 5 chiffres et l'afficher à la verticale
//Auteur: Hadrien Breton
//Date: 2020-13-09

#include <iostream>
using namespace std;

void main()
{
	int nb;
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;
	
	setlocale(LC_ALL, "");

	std::cout << "Veuillez entrer un nombre à 5 chiffres: ";
	std::cin >> nb;

	if (nb>9999 && nb<100000)
	{
		c5 = (nb % 10);
		c4 = ((nb % 100-c5) / 10);
		c3 = (((nb % 1000 - c5) / 10 - c4)/10);
		c2 = ((((nb % 10000 - c5) / 10 - c4) / 10 - c3) / 10);
		c1 = (((((nb - c5) / 10 - c4) / 10 - c3) / 10 - c2) / 10);
		
		std::cout << c1 << endl;
		std::cout << c2 << endl;
		std::cout << c3 << endl;
		std::cout << c4 << endl;
		std::cout << c5 << endl;
	}
	else
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}





}