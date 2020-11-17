#include "Formes2043337.h"
#include "Menus2043337.h"
#include <ctime>
#include<iostream>

//source pour quelques formes:https://fahad-cprogramming.blogspot.com/p/c-shapes-code.html?m=0
													
												//ctrl+m+l pour étendre le code
												//ou mettre la souris sur rectangle pour voir code

void Dessinerrectangle(int hauteur, int largeur)			//Dessiner Rectangle Plein
															
{

	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < largeur; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void DessinerrectangleVide(int hauteur, int largeur)		//fonction dessine rectangle vide
{

	for (int i = 0; i < hauteur; i++)


	{


		for (int j = 0; j < largeur; j++)
		{

			if (i == 0 || i == hauteur - 1 || j == 0 || j == largeur - 1)

			cout << "*";

			else

				cout << " ";
		}
		cout << endl;
	}

}

void Dessinertriangle(int hauteur)					//Fonction dessine triangle 1 plein
{
	for (int i = 1; i <= hauteur; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void Dessinertriangle2(int hauteur)					//Fonction dessine traingle 2 plein

{
	for (int i = hauteur; i >= 1; i--) {
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}

}

void Dessinertriangle3(int hauteur)				//Fonction dessine triangle 3 plein
{
	for (int i = 1; i <= hauteur; i++) {
		for (int k = hauteur - i; k > 0; k--) {
			cout << " ";
		}
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void DessinerLosangeVide(int hauteur)			//Fonction dessine losange Vide 
{
	int z = 1;
	for (int i = 0; i <= hauteur; i++)
	{
		for (int j = hauteur; j > i; j--)
		{
			cout << " ";
		}

		cout << "*";

		if (i > 0)
		{
			for (int k = 1; k <= z; k++)
			{
				cout << " ";
			}
			z += 2;
			cout << "*";
		}
		cout << endl;
	}

	z -= 4;

	for (int i = 0; i <= hauteur - 1; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << " ";
		}

		cout << "*";

		for (int k = 1; k <= z; k++)
		{
			cout << " ";
		}
		z -= 2;

		if (i != hauteur - 1)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void Dessinercarrer(int hauteur)			//Fonction dessine carrer plein
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void DessinercarrerVide(int hauteur)			//Fonction dessine carrer vide
{
	for (int i = 0; i < hauteur; i++)
	{
		for (int j = 0; j < hauteur; j++)
		{
			if (i == 0 || i == hauteur - 1 || j == 0 || j == hauteur - 1)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}

}

void DessinerLosange(int hauteur)						//Fonction dessine losange Vide 
{														//Source:http://shapesinc.blogspot.com/2013/08/diamond-problem-in-c.html
	for (int i = hauteur, k = 0; i >= 0; i--, k++)

	{

		for (int j = 0; j < hauteur + k; j++)

		{

			if (j > i)

				cout << "*";

			else

				cout << " ";

		}

		cout << endl;

	}


	for (int i = 1, k = hauteur; i < hauteur; i++, k--)

	{

		for (int j = 0; j < hauteur + k - 1; j++)

		{

			if (i < j)

				cout << "*";

			else

				cout << " ";

		}

		cout << endl;

	}
}



void Dessinertriangle4(int hauteur)  //Fonction dessine triangle4 plein
{
	for (int i = hauteur; i >= 1; i--) {
		for (int k = hauteur - i; k > 0; k--) {
			cout << " ";
		}
		for (int j = i; j > 0; j--) {
			cout << "*";
		}
		cout << endl;
	}
}	   

void DessinertriangleVide(int hauteur)				//Fonction dessine triangle1 vide
{
	for (int i = 0; i <= hauteur; i++)
	{

		for (int j = 0; j <= i; j++)
		{

			if (i != hauteur)

			{
				if (j == 0 || j == i)

					cout << "* ";
				else

					cout << "  ";
			}

			else if (i == hauteur)
				cout << "* ";

		}
		for (int spaces = i; spaces < hauteur; spaces++)

			cout << "  ";

		cout << endl;
	}
}

void DessinertriangleVide2(int hauteur)				//Fonction dessine trianlge2 vide 
{
	for (int i = hauteur, k = 0; i >= 0; i--, k++)

	{

		for (int j = 0; j < hauteur + k; j++)

		{

			if (j > i)

				cout << "*";

			else

				cout << " ";

		}

		cout << endl;

	}


	for (int i = 1, k = hauteur; i < hauteur; i++, k--)

	{

		for (int j = 0; j < hauteur + k - 1; j++)

		{

			if (i < j)

				cout << "*";

			else

				cout << " ";

		}

		cout << endl;

	}

}

void DessinertriangleVide3(int hauteur)				//Fonction dessine triangle3 vide
{
	for (int i = 0; i <= hauteur; i++)

	{

		for (int spaces1 = i; spaces1 < hauteur; spaces1++)

			cout << "  ";

		for (int j = 0; j <= i; j++)

		{
			if (i == hauteur)

				cout << "* ";

			else

				if (j == 0 || j == i)

					cout << "* ";

				else

					cout << "  ";

		}

		for (int spaces1 = 0; spaces1 < i; spaces1++)
			cout << "  ";
		cout << endl;

	}
}

void DessinertriangleVide4(int hauteur)		//Fonction dessine trinagle4 vide
{
	for (int i = 0; i <= hauteur; i++)
	{


		for (int j = 0; j <= hauteur; j++)
		{


			if (i == 0)
				cout << "* ";


			else
				if (j == i || j == hauteur)


					cout << "* ";
				else


					cout << "  ";
		}


		cout << endl;
	}
}

void traiterRectangle()					//Fonction qui traite Rectangle plein pour case1>>case1
{
	//Déclarations des variables
	int hauteur;
	int largeur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();			

	cout << endl;

	cout << "Indiquez la largeur: ";
	largeur = saisirEntier();

	cout << endl;

	while (hauteur <= 0 || largeur <= 0)			//conditon boucle:Tant que saisi hauteur <=0 et saisit largeur <= 0
													//On entre dans les {}
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();

		cout << endl;

		cout << " Indiquez la largeur: ";
		largeur = saisirEntier();

		cout << endl;
	}
	system("CLS");
	cout << "Voici votre rectangle plein de " << hauteur << "X" << largeur << endl;
	cout << "****************" << endl;
	Dessinerrectangle(hauteur, largeur);					//Appele de la fonction Dessinerrectangle avec 2 parametre saisit
	system("pause");
	

}

void traiterTriangle()					//Fonction qui traite Triangle plein pour case2>>case1
{
	srand(time(NULL));
	int alea = genererAlea();				//return nombre aleatoire dans variable (alea)
	//Déclarations des variables
	int hauteur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();
	cout << endl;

	while (hauteur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();
	}
	system("CLS");

	cout << "Voici votre triangle plein de " << hauteur << endl;
	cout << "****************" << endl;

	if (alea == 1)								//Pour chaque nombre aleatoire, une forme de trianlge plein
	{
		Dessinertriangle(hauteur);					//Appele de la fonction Dessinertriangle  avec 1 parametre saisit *4 pour nbr aleatoirer
	}
	if (alea == 2)
	{
		Dessinertriangle2(hauteur);
	}
	if (alea == 3)
	{
		Dessinertriangle3(hauteur);
	}
	if (alea == 4)
	{
		Dessinertriangle4(hauteur);
	}
	system("pause");

}

void traiterTriangleVide()				//Fonction qui traite Triangle Vide pour case2>>case2
{

	srand(time(NULL));
	int alea = genererAlea();
	//Déclarations des variables
	int hauteur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();
	cout << endl;

	while (hauteur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();
	}
	system("CLS");

	cout << "Voici votre triangle vide de " << hauteur << endl;
	cout << "****************" << endl;

	if (alea == 1)							
	{
		DessinertriangleVide(hauteur);
	}
	if (alea == 2)
	{
		DessinertriangleVide2(hauteur);
	}
	if (alea == 3)
	{
		DessinertriangleVide3(hauteur);
	}
	if (alea == 4)
	{
		DessinertriangleVide4(hauteur);
	}
	system("pause");
}

void traiterCarre()					//Fonction qui traite Carrer plein pour case3>>case1
{
	//Déclarations des variables
	int hauteur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();
	cout << endl;

	while (hauteur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();
	}

	system("CLS");
	cout << "Voici votre carre plein de " << hauteur << "X" << hauteur << endl;
	cout << "****************" << endl;
	Dessinercarrer(hauteur);		//Appele de la fonction Dessinerrcarrer avec 1parametre saisit
	system("pause");

}

void traiterCarreVide()			//Fonction qui traite Carrer vide pour case3>>case2
{
	int hauteur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();
	cout << endl;

	while (hauteur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();
	}

	system("CLS");
	cout << "Voici votre carre vide de " << hauteur << "X" << hauteur << endl;
	cout << "****************" << endl;
	DessinercarrerVide(hauteur);		//Appele de la fonction DessinerrcarrerVide avec 1parametre saisit
	system("pause");
}

void traiterLosange()					//Fonction qui traite Losange plein pour case4>>case1
{
	//Déclarations des variables
	int hauteur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();
	cout << endl;

	while (hauteur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();
	}

	system("CLS");
	cout << "Voici votre losange plein de " << hauteur << endl;
	cout << "****************" << endl;
	DessinerLosange(hauteur);					//Appele de la fonction DessinerLosange avec 1parametre saisit
	system("pause");
}

void traiterRectangleVide()					//Fonction qui traite Rectangle vide pour case1>>case2
{
	//Déclarations des variables
	int hauteur;
	int largeur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();

	cout << endl;

	cout << "Indiquez la largeur: ";
	largeur = saisirEntier();

	cout << endl;

	while (hauteur <= 0 || largeur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();

		cout << endl;

		cout << " Indiquez la largeur: ";
		largeur = saisirEntier();

		cout << endl;
	}
	system("CLS");
	cout << "Voici votre rectangle vide de " << hauteur << "X" << largeur << endl;
	cout << "****************" << endl;
	DessinerrectangleVide(hauteur, largeur);			//Appele de la fonction DessinerrectangleVide avec 2parametre saisit
	cout << endl;
	system("pause");
	 
}

void traiterLosangeVide()			//Fonction qui traite Losange Vide pour case4>>case2
{
	//Déclarations des variables
	int hauteur;
	cout << "Indiquez la hauteur: ";
	hauteur = saisirEntier();
	cout << endl;

	while (hauteur <= 0)
	{
		cout << "Indiquez la hauteur: ";
		hauteur = saisirEntier();
	}

	system("CLS");
	cout << "Voici votre losange vide de " << hauteur << endl;
	cout << "****************" << endl;
	DessinerLosangeVide(hauteur);				//Appele de la fonction DessinerLosangeVide avec 1parametre saisit
	system("pause");

}

int genererAlea()		//Génere nombre aleatoire; Par Karine Monreau
{
	int min = 1;
	int max = 4;
	return rand() % (max - min + 1) + (min);
}
