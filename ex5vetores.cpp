/* Deseja-se publicar o número de acertos um aluno em uma prova. A prova consta de 10 questões,
cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
o cartão gabarito;
o cartão de respostas do aluno, contendo suas respostas para cada questão.
Informe quantas questões o aluno acertou, de acordo com o gabarito.
*/

#include <iostream>
using namespace std;

#include <string>




void respostas(string notas[],int tam) {
	string nome;
	cout << "nome do aluno: ";
	cin >> nome;
	for (int i = 0; i < tam; i++){
		cout << "informe a letra que voce marcou na questao " << (i + 1) << " (INFORME EM MAIUSCULO): ";
		cin >> notas[i];
	}
}


int comparar(string g[], string n[], int tam) {
	int cont = 0;
	for (int i = 0; i < tam; i++){
		if (g[i] == n[i])
			cont += 1;

	}

	return cont;
}




int main() {
	string gabarito[10] { "A","B","C","C","A","E","B","B","E","A"};
	string notas[10];
	int tam = 10;

	respostas(notas, tam);
	int acertos = comparar(gabarito, notas, tam);
	cout << "O aluno acertou " << acertos << " questões." << endl;

	

}