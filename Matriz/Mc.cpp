/*Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que
essa matriz tenha o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a
matriz.*/
#include <iostream>

using namespace std;

int main (){
	
	int matriz [4][5];
	int i, j;
        cout <<"\n Informe os valores  para preencher a Matriz: ";
    ///////////ARMAZENAR EM M////////////
	for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			cin >> matriz [i][j];
		}
	}
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 5; j++){
			cout << matriz [i][j] << " ";	
		}
		cout << "\n";
	}

	return 0;
}

