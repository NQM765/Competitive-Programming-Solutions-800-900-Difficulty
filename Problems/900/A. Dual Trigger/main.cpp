#include <iostream>
#include <string>

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
    string lineT;
    int length, numberOne = 0, flag = 0;
    cin >> length;
    cin >> lineT;
    for (int i = 0; i < lineT.length(); i++)
    {
        if (lineT[i] == '1' && lineT[i + 1] == '1')
        {
            flag = 1;
        }

        if (lineT[i] == '1')
        {
            numberOne++;
        }
    }
    if ((numberOne == 0 || numberOne % 2 == 0) && !(flag == 1 && numberOne == 2))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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