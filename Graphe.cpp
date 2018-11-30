//
// Created by o2070696 on 30/11/18.
//

#include <iostream>
#include "Graphe.h"

Graphe::Graphe() {}

Graphe::~Graphe() {
    cout << "nombre de sommets à delete" << sommets.size() << endl;
    std::vector<Sommet *>::iterator it;
    for (it = sommets.begin(); it != sommets.end(); it++){
        delete(*it);
    }
    sommets.clear();
    cout << "nombre de sommets à delete après" << sommets.size() << endl;

}


void Graphe::afficherGraphe() {
    cout << "nombre de sommets : " << sommets.size() << endl;
    for (Sommet * sommet : sommets)
    {
        cout << "numero : " << sommet->getValeur() << " voisins : " << sommet->getVoisins() << endl;
    }
}

void Graphe::supprimerSommet(Sommet sommet) {
    std::vector<Sommet *>::iterator it;
    for (it = sommets.begin(); it != sommets.end(); it++){
        Sommet * sommet1 = *it;
        if (sommet1->getValeur() == sommet.getValeur())
        {
            supprimerArete(sommet1->getValeur());
            sommets.erase(it);
        }
    }
}

void Graphe::supprimerSommet(int numero) {
    std::vector<Sommet *>::iterator it;
    for (it = sommets.begin(); it != sommets.end(); it++){
        Sommet * sommet1 = *it;
        if (sommet1->getValeur() == numero)
        {
            supprimerArete(sommet1->getValeur());
            sommets.erase(it);
        }
    }
}

void Graphe::supprimerArete(int valeur) {
    for (Sommet * sommet : sommets)
    {
        if (sommet->getValeur() != valeur)
            sommet->deleteVoisin(valeur);
    }
}

// suppression directe d'une arête
void Graphe::supprimerArete(int sommet1, int sommet2) {
    for (Sommet * sommet : sommets) {
        if (sommet->getValeur() == sommet1){
            sommet->deleteVoisin(sommet2);
           // delete (sommet);
    }
        else if (sommet->getValeur() == sommet2){
            sommet->deleteVoisin(sommet1);
            //delete sommet;
        }
    }
}

void Graphe::ajouterSommet(Sommet sommet) {
    sommets.push_back(&sommet);
}

void Graphe::ajouterSommet() {
    int taille = sommets.size();
    auto * sommet = new Sommet(taille+1);
    sommets.push_back(sommet);
}

void Graphe::ajouterArete(int sommet1, int sommet2, int poids){

    for (Sommet * sommet : sommets)
    {
        if (sommet->getValeur() == sommet1)
            sommet->addVoisins(sommet2, poids);

        else if (sommet->getValeur() == sommet2)
            sommet->addVoisins(sommet1, poids);
    }
}

void Graphe::parcoursProfondeur(){

}

void Graphe::parcoursLargeur(){

}


