#pragma once
#include <string>
using namespace std;
#include <iostream>


class TestVoyelles
{
public:
    bool operator()(char const& c) const;
};