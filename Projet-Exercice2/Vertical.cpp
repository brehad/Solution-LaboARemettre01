//But: Reconnaitre si un nombre entré par l'utilisateur a 5 chiffres et l'afficher à la verticale
//Auteur: Hadrien Breton
//Date: 2020-13-09

#include <iostream>																	//Pour pouvoir utiliser cin et cout
using namespace std;																//Pour pouvoir utiliser endl, pour sauter des lignes

void main()																			
{
	int nb;																			//Pour réserver les variables. nb est le nombre netré par l'utilisateur
	int c1;																			//Les variables de c1 à c5 servent à stocker chacuns des chiffres indépendemment
	int c2;
	int c3;
	int c4;
	int c5;
	
	setlocale(LC_ALL, "");															//Pour afficher correctement les accents dans la console

	std::cout << "Veuillez entrer un nombre à 5 chiffres: ";						//Affiche le message entre guillemets dans la console
	std::cin >> nb;																	//Enregistre le nombre entré par l'utilisateur dans la variable nb

	if (nb>9999 && nb<100000)														//Vérifie si le nombre nb est entre 10000 et 99999. Le && sert à ajouter une condition.
	{
		c5 = (nb % 10);																//En faisant %10 d'un nombre, on obtient son dernier chiffre, on obtient ses 2 derniers chiffres en faisant %100 et ainsi de suite.
		c4 = ((nb % 100-c5) / 10);													//Avec cette stratégie et en soustrayant et divisant les nombres j'ai réussi à isoler chacuns des chiffres séparément.
		c3 = (((nb % 1000 - c5) / 10 - c4)/10);										//Ces chiffres sont enregistrés dans leur variable correspondante.
		c2 = ((((nb % 10000 - c5) / 10 - c4) / 10 - c3) / 10);						
		c1 = (((((nb - c5) / 10 - c4) / 10 - c3) / 10 - c2) / 10);					
		
		std::cout << c1 << endl;													//Le programme affiche la valeur de chacunes des variables dans l'ordre. endl sert à sauter une ligne
		std::cout << c2 << endl;
		std::cout << c3 << endl;
		std::cout << c4 << endl;
		std::cout << c5 << endl;
	}
	else if (nb<-9999 && nb>-100000)												//Le premier if n'inclue pas les nombres négatifs, donc j'en ai mis un deuxième.
	{
		c5 = abs(nb % -10);															//Ce bloc est presque identique à celui d'avant. La seule différence est que j'ai mis des valeur absolue pour obtenir des chiffres positifs.
		c4 = abs((nb % -100 - c5) / 10);											//Si je ne l'avais pas fait de cette façon, le symbole "-" serait devant tous les chiffres.
		c3 = abs(((nb % -1000 - c5) / 10 - c4) / 10);							
		c2 = abs((((nb % -10000 - c5) / 10 - c4) / 10 - c3) / 10);					
		c1 = abs(((((nb - c5) / 10 - c4) / 10 - c3) / 10 - c2) / 10);				

		std::cout << "-" << endl; 													// Puisque j'ai mis tous les chiffres positifs, il faut que je rajoute le symbole "-" au début de la suite de chiffres.
		std::cout << c1 << endl;													
		std::cout << c2 << endl;
		std::cout << c3 << endl;
		std::cout << c4 << endl;
		std::cout << c5 << endl;
	}
	else
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";						//Si le nombre entré ne corresponds pas aux conditions plus haut, le programme affiche dans la console que le nombre ne contient pas 5 chiffres.
	}

}

//Plan de test
/*nb				À la verticale					"Ce nombre ne contient pas 5 chiffres"
12345				x
1234												x
-12345				x
123456												x
75346				x
-64287				x
-123456												x
9999												x
100000												x
*/