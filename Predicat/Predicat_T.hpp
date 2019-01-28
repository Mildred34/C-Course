#include <string>
using namespace std;
#include <iostream>
#pragma once


class TestVoyelles
{
public:
    bool operator()(string const& chaine) const;
};