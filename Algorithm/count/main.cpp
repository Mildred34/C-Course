#include "Foncteur_T.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

/* 

Programme qui génère un tableau de 100 
nombres aléatoires entre 0 et 9 puis qui compte le nombre 
de 5 générés. 

*/

int main(){

	srand(time(0)); // Génère une séquence aléatoire à chaque exécution

	vector<int> tab(100,0);

	vector<int>::iterator it = tab.begin();

	generate(it,tab.end(),Remplir());
	int nombre = count(tab.begin(), tab.end(), 5);

	cout << "Le vecteur comprend " << nombre << " itérations du chiffre 5" << endl;
 
	return 0;
}