// Números iguais ou não.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;

int main()
{
	int n1;
	int n2;
	int n3;
	
	cout << "Introduza o primeiro numero:";
	cin >> n1;
	cout << "Introduza o segundo numero:";
	cin >> n2;
	cout << "Introduza o terceiro numero:";
	cin >> n3;

	    
	if (n1 == n2 && n2 == n3) {
		cout << " os numeros sao todos iguais";
	}
	else if (n1 == n2 && n2 < n3) {
		cout << "n1" << " e " << "n2" << " sao iguais";
	}
	else if (n1 == n2 && n2 > n3) {
		cout << "n1" << " e " << "n2" << " sao iguais";
	}
	else if (n2 == n3 && n2 < n1) {
		cout << "n2" << " e " << "n3" << " sao iguais";
	}
	else if (n2 == n3 && n2 > n1) {
		cout << "n2" << " e " << "n3" << " sao iguais";
	}
	else if (n1 == n3 && n1 < n2) {
		cout << "n1" << " e " << "n3" << " sao iguais";
	}
	else if (n1 == n3 && n1 > n2) {
		cout << "n1" << " e " << "n3" << " sao iguais";
	}
	else
		cout << " sao todos diferentes";


   
}


