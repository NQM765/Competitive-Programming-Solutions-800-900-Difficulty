#include <iostream>

using namespace std;

#define optimize()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void leerEntrada()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin); // Leer desde archivo
#endif
    optimize();
}

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int a, b, cont=0;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        cont++;
    }
    cout << cont;
    return 0;
}