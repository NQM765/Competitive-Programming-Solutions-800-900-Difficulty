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
    int cost, dollar, banana, borrow, total = 0;
    cin >> cost >> dollar >> banana;
    for (int i = 1; i <= banana; i++)
    {
        total += i * cost;
    }
    borrow = total - dollar;
    if (borrow < 0)
    {
        cout << 0;
    }
    else
    {
        cout << borrow;
    }
    return 0;
}
