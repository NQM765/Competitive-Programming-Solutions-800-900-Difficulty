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

string minusculas(string cadena)
{
    for (char &c : cadena)
    {
        c = tolower(c);
    }
    return cadena;
}
int main()
{
    leerEntrada();
    // Inserta tu código aquí
    int ans;
    string cadena1, cadena2;
    cin >> cadena1;
    cin >> cadena2;
    cadena1 = minusculas(cadena1);
    cadena2 = minusculas(cadena2);

    if (cadena1 < cadena2)
    {
        ans = -1;
    }
    else if (cadena1 > cadena2)
    {
        ans = 1;
    }
    else
    {
        ans = 0;
    }
    cout << ans;
    return 0;
}