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

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int n, cont = 0;
    string stones;

    cin >> n;
    cin >> stones;
    for (int i = 0; i < stones.length(); i++)
    {
        if (stones[i] == stones[i + 1])
        {

            cont++;
        }
    }
    cout << cont;
    return 0;
}