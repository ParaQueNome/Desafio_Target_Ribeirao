#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;



int main() {
	setlocale(LC_ALL,"Portuguese");
	// Declara��o das vari�veis:
	int termo, soma;
	int primeiro = 0;
	int segundo = 1;
	
	// Inserindo o valor que se deseja procurar na sequencia:
	cout << "Insira o valor a ser procurado na sequ�ncia de Fibonacci: ";
	cin >> termo;
	
	// Inicializando a verifica��o da sequ�ncia:
	while(termo > soma){
		soma = primeiro + segundo;
		primeiro = segundo;
		segundo = soma;
		// Realizando a compara��o dos termos;
		if(termo == 0 || termo == 1){
			cout << "O termo faz parte da sequ�ncia de Fibonacci" << endl;
			cout << "Termo inserido: " << termo << endl;
			cout << "Termo da sequ�ncia: " << soma << endl;
			cout << "-----------------------------------------" << endl; 
		}else if(termo == soma){
			cout << "O termo faz parte da sequ�ncia de Fibonacci" << endl;
			cout << "Termo inserido: " << termo << endl;
			cout << "Termo da sequ�ncia: " << soma << endl;
			cout << "-----------------------------------------" << endl; 
			
		}else{
			cout << "Pesquisando ..." << endl;
			cout << "---------------" << endl;
			
		}
	}
	if(termo != soma){
		cout << "O termo n�o faz parte da sequ�ncia de Fibonacci" << endl;
		
	}
}
