#include <iostream>
#include <map>
#include <string>
using namespace std;
#pragma once

class Comparelongueur{
public:
	bool operator()(const string& a,const string& b){

		return a.length() < b.length();
	}

};