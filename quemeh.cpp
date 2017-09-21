#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
 
	int n;
	cin >> n;

	string jogador1, escolha1;
	int valor1;

	string jogador2, escolha2;
	int valor2;

	int soma;
	string resultado;

	for (int i = 0; i < n; i++)
	{
		cin >> jogador1 >> escolha1 >> jogador2 >> escolha2;
		cin >> valor1 >> valor2;

		soma = valor1 + valor2;
		if (soma % 2 == 0)
			resultado = "PAR";
		else
			resultado = "IMPAR";

		if (escolha1 == resultado)
			cout << jogador1 << endl;
		else
			cout << jogador2 << endl;
	}
 
    return 0;
}