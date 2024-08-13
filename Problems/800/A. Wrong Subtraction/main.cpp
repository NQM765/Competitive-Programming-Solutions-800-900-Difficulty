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
    int num, sub;
    cin >> num >> sub;
    for (int i = 0; i < sub; i++)
    {
        if (num % 10 != 0)
        {
            num--;
        }
        else
        {
            num /= 10;
        }
    }
    cout << num;
    return 0;
}