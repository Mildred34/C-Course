#include <iostream>
#include <iterator>
#include <string>
using namespace std;

int main(){
    
    ostream_iterator<string> it(cout,"\n");

    *it = "Hello bitch..we";
    *it = "World";
    return 0;
}

