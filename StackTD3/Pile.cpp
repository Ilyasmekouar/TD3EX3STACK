#include "Pile.h"
using namespace std;
#include <iostream>

Pile::Pile()
{
  top = -1;
 for (int i = 0; i < MAX; i++) {
   taille[i] = 0;
 }
    
}

bool Pile::Empiler(int x)
{
    /*  if (PilePlein()) {    toujours la pile est pleine de zero
        return false;
    }*/
     //{              
        ++top;
        taille[top] = x;
      //  cout << x << endl;      
        return true;
    //}
}

int Pile::Depiler()
{
   // if (PileVide()) {   toujours la pile est plein de zero
     //   return false;
    //}
  //  else {
        int popvalue = taille[top];
            taille[top] = 0;
        top--;
        return popvalue;
   // }
}

int Pile::Sommet() const
{
    cout << taille[MAX]  << endl;
    return taille[MAX];
}




bool Pile::PileVide()
{
    if (top == -1) {
        return true;
    }
    else {
        return false;
    }
}

void Pile::AfficherPile()
{
    for (int i = MAX; i >= 0; i--) {
      cout << this->taille[i] << endl;
    }
   
}

bool Pile::PilePlein()
{
    if (top == this->taille[MAX]) {
        return true;
    }
    else {
        return false;
    }
}

Pile::~Pile()
{

}





/*


int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}
*/