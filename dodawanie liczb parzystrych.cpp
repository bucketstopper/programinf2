#include <iostream>
using namespace std;
 
int main() {
    int N, licznik_parzystych = 0, i = 1;
    
    
    cout << "Podaj liczbe calkowita dodatnia N: ";
    cin >> N;
 
   
    if (N <= 0) {
        cout << "Podaj liczbę całkowitą dodatnią!" << endl;
        return 1; 
    }
 
    
    do {
        if (i % 2 == 0) { 
            licznik_parzystych++;
        }
        i++; 
    } while (i <= N);  
 
    
    cout << "Liczba liczb parzystych od 1 do " << N << " wynosi: " << licznik_parzystych << endl;
 
    return 0;
}





