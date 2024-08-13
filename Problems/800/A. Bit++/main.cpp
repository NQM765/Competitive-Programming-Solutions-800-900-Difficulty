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

int procesarLinea(int x)
{
    string linea;
    getline(cin, linea);
    for (char c : linea)
    {
        if (c == '+')
        {
            x++;
            break;
        }
        else if (c == '-')
        {
            x--;
            break;
        }
    }
    return x;
}

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int n, x = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        x = procesarLinea(x);
    }
    cout << x;
    return 0;
}