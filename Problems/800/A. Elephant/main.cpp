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
    int x, cont = 0;
    cin >> x;
    while (x != 0)
    {
        if (x >= 5)
        {
            cont++;
            x -= 5;
        }
        else
        {
            cont++;
            x-=x;
        }
    }
    cout << cont;
    return 0;
}