#include "Generer.hpp"
#include "Predicat_Maj.hpp"
using namespace std;

int main(){
	srand(time(0)); // Génère une séquence aléatoire à chaque exécution

	deque<char> liste(100,0); // une deque de 100 valeurs initialisées à 'a'

	deque<char>::iterator beginning = liste.begin();

	generate(beginning, liste.end(), Generer()); // on applique le foncteur f à tous les itérateurs de deque liste

	deque<char>::iterator trouvea = find(beginning,liste.end(),'a');
	*(liste.end()-5) = 'A'; // Ajout d'une majuscule pour tester un prédicat sur les lettres majuscules

	if(trouvea != liste.end()){


		cout << "La lettre 'a' a été trouvé à l'indice: " << trouvea - beginning << endl;
	}
	else{
		cout << "Pas de lettre a" << endl;
	}
	
	deque<char>::iterator trouveA = find_if(beginning,liste.end(), Majuscule());

	if(trouveA != liste.end()){


		cout << "La lettre 'A' a été trouvé à l'indice: " << trouveA - beginning << endl;
	}
	else{

		cout << "Pas de lettre capital" << endl;
	}


	return 0;
}

