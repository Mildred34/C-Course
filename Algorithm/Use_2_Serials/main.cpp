#include "Generer_Serial.hpp"
using namespace std;

int main(){
	srand(time(0)); // Génère une séquence aléatoire à chaque exécution

	vector<double> a(100,0.0); // une vector de 100 valeurs initialisées à 0
	vector<double> b(100,0.0); // une vector de 100 valeurs initialisées à 0
	vector<double> c(100,0.0); // une vector de 100 valeurs initialisées à 0

	generate(a.begin(), a.end(), Generer()); // on applique le foncteur f à tous les itérateurs
	generate(b.begin(), b.end(), Generer()); // on applique le foncteur f à tous les itérateurs de deque liste


	transform(a.begin(), a.end(),b.begin(), c.begin(), plus<double>());

	for(vector<double>::iterator it = c.begin() ; it != c.end() ; ++it){

		cout << *it << endl;
	}


	return 0;
}

