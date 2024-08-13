#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void leerEntrada()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin); // Leer desde archivo
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int n, k, numero, contador = 0, score = 0;
    vector<int> numeros;

    cin >> n >> k;
    cin.ignore();
    string linea;
    getline(cin, linea);
    stringstream ss(linea);
    while (ss >> numero)
    {
        numeros.push_back(numero);
    }
    score = numeros[k - 1];
    for (int num : numeros)
    {
        if ((num >= score) && (num > 0))
        {
            contador++;
        }
    }
    cout << contador;
    return 0;
}