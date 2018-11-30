//
// Created by o2070696 on 30/11/18.
//

#ifndef UNTITLED1_GRAPHE_H
#define UNTITLED1_GRAPHE_H


#include <vector>
#include "Sommet.h"

using namespace std;

class Graphe {

    vector<Sommet> sommets;

public:
    Graphe();
    ~Graphe();
    void ajouterSommet(Sommet sommet);
    void ajouterSommet();
    void supprimerSommet(int numero);
    void supprimerSommet(Sommet sommet);
    void afficherGraphe();
    void ajouterArete(int sommet1, int sommet2, int poids);
    void supprimerArete(int valeur);
    void supprimerArete(int sommet1, int sommet2);
    void destroy();

};


#endif //UNTITLED1_GRAPHE_H
