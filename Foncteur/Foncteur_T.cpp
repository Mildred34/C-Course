#include "Foncteur_T.hpp"

Remplir::Remplir(int i):_valeur(i){}

int Remplir::operator()()
	{
		++_valeur;
		return _valeur;
	}