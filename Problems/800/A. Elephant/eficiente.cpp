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
    int x;
    cin >> x;
    if ((x % 5) == 0){
        cout << x/5<< endl;
    }
    else{
        x = x/5 +1; 
        cout << x << endl;
    }
    return 0;
}