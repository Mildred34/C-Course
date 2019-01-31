#pragma once
#include <iostream>
using namespace std;

class Sum{
private:
	int _result;

public:
	Sum();
	void operator()(int& a);
	int result() const;

};