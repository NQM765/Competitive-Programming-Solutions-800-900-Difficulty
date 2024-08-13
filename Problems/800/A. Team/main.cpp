#include <iostream>
#include <string>

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

int procesarLinea(int contador)
{
    int i=0;
    string linea;
    getline(cin,linea);
    for (char c : linea)
    {
        if (c == '1')
        {
            i++;
        }
    }
    if (i >= 2)
    {
        contador++;
    }
    return contador;
}

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int n, contador = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        contador=procesarLinea(contador);
    }
    cout << contador;
    return 0;
}