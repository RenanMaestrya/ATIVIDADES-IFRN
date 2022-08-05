/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete
elementos inteiros. Construir uma matriz C de duas dimensões, cuja primeira coluna deve
ser formada pelos elementos da matriz A e a segunda coluna pelos elementos da matriz B.
Apresentar a matriz C.*/
#include <iostream>

using namespace std;

int main()
{
    int A[7];
    int B[7];
    int C[2][7];
    int i, j, l;
        for ( i = 0; i < 7; i++)
        {
            A[i] = i;
            B[i] = i;
        }
        
       for (i = 0; i < 2; i++)
        {
           for ( j = 0; j < 7; j++)
           {
                if (i == 0)
                {
                    C[i][j] = A[j];
                }
                if (i == 1)
                {
                    C[i][j] = B[j];
                }
            }
           
        }
       for (l = 0; l < 2; l++)
        {   cout << endl;
           for ( j = 0; j < 7; j++)
           {
                cout << C[i][j] << " ";
                
           }
        }
      
    return 0;     
}  