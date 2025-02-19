#include <iostream>
 
int main() {
    double liczba1, liczba2, wynik;
    char oper;
 
    
    std::cout << "Podaj pierwsza liczbe: ";
    std::cin >> liczba1;
 
    std::cout << "Podaj druga liczbe: ";
    std::cin >> liczba2;
    
    std::cout << "podaj operator (+,-,*,/): ";
    std::cin >> oper;
    
    switch (oper) {
    	case '+':
    		wynik = liczba1 + liczba2;
    		break;
    		case '-':
    			wynik = liczba1 - liczba2;
    			break;
    			case '*':
    				wynik = liczba1 * liczba2;
    				break;
    				case '/':
    					if (liczba2 !=0) {
    						wynik =liczba1 / liczba2;
						} else {
							std::cout << "blad! dzielenie przez zero. " << std::endl;
							return 1;
						}
						break;
						default:
							std::cout << "nieprawidłowy operator. " << std::endl;
							return 1;
	}
     	std::cout << "wynik: " << wynik << std::endl;
	
	return 0;
}