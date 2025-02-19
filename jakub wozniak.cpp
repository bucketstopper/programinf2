#include <iostream>
using namespace std;
 
int main() {int wiek;
	cout << "podaj wiek:" ;
	cin >> wiek;
	if ((wiek >=0) && (wiek <=12)) {
		cout << "dziecko" << endl;
	}else if ( wiek <+13) {
	
		cout << "nastolatek" << endl;
	}else if (wiek <+18) {
		cout << "dorosly" << endl;       
	}else if (wiek <+65) {
		cout << "senior" << endl;
	}                               return 0;
}