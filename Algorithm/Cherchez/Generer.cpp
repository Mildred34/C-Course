#include "Generer.hpp"


int Generer::operator()()
{

	return (rand() % ('z' - 'a' + 1)) + 'a';
}