#include <iostream>
using namespace std;

void Soma()
{
}

void Subtracao()
{
}

void Multiplicacao()
{
}

void Divisao()
{
}

void Porcentagem()
{
}

int main()
{
    int operation;

    cout << "Calculadora Simples \n\n";
    cout << "1) Soma\n2) Subtração \n3) Multiplicação \n4) Divisão \n5) Porcentagem\n\n";
    cout << "Escolha sua operação: ";
    cin >> operation;

    if (operation == 1)
    {
        Soma();
    }
    else if (operation == 2)
    {
        Subtracao();
    }
    else if (operation == 3)
    {
        Multiplicacao();
    }
    else if (operation == 4)
    {
        Divisao();
    }
    else if (operation == 5)
    {
        Porcentagem();
    }
    return 0;
}