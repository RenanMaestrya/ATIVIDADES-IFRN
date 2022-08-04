/*Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A de duas
dimensões com quatro linhas e cinco colunas. Construir a matriz B de uma dimensão para
quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada

linha da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que
seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao
final, o programa deve apresentar o somatório dos elementos da matriz B com o somatório
dos elementos da matriz C.*/
#include <iostream>

using namespace std;

int main()
{
    int A[4][5];
    int B[4];
    int C[5];
    int soma, B = 0;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                A[i][j] = rand();
                soma = soma + A[i][j];
            }
            
            B[i] = soma;
            soma = 0;
        }
        for (int j = 0; j < 5; j++)
        {
             for (int i = 0; i < 4; i++)
             {
                soma = A[i][j] + soma;
             }
             C[j] = soma;
             soma = 0;
        }
        
}