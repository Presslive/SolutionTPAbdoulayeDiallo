#include "Menus2043337.h"
#include "Formes2043337.h"
#include<iostream>
#include <string>
using namespace std;

												//ctrl+m+l pour étendre le code 

void afficherMenu1()								//affiche menu1 
{
	cout << "Choisissez la forme " << endl;
	cout << "1- Rectangle " << endl;
	cout << "2- Triangle " << endl;
	cout << "3- Carré " << endl;
	cout << "4- Losange " << endl;
	cout << "5- Quitter " << endl;
	cout << "Votre choix : ";

}


void afficherMenu2()										//affiche menu2
{
	cout << "Choisissez le remplissage  " << endl;
	cout << "1 - Plein " << endl;
	cout << "2 - Vide  " << endl;
	cout << "3 - Retour au menu principal " << endl;
	cout << "Votre choix : ";

}


		//Structure		validerMenu(à l'interieur,Switch pour le menu1(à l'interieur,Switch pour menu2))


int validerMenu(int Min, int Quitter)						//Fonction valider menu qui prend comme parametre Min et
															//Quitter  présent dans le main TP1Test.cpp																
{
	
Start:														//Utilisation d'un goto avec cette étiquette Start:
	system("CLS");											//Nettoyage écran

	//Déclarations des variables dans la fonction validerMenu

	int choixMenu1;
	int choixMenu2;

							
	{

		afficherMenu1();				//On affiche menu1
		choixMenu1 = saisirEntier();	//utilisation de la fonction saisirEntier() qui retourne le tapage dans choixMenu1


		while (choixMenu1 < Min || choixMenu1 > Quitter)       //Condition boucle : si le nombre rentrer est < que 1 et > que 5 
																//On rentre dans les {}
		{
			cout << "Votre choix doit etre compris entre 1 et 5 " << endl;		//affiche cela
			system("pause");									
			system("CLS");														//Nettoyage écran
			afficherMenu1();													//re-affiche menu1
			choixMenu1 = saisirEntier();										// et redemande une autre saisit
		}


		switch (choixMenu1)												//Switch avec 4 case 
		{
		case 1:															//si la saisit est 1=Rectangle
			system("CLS");												//Nettoyage écran
			afficherMenu2();											//affiche menu2 
			choixMenu2 = saisirEntier();								//saisirEntier qui stocke dans choixMenu2
			while (choixMenu2 < Min || choixMenu2 > 3)					//Condition boucle : si le nombre rentrer est < que 1 et > que 3
																			//On rentre dans les {}	
			{
				cout << "Votre choix doit etre compris entre 1 et 3 " << endl;
				system("pause");
				system("CLS");						
				afficherMenu2();
				choixMenu2 = saisirEntier();
			}

			switch (choixMenu2)							//Switch avec 2 case qui sont dans case1 de choixMenu1
			{
			case 1:traiterRectangle();							//Traite Rectangle plein
				goto Start;										//Retourne au main(début du programme) 
				break;
			case 2:traiterRectangleVide();						//Traite Rectangle Vide 
				goto Start;
				break;
			case 3: goto Start;									//case 3 Retourne au main(début du programme)

				break;
			default:
				break;
			}

			break;

		case 2:												//Case 2 =Triange
			system("CLS");
			afficherMenu2();
			choixMenu2 = saisirEntier();


			while (choixMenu2 < Min || choixMenu2 > 3)
			{
				cout << "Votre choix doit etre compris entre 1 et 3 " << endl;
				system("pause");
				system("CLS");
				afficherMenu2();
				choixMenu2 = saisirEntier();
			}

			switch (choixMenu2)
			{
			case 1:traiterTriangle();				//Traite Triangle plein
				goto Start;
				break;
			case 2:traiterTriangleVide();			//Traite Triangle vide
				goto Start;
				break;
			case 3: goto Start;
				system("CLS");
				break;
			default:
				break;
			}

			break;
		case 3:										//Case 3=Carrer
			system("CLS");
			afficherMenu2();
			choixMenu2 = saisirEntier();
			while (choixMenu2 < Min || choixMenu2 > 3)
			{
				cout << "Votre choix doit etre compris entre 1 et 3 " << endl;
				system("pause");
				system("CLS");
				afficherMenu2();
				choixMenu2 = saisirEntier();
			}

			switch (choixMenu2)
			{
			case 1: traiterCarre();			//Traite carrer plein
				goto Start;
				break;
			case 2:traiterCarreVide();		//Traite carrer Vide 
				goto Start;
				break;
			case 3: goto Start;
				
				break;
			default:
				break;
			}

			break;

		case 4:										//Case 4= Losange 
			system("CLS");
			afficherMenu2();
			choixMenu2 = saisirEntier();
			while (choixMenu2 < Min || choixMenu2 > 3)
			{
				cout << "Votre choix doit etre compris entre 1 et 3 " << endl;
				system("pause");
				system("CLS");
				afficherMenu2();
				choixMenu2 = saisirEntier();
			}

			switch (choixMenu2)
			{
			case 1: traiterLosange();			//Traite Losange plein
				goto Start;
				break;
			case 2:traiterLosangeVide();		//Traite Losange vide
				goto Start;
				break;
			case 3:goto Start;
				system("CLS");

				break;
			default:
				break;
			}

			break;
		}

	} while (choixMenu1 != Quitter);	//Tant que differend de Quitter=5, le programme reste éxecuter					

	if (choixMenu1 = Quitter)		//Codition: Si la sasit est = 5
									//Entre dans les {}
	{
		exit(0);					//Quitter le programme
	}

	return 0;
}



							//Fonction pour la saisit des Entiers; Par Karine Monreau
int saisirEntier()			 

{

	string clavier;

	getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier 
											// et de nettoyer la mémoire du clavier
	// Autre problème : stoi plante le programme si la chaine de caractères ne contient pas des chiffres
	// comme premiers caractères ou si elle est vide

	// Tant que 1. clavier est vide (clavier.empty() ou clavier == "") OU
	//          2. clavier ne commence pas (at(0), front(), [0]) par un chiffre (valeur positive) OU  commence  par le signe - et n'est pas suivi d'un chiffre


	/*while (clavier == ""
		|| ((clavier.front() < '0' || clavier.front() > '9')
			|| (clavier.front() == '-' && (clavier.at(1) < '0' || clavier.at(1) > '9'))))*/


	while (!(!clavier.empty() && ((clavier.front() >= '0' && clavier.front() <= '9')
		|| (clavier.length() > 1 && clavier.front() == '-' && clavier.at(1) >= '0' && clavier.at(1) <= '9'))))


	{
		cout << "Erreur : vous devez entrer un entier." << endl;
		cout << "Veuillez entrer un nombre entier : ";
		getline(cin, clavier, '\n');            // Permet de stocker les caractères dans la variable clavier

	}

	// Il faut maintenant convertir la chaine en entier
	return stoi(clavier);

	// Ici, si l'utilisateur tape une lettre, le cin >> la refuse et surtout laisse le caractère dans la mémoire du clavier
	// Il met 0 dans la variable int, même si ce n'est pas la bonne valeur
	// Et donc le programme part en boucle infinie car le deuxième cin >> récupère les caractères laissés 
	// dans la mémoire du clavier
	// Solution ==> lire tous les caractères tapés au clavier avec une chaine de caractères : string avec getline




}










