#include <iostream>
using namespace std;

int main() {
int numero;
int potencia = 1; 

cout << "Ingresa un numero entero: ";
cin >> numero;


for (int i = 0; i <= numero; i++) {
cout << "2^" << i << " = " << potencia << endl;
potencia *= 2; 
}

return 0;
}