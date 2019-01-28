#include "F_map_longueur.hpp"

using namespace std;

int main(){

	map<string, int,Comparelongueur> dictionnaire;
	
	dictionnaire["Adrien"] = 24;
	dictionnaire["Alexis"] = 24; // "On ajoute les clés et leur valeur dans le dico"
	dictionnaire["Yann"] = 25;
	dictionnaire["Cyrielle"] =  26;
	

	map<string, int>::iterator it = dictionnaire.begin();

	for(it;it!=dictionnaire.end();++it)
	{

		cout << it->first << " - " << it->second << endl;
	}

	return 0;
}