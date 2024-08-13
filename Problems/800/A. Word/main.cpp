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
    int min = 0, mayus = 0;
    string s;
    cin >> s;
    for (char c:s)
    {
        if (c >= 'a' && c <= 'z')
        {
            min++;
        }
        else
        {
            mayus++;
        }
    }
    if (mayus < min || mayus == min)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
    }else{
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] -= 32;
            }
        }
    }

    cout << s;
    return 0;
}
