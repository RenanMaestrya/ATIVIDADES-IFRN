/*Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro
colunas. Construir uma matriz B de mesma dimensão, em que cada elemento seja o fatorial
de cada elemento correspondente armazenado na matriz A. Apresentar ao final as matrizes
A e B.*/
#include <iostream>

using namespace std;

int main()
{
    int A[5][4];   
    int B[5][4];
    int i, j;
        ////////// PREENCHER MATRIZ A //////////
        for ( i = 0; i < 5; i++){
            for ( j = 0; j < 4; j++){
                cout << "Matriz A[" << i << "][" << j << "]: ";
                cin >> A[i][j];
            }    
        }
        for ( i = 0; i < 5; i++)
        {
            for ( j = 0; j < 4; j++)
            {
                B[i][j] = 1;
                for ( int k = A[i][j]; k >= 1; k--)
                {
                    B[i][j] *=k;
                }
            }
            
        }cout << "\n MATRIZ B" << endl;
        
        for ( i = 0; i < 5; i++)
        {   cout << endl;
            for ( j = 0; j < 4; j++)
            {
                cout << B[i][j] << "|";
            }
            
        }
        cout << endl;
    return 0;
}