//But: Déterminer si un nombre choisi par l'utilisateur est pair ou impair
//Auteur: Hadrien Breton
//Date: 2020-09-10

#include <iostream>													//Pour pouvoir utiliser cin et cout

void main()
{
	int nb;															//Sert à réserver de la mémoire pour lenombre qui va être entré par l'utilisateur
	int res;														//Réserve de la mémoire pour l'opération %

	setlocale(LC_ALL, "");											//Sert à afficher les bons accents dans la console	

	std::cout << "Veuillez entrer un nombre: ";						//Affiche le message entre guillemets à l'utilisateur
	std::cin >> nb;													//Sert à faire entrer une valeur à l'utilisateur pour initialiser la variable

	res = (nb % 2);													//Effectue l'opération %2 au nombre entré par l'utilisateur et le stocker dans la variable "res". 
																	//En effectuant cette opération, on ne peut obtenir que 0 ou 1 dépendemment si le nombre entré par l'utilisateur est pair ou impair.

	if (res==0)														//Si "res" est égal à 0, ça signifie que "nb" est pair. La boucle if permet de vérifier si "nb" est égal à 0.
	{
		std::cout << "Le nombre " << nb << " est pair.";				//Le programme affiche à l'écran que le nombre est pair
	}
	else															//Si "nb" n'est pas égal à 0, le programme saute la boucle if et se rends automatiquement à la boucle else
	{
		std::cout << "Le nombre " << nb << " est impair.";			//Le programme affiche à l'écran que le nombre est impair
	}

}

// KM : WOW et ReWow ! Quel programme et quel plan de tests complet ! Bravo

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
