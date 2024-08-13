#include <iostream>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int numero1, numero2, suma;

    // Solicitar al usuario que ingrese los números
    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    // Sumar los números
    suma = numero1 + numero2;

    // Imprimir la suma
    cout << "La suma de los números es: " << suma << endl;

    return 0;
}
