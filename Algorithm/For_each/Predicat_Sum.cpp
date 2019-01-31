#include "Predicat_Sum.hpp"

void Sum::operator()(int& a){

	_result += a;

}

Sum::Sum():_result(0)
{}

int Sum::result() const
	{
		return _result;
	}