#include <iostream>
using namespace std;

void Soma()
{
    double parcelaA, parcelaB;

    cout << "Digite o valor da primeira parcela: ";
    cin >> parcelaA;
    cout << "Digite o valor da segunda parcela: ";
    cin >> parcelaB;
    cout << parcelaA << " + " << parcelaB << " = " << parcelaA + parcelaB;
}

void Subtracao()
{
    double aditivo, subtrativo;

    cout << "Digite o valor do aditivo: ";
    cin >> aditivo;
    cout << "Digite o valor do subtrativo: ";
    cin >> subtrativo;
    cout << aditivo << " - " << subtrativo << " = " << aditivo - subtrativo;
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