#include <iostream>
using namespace std;


int GetNumberFromUser() {
    int n;
    cout << "Podaj liczbe: ";
    cin >> n;
    return n;
}
int CalculateSumRecursive(int n) {
    if (n <= 1) {
        return n;
    } else {
        return n + CalculateSumRecursive(n - 1);
    }
}
void DisplayResult(int n, int result) {
    cout << "Suma liczb od 1 do " << n << " wynosi: " << result << endl;
}
int main() {
    int number = GetNumberFromUser();
    int sum = CalculateSumRecursive(number);
    DisplayResult(number, sum);
    return 0;
}