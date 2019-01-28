#include "Foncteur_T.hpp"
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> tab(100,0);
	Remplir f(0);
	vector<int>::iterator it = tab.begin();

	generate(it,tab.end(),f);
	

	return 0;
}