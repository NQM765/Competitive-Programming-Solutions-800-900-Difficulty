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
void procesarLinea()
{
    int n, m, k, rep;
    cin >> n >> m >> k;
    rep = (n / m);
    if (n % m == 0)
    {
        if (k >= n - rep)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        if (k >= (n - rep) - 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        procesarLinea();
    }

    return 0;
}