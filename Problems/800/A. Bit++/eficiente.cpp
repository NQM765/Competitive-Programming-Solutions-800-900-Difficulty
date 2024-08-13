#include <iostream>
#include <string>

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
	int t;
	cin >> t;
	int cnt = 0;

	while (t--)
	{
		string s;
		cin >> s;

		if (s[1] == '+')
			cnt++;
		else
			cnt--;
	}
	cout << cnt << "\n";
	return 0;
}