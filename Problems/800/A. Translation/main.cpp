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

#define MAX 1000
class Pila
{
private:
    int arreglo[MAX]; // Arreglo para almacenar los elementos de la pila
    int top;          // Índice del elemento superior de la pila

public:
    // Constructor
    Pila()
    {
        top = -1; // Inicializar el índice del elemento superior como -1 (pila vacía)
    }

    // Función para verificar si la pila está vacía
    bool vacia()
    {
        return (top == -1); // La pila está vacía si el índice del elemento superior es -1
    }

    // Función para insertar un elemento en la pila
    bool push(int elemento)
    {
        if (top >= (MAX - 1))
        { // Verificar si la pila está llena
            std::cout << "Desbordamiento de pila" << std::endl;
            return false; // No se puede insertar más elementos
        }
        else
        {
            arreglo[++top] = elemento; // Incrementar el índice del elemento superior y agregar el elemento
            return true;               // Elemento insertado correctamente
        }
    }

    // Función para eliminar un elemento de la pila
    int pop()
    {
        if (top < 0)
        { // Verificar si la pila está vacía
            std::cout << "Subdesbordamiento de pila" << std::endl;
            return 0; // No hay elementos para eliminar, se devuelve 0
        }
        else
        {
            return arreglo[top--]; // Devolver y decrementar el índice del elemento superior
        }
    }

    // Función para obtener el elemento superior de la pila sin eliminarlo
    int tope()
    {
        if (top < 0)
        { // Verificar si la pila está vacía
            std::cout << "Pila vacía" << std::endl;
            return 0; // No hay elementos, se devuelve 0
        }
        else
        {
            return arreglo[top]; // Devolver el elemento superior
        }
    }
};

int main()
{
    leerEntrada();
    // Inserta tu código aquí
    string line, line1 = "", lineF;
    cin >> line >> lineF;
    Pila pila;
    for (char c : line)
    {
        pila.push(c);
    }
    while (!pila.vacia())
    {
        line1 += pila.pop();
    }
    if (line1 == lineF)
    {
        cout<< "YES";
    }else{
        cout<< "NO";
    }
    return 0;
}