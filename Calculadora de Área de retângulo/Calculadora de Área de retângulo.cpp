// Calculadora de Área de retângulo.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
using namespace std;


int main(){
	int largura;
	int altura;
	int area;

		cout << "Qual a largura do seu retangulo em centimetros: ";
		cin >> largura;
		cout << "Qual a altura do seu retangulo em centimetros: ";
		cin >> altura;

		area = largura * altura;
		cout << "A area do seu retangulo e de " << area << " centimetros quadrados" "\n";



}


