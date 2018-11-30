#include <iostream>
#include "Graphe.h"

int main() {
    Graphe graphe;
    graphe.ajouterSommet();
    graphe.ajouterSommet();
    graphe.ajouterSommet(*new Sommet(4));
    graphe.ajouterArete(1,2,5);
    graphe.ajouterArete(4,1,8);
    graphe.afficherGraphe();
    graphe.supprimerSommet(2);
    graphe.afficherGraphe();
    graphe.ajouterSommet();
    graphe.afficherGraphe();
    graphe.supprimerArete(1,4);
    graphe.afficherGraphe();
    graphe.destroy();


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}