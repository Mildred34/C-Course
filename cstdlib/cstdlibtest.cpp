#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(0));    //On initialise la suite de nombres aléatoires

    for(int i(0); i<10; ++i) 
        cout << rand() % 10 << endl;  //On génère des nombres au hasard

    return 0;
}