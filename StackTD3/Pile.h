#pragma once
 #define MAX  5

using namespace std;
class Pile
{
private:
	int taille[MAX];
    int top;
    int** t;

public:
    Pile();
    bool Empiler(int x);
    int Depiler();
    int Sommet() const;
    bool PileVide();
    void AfficherPile();
    bool PilePlein();
    ~Pile();
};

