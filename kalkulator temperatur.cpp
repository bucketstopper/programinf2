#include <iostream>
using namespace std;
 
int main() {
    double celsius;  
    char unit;     
 
  
    cout << "Podaj temperature w stopniach Celsjusza: ";
    cin >> celsius;
 
   
    cout << "Wybierz jednostke docelowa (K - Kelvin, F - Fahrenheit): ";
    cin >> unit;
 
   
    switch (unit) {
        case 'K': 
        case 'k':
            cout << "Temperatura w Kelwinach: " << celsius + 273.15 << endl;
            break;
 
        case 'F': 
        case 'f': 
            cout << "Temperatura w Fahrenheitach: " << (celsius * 9 / 5) + 32 << endl;
            break;
 
        default: 
            cout << "Nieprawidlowy wybor jednostki. Wybierz 'K' lub 'F'." << endl;
            break;
    }
 
    return 0;
}