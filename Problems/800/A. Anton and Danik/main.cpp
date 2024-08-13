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
    string a, line;
    int contA = 0, contD = 0;
    cin >> a >> line;
    for (char c : line)
    {
        if (c == 'A')
        {
            contA++;
        }
        else
        {
            contD++;
        }
    }
    if (contA > contD)
    {
        cout << "Anton";
    }
    else if (contD > contA)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
    return 0;
}