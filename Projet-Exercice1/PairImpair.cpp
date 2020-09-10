//But: D�terminer si un nombre choisi par l'utilisateur est pair ou impair
//Auteur: Hadrien Breton
//Date: 2020-09-10

#include <iostream>

void main()
{
	int nb;															//Sert � r�server de la m�moire pour lenombre qui va �tre entr� par l'utilisateur
	int res;														//R�serve de la m�moire pour l'op�ration %

	setlocale(LC_ALL, "");											//Sert � afficher les bons accents dans la console	

	std::cout << "Veuillez entrer un nombre: ";						//Affiche le message entre guillemets � l'utilisateur
	std::cin >> nb;													//Sert � faire entrer une valeur � l'utilisateur pour initialiser la variable

	res = (nb % 2);													//Effectue l'op�ration %2 au nombre entr� par l'utilisateur et le stocker dans la variable "res". 
																	//En effectuant cette op�ration, on ne peut obtenir que 0 ou 1 d�pendemment si le nombre entr� par l'utilisateur est pair ou impair.

	if (res==0)														//Si "res" est �gal � 0, �a signifie que "nb" est pair. La boucle if permet de v�rifier si "nb" est �gal � 0.
	{
		std::cout << "Le nombre " << nb << " est pair.";				//Le programme affiche � l'�cran que le nombre est pair
	}
	else															//Si "nb" n'est pas �gal � 0, le programme saute la boucle if et se rends automatiquement � la boucle else
	{
		std::cout << "Le nombre " << nb << " est impair.";			//Le programme affiche � l'�cran que le nombre est impair
	}

}



//Le plan de test
/*
nb				res					Texte
-61				-1					Le nombre -61 est impair
-3				-1					Le nombre -1 est impair
-2				0					Le nombre -2 est pair
-1				-1					Le nombre -1 est impair
0				0					Le nombre 0 est pair
1				1					Le nombre 1 est impair
2				0					Le nombre 2 est pair
3				1					Le nombre 3 est impair
4				0					Le nombre 4 est pair
10				0					Le nombre 10 est pair
11				1					Le nombre 11 est impair
28				0					Le nombre 28 est pair
53				1					Le nombre 53 est impair
*/