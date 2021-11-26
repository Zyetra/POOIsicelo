#include "class.h"
#include <iostream>
#include <string>

using namespace std;

Commande::Commande(int taille) {
	this->taille = taille;
	this->index = 0;
	Tab_Commande = new Article* [this->taille];
	Tab_Nombre = new int [this->taille];
	
}

Commande::~Commande() {
	delete* Tab_Commande;
	delete Tab_Nombre;
}

void Commande::addArticle(Article* obj, int Nombre) {
		Tab_Commande[this->index] = obj;
		Tab_Nombre[this->index] = Nombre;
		this->index++;
}

void Commande::addReference() {
	//Reference = 
}

void Commande::getArticle() {

}

void Commande::editCommande(string Reference) {

}