// Qual o maior dos 3.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
	int n1;
	int n2;
	int n3;

	cout << "Digite o primeiro numero: ";
	cin >> n1;
    cout << "Digite o segundo numero:";
	cin >> n2;
	cout << "Digite o terceiro numero:";
	cin >> n3;



	if (n1 > n2 && n1 > n3)
	{
		cout << "o maior numero e " << n1;
	}
	else if (n2 > n1 && n2 > n3)
	{
		cout << "o maior numero e " << n2;
	}
	else
	{
		cout << "o maior numero e " << n3;
	}
}

