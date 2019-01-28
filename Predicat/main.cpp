using namespace std;
#include "Predicat_T.hpp"


int main(){
	string A;
	TestVoyelles Test;
	cin >> A;
	cout << A << " présente une voyelle: " << Test(A) << endl;


	return 0;
}