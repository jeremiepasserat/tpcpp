#include <iostream>
#include "Graphe.h"

int main() {
    Graphe * graphe = new Graphe();
    graphe->ajouterSommet();
    graphe->ajouterSommet();
    Sommet sommet(4);
    graphe->ajouterSommet(sommet);
    graphe->ajouterArete(1,2,5);
    graphe->ajouterArete(4,1,8);
    graphe->afficherGraphe();
    graphe->supprimerSommet(2);
    graphe->afficherGraphe();
    graphe->ajouterSommet();
    graphe->afficherGraphe();
    graphe->supprimerArete(1,4);
    graphe->afficherGraphe();
    //delete graphe;
    //graphe.destroy();


    //std::cout << "Hello, World!" << std::endl;
    return 0;
}