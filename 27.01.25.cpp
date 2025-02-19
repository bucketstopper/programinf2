#include <iostream>
#include <limits.h> // Dla INT_MAX

using namespace std;

int main() {
    int tablica[10]; 
    int najmniejsza = INT_MAX;
    
   
    cout << "Podaj 10 liczb calkowitych:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> tablica[i];
        
       
        if (tablica[i] < najmniejsza) {
            najmniejsza = tablica[i];
        }
    }

   
    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
    
    return 0;
}
