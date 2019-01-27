#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string, double> poids; //Une table qui associe le nom d'un animal à son poids
    
    //On ajoute les poids de quelques animaux
    poids["souris"] = 0.05;
    poids["tigre"] = 200;
    poids["chat"] = 3;
    poids["elephant"] = 10000;

    //Et on parcourt la table en affichant le nom et le poids
    for(map<string, double>::iterator it=poids.begin(); it!=poids.end(); ++it)
    {
        cout << it->first << " pese " << it->second << " kg." << endl;
    }

    map<string, double>::iterator trouve = poids.find("chien");


    if(trouve == poids.end())

    {

        cout << "Le poids du chien n'est pas dans la table" << endl;

    }

    else

    {

        cout << "Le chien pese " << trouve->second << " kg." << endl;

    }

    return 0;
}