
#include "Foncteur_T.hpp"
#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> tab(100,0);
	Remplir f(0);
	vector<int>::iterator it = tab.begin();

	for(it;it!=tab.end();++it)
	{

		*it = f();
		cout << *it << endl;
	}

	return 0;
}