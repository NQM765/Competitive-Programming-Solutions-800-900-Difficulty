#include <iostream>
#include <string>

using namespace std;

void leerEntrada()
{
#ifndef ONLINE_JUDGE
    freopen("i.txt", "r", stdin); // Read
#endif

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

void procesarPalabra(string palabraI)
{
    string palabraF;
    int i;
    palabraF += palabraI[0];
    palabraF += to_string(palabraI.length()-2);
    palabraF += palabraI[palabraI.length() - 1];
    cout << palabraF << endl;
}

int main()
{
    leerEntrada();
    // Inserte codigo
    string palabraI;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> palabraI;
        if (palabraI.length() > 10)
        {
            procesarPalabra(palabraI);
        }
        else
        {
            cout << palabraI << endl;
        }
    }
    return 0;
}