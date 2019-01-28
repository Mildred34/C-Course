#include "Foncteur_T.hpp"
#include "Predicat_T.hpp"
#include <algorithm>
#include <vector>
using namespace std;

/* 

Programme qui génère un tableau de 100 
nombres aléatoires entre 0 et 9 puis qui compte le nombre 
de 5 générés. 

*/

int main(){

	srand(time(0)); // Génère une séquence aléatoire à chaque exécution

	vector<char> tab(100,0);

	vector<char>::iterator it = tab.begin();

	generate(it,tab.end(),Remplir());
	int nombre = count_if(tab.begin(), tab.end(), TestVoyelles());

	cout << "Le vecteur comprend " << nombre << " itérations de voyelle" << endl;
 
	return 0;
}