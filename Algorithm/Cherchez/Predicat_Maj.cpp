#include "Predicat_Maj.hpp"

bool Majuscule::operator()(const char& c) const{

	return isupper(c);

}