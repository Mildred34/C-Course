#include <deque> //Ne pas oublier !
#include <iostream>
using namespace std;

int main()
{ 
    deque<int> d(4,5); //Une deque de 4 entiers valant 5
    
    d.push_front(2);   //On ajoute le nombre 2 au début
    d.push_back(8);    //Et le nombre 8 à la fin

    for(int i(0); i<d.size(); ++i)
        cout << d[i] << " ";    //Affiche 2 5 5 5 5 8

    return 0;
}