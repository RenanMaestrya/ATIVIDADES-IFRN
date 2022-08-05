/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco
linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento
seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores
situados na diagonal principal (posições B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]), os quais
devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a
matriz B.*/
#include <iostream>

using namespace std;

int main()
{
    int A[5][5];
    int B[5][5];    

        cout << "\n MATRIZ A" << endl;
        for (int i = 0; i < 5; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {
                A[i][j] = i;
                cout << A[i][j] << " ";
            }
            
        }
        cout << "\n MATRIZ B" << endl;
          for (int i = 0; i < 5; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {
                B[i][j] = i * 2;
                cout << B[i][j] << " ";
            }
            
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {  
            for (int j = 0; j < 5; j++)
            {
                if (i == j)
                {
                    B[i][j] = i * 3;
                    cout << B[i][j] << " ";
                }
                
            }
            
        }
        
    return 0;
}   