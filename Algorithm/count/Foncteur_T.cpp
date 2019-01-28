#include "Foncteur_T.hpp"

int Remplir::operator()()
	{
		return rand() % 10;
	}