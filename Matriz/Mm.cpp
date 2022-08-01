/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco
linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha
e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz.*/
#include <iostream>

using namespace std;

int main ()
{
	
	int A[5][5];
    float cont = 0;
	
	for (int i = 0; i < 5; i++)
    {
		for (int j = 0; j < 5; j++)
        {
			cout << "[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}
	
	for (int i =0; i < 5; i++)
    {
		for (int j=0; j < 5; j++)
        {
			if (i == j)
            {
				if (A[i][j] % 2 != 0)
                {
					cont = cont + A[i][j];
			    }
			
			}
		}
    }
	cout <<"\n A soma dos valores impares da diagonal principal e:" << cont << endl;	
    return 0;
}
