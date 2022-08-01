/*Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e sete
colunas. Ao final, apresentar o total de elementos pares e ímpares existentes na matriz.
Apresentar também o percentual de elementos pares e ímpares em relação ao total de
elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares,
haveria 28,6% de elementos pares e 71,4% de elementos ímpares.*/
#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	int A[10][7];
	int pares = 0, impares = 0;
	float porcent = 0;
	int x = 0, y = 0;

		for (int i = 0; i < 10; i++)
		{	cout << endl;
			for (int j = 0; j < 7; j++)
			{
				A[i][j] = rand() % 10;
				cout << A[i][j] << " ";
			}
		}
		cout << endl;
		for (int i = 0; i < 10; i++)
		{	
			for (int j = 0; j < 7; j++)
			{
				if (A[i][j] % 2 == 0)
				{
					pares++;
				}
				else
				{
					impares++;
				}
				
			}
		}
		cout << endl;
		cout <<"\n Existem " << pares << " numeros pares na Matriz";
		cout <<"\n Existem " << impares << " numeros impares na Matriz";

		
		porcent = pares + impares;
		x = (pares / porcent) * 100;
		y = (impares / porcent) * 100;
		cout << endl;
		cout << x << "%" << "pares" << endl;
		cout << y << "%" << "impares" << endl;
	
	return 0;
} 