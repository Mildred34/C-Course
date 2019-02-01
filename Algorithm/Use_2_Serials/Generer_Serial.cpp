#include "Generer_Serial.hpp"


double Generer::operator()()
{

	return (rand() % 10)*pow(10,-rand()%10);
}