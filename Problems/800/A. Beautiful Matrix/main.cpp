#include <iostream>

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
    int r, c, cont = 0;
    leerEntrada();
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            int valor;
            cin >> valor;
            if (valor == 1)
            {
                r = j + 1;
                c = i + 1;
            }
        }
    }
    while (r != 3 || c != 3)
    {
        if (r < 3 && r != 3)
        {
            r++;
            cont++;
        }
        else if (r > 3 && r != 3)
        {
            r--;
            cont++;
        }
        if (c < 3 && c != 3)
        {
            c++;
            cont++;
        }
        else if (c > 3 && c != 3)
        {
            c--;
            cont++;
        }
    }
    cout << cont;
    return 0;
}