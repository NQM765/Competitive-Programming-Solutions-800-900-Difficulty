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
    int cont1 = 0, i;
    string username;
    cin >> username;
    for (i = 0; i < username.length(); i++)
    {
        cont1++;
        for (int j = i+1; j < username.length(); j++)
        {
            if (username[i] == username[j])
            {
                cont1--;
                break;
            }
        }
    }
    if (cont1 % 2 != 0)
    {
        cout << "IGNORE HIM!";
    }
    else
    {
        cout << "CHAT WITH HER!";
    }
    return 0;
}