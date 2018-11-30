//
// Created by o2070696 on 30/11/18.
//

#include <iostream>
#include "Sommet.h"

Sommet::Sommet() {}

Sommet::Sommet(int val) {
    valeur = val;
}

Sommet::~Sommet() {
}

void Sommet::addVoisins(int num, int poids) {
    voisins[num] = poids;
}

void Sommet::addVoisins(std::pair<int, int> voisin) {
    voisins[voisin.first] = voisin.second;
}

void Sommet::deleteVoisin(int valeur) {
    map<int, int>::iterator it;
    for (it = voisins.begin(); it != voisins.end(); it++) {
        if (it->first == valeur)
            voisins.erase(it);
    }
}


string Sommet::getVoisins() {

    if (voisins.size() == 0)
        return "Ce sommet n'a aucun voisin pour l'instant";

    string listeVoisins;

    map<int, int>::iterator it;
    for (it = voisins.begin(); it != voisins.end(); it++)
    {
        listeVoisins += "(";
        listeVoisins += std::to_string(it->first);
        listeVoisins += ",";
        listeVoisins += std::to_string(it->second);
        listeVoisins += ")";
    }

    return listeVoisins;
}

int Sommet::getValeur() {
    return valeur;
}


