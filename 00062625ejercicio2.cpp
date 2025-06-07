#include <iostream>

using namespace std;

int main() {
const int Total= 8;
float notas[Total];
float suma = 0, promedio;

for (int i = 0; i < Total; i++) {
cout << "Ingrese la nota " << i + 1 << ": ";
cin >> notas[i];
suma += notas[i]; 
}

promedio = suma / Total;

cout << "El promedio de las notas es: " << promedio << endl;

return 0;
}