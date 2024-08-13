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

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    string s;
    cin >> s;
    if (s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    cout << s;
    return 0;
}