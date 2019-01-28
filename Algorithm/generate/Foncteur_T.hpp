#pragma once

class Remplir{
public:
	Remplir(int i);

	int operator()();
private:
	int _valeur;
};