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
    leerEntrada();
    // Inserta tu código aquí
    string entrada, entradaF = "";
    int cont1 = 0, cont2 = 0, cont3 = 0, plus;
    cin >> entrada;
    plus = entrada.length() / 2;
    for (int i = 0; i < entrada.length(); i++)
    {
        if (entrada[i] == '1')
        {
            cont1++;
        }
        else if (entrada[i] == '2')
        {
            cont2++;
        }
        else
        {
            cont3++;
        }
    }
    for (int i = 0; i < (entrada.length() / 2) + 1; i++)
    {
        if (cont1 != 0)
        {
            entradaF += "1+";
            cont1--;
        }
        else if (cont2 != 0)
        {
            entradaF += "2+";
            cont2--;
        }
        else
        {
            entradaF += "3+";
        }
    }
    entradaF = entradaF.substr(0, entradaF.size() - 1);
    cout << entradaF;
    return 0;
}