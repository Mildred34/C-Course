#include "Generer_For_Each.hpp"
#include "Predicat_Display.hpp"
#include "Predicat_Sum.hpp"
using namespace std;

int main(){
	srand(time(0)); // Génère une séquence aléatoire à chaque exécution

	vector<int> tab(100,0); // une vector de 100 valeurs initialisées à 'a'

	vector<int>::iterator beginning = tab.begin();

	generate(beginning, tab.end(), Generer()); // on applique le foncteur f à tous les itérateurs de deque liste

	// sort(beginning,tab.end(),Sort());

	// for_each(beginning, tab.end(), Display());

	Sum somme;

	somme = for_each(beginning, tab.end(), Sum());

	cout << somme.result() << endl;
	return 0;
}

