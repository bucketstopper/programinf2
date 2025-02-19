#include <iostream>
using namespace std;
 
int main() {
    int godziny;
    char pojazd;
    int oplata = 0;
 
 
    cout << "Podaj liczbe godzin parkowania: ";
    cin >> godziny;
 
    cout << "Podaj rodzaj pojazdu (S - samochod, M - motocykl, A - autobus): ";
    cin >> pojazd;
 
  
    switch (pojazd) {
        case 'S': 
        case 's':
            oplata = godziny * 5;
            break;
        case 'M': 
        case 'm':
            oplata = godziny * 3;
            break;
        case 'A':
        case 'a':
            oplata = godziny * 10;
            break;
        default:
            cout << "Nieznany typ pojazdu!" << endl;
            return 1; 
    }
 
    
    cout << "Oplata za parkowanie: " << oplata << " zl" << endl;
 
    return 0;
}


