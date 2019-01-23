#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
	cout << "Entrez une phrase : " << endl;
	string phrase;
	getline(cin,phrase);

	// On parcout la chaine pour remplacer tous les espaces par le symbole #

	for(int i(0); i<phrase.size(); ++i)
	{

		if(isspace(phrase[i]))
		{

			phrase[i] = '#';
		}		
	}

	cout << "Votre espaces ont été remplacés par des # soyez content " << phrase << endl;

    return 0;

}