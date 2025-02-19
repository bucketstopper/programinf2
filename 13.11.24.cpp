#include <iostream>
using namespace std;
int main(){int liczba;
cout << "Podaj liczbe: ";
cin >> liczba;

// Operator AND (&&): Sprawdzanie, czy liczba jest w zakresie 10-20
if ((liczba >= 0) && (liczba <= 49)) {
    cout << "ocena niedostateczny" << endl;
} else if  (liczba <= 50) {
	cout << "ocena dostateczna" << endl;
}else if (liczba <=70) {
	cout << "ocena dobra" << endl;
}else if (liczba <=85) {
	cout << "ocena Bardzo Dobra" << endl;
}else if (liczba <== 100) {
	cout << "ocena celujaca" << endl;
}else if (liczba)


 

    

    return 0;
}