
#include "Pile.h"
#include <iostream>
using namespace std;


int main()
{
	Pile p;

	p.Empiler(5);
	p.Empiler(10);
	p.Empiler(20);
	p.Empiler(30);
	p.Empiler(40);
	//p.Depiler();
	p.AfficherPile();
	p.Sommet();
}


