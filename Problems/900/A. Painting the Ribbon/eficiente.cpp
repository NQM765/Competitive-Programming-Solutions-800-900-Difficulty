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
    int n, m, k, max;
    cin >> n >> m >> k;
    max = n - k;
    if (n % m == 0)
    {
        if ((n / m) >= max)
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
        if ((n / m) + 1 >= max)
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