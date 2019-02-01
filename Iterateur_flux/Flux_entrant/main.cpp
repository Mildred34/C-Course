#include <fstream>
#include <iterator>
#include <iostream>
using namespace std;

int main()
{
    ifstream fichier("Test.txt");
    istream_iterator<int> it(fichier); //Un itérateur sur le fichier                           
    istream_iterator<int> end;         //Le signal de fin

    while(it != end)   //Tant qu'on a pas atteint la fin
    {
        cout << *it << endl;  //On lit
        ++it;                 //Et on avance
    }
    return 0;
}