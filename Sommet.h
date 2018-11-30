//
// Created by o2070696 on 30/11/18.
//

#ifndef UNTITLED1_SOMMET_H
#define UNTITLED1_SOMMET_H


#include <map>
#include <string>

using namespace std;

class Sommet {

    int valeur;
    std::map<int, int> voisins;

public:
    Sommet();
    Sommet(int valeur);
    ~Sommet();
    void addVoisins(int num, int poids); // correspond à ajouter arête.
    void addVoisins(std::pair<int, int> voisin);
    void deleteVoisin(int valeur);
    int getValeur();
    string getVoisins();
};


#endif //UNTITLED1_SOMMET_H
