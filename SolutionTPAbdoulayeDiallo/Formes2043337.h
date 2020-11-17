//But:Dans ce menu, il doit y'avoir Les Formes à traiter + le génerateur de nombre aléatoire +les dessiner formes comme par exemple triangle
//Auteur:Diallo Abdoulaye
//Date:2020-11-17

#include<iostream>
using namespace std;

#pragma once

										//Fonction pour Dessiner les formes
void Dessinerrectangle(int hauteur, int largeur);				
void DessinerrectangleVide(int hauteur, int largeur);
void Dessinertriangle(int  hauteur);
void Dessinertriangle2(int hauteur);
void Dessinertriangle3(int hauteur);
void Dessinertriangle4(int hauteur);
void DessinertriangleVide(int hauteur);
void DessinertriangleVide2(int hauteur);
void DessinertriangleVide3(int hauteur);
void DessinertriangleVide4(int hauteur);
void Dessinercarrer(int hauteur);
void DessinercarrerVide(int hauteur);
void DessinerLosange(int hauteur);
void DessinerLosangeVide (int hauteur);

									//Fonction pour Traiter les formes Dessiner 
void traiterRectangle();
void traiterTriangle();
void traiterTriangleVide();
void traiterRectangleVide();
void traiterCarre();
void traiterCarreVide();
void traiterLosange();
void traiterLosangeVide();

//Fonction qui génere nombre aléatoire; Par Karine Monreau 
int genererAlea();

