#pragma once
#include <cctype>
using namespace std;

class Majuscule{
public:
	bool operator()(const char& c) const;
};