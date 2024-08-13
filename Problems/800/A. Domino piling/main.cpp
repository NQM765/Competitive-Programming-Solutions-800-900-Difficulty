#include <iostream>
#include <cmath>
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
    int x, y, z;
    cin >> x >> y;
    z = x * y;
    z=z/2;
    cout<<z;
    return 0;
}