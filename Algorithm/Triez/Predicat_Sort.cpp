#include "Predicat_Sort.hpp"

bool Sort::operator()(const int& a, const int& b) const{

	return a > b;

}