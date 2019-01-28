#include "Foncteur_T.hpp"

int Remplir::operator()()
	{
		return (rand() % ('z'-'a'+1)) + 'a';
	}