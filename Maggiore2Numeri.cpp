#include <iostream>
using namespace std;

int main() {
int numero1, numero2;

cout << "Inserisci il primo numero: ";
cin >> numero1;

cout << "Inserisci il secondo numero: ";
cin >> numero2;

if (numero1 > numero2) {
cout << "Il maggiore e' = " << numero1;
} else if (numero2 > numero1) {
cout << "Il maggiore e' = " << numero2;
} 
return 0;
}
