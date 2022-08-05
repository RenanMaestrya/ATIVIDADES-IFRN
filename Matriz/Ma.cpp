/* Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e três colunas para valores inteiros. Construir uma matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/
#include <iostream>

using namespace std;

int main()
{
    int A[5][3];
    int B[5][3];
    int C[5][3];
    int i, j, valor;
        ////////// PREENCHER MATRIZ A //////////
        for ( i = 0; i < 5; i++){
            for ( j = 0; j < 3; j++){
                cout << "\n Digite um valor para Martriz A: ";
                cin >> valor;
                A[i][j] = valor;
            }
            
        }
         ////////// PREENCHER MATRIZ B //////////
        for ( i = 0; i < 5; i++){
            for ( j = 0; j < 3; j++){
                cout << "\n Digite um valor para Martriz B: ";
                cin >> valor;
                B[i][j] = valor;
            }
            
        }
        
        for ( i = 0; i < 5; i++){
            for( j = 0; j < 3; j++){
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        for ( i = 0; i < 5; i++)
        {   cout << endl;
            for( j = 0; j < 3; j++){
                cout << C[i][j] << " ";
            }
        }
        cout << endl;
}
