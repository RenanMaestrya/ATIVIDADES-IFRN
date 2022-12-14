/*Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com quatro
elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha
formada pelo dobro dos valores dos elementos da matriz A, a segunda linha formada pelo
triplo dos valores dos elementos da matriz B, a terceira linha formada pelo quádruplo dos
valores dos elementos da matriz C e a quarta linha formada pelo fatorial dos valores dos
elementos da matriz D. Apresentar a matriz E.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[4];
    int B[4];
    int C[4];
    int D[4];
    int E[4][4];
    int num, fat;
        for (int i = 0; i < 4; i++)
        {   cout << endl;

            A[i] = rand()% 10;
            B[i] = rand()% 10;
            C[i] = rand()% 10;
            D[i] = rand()% 10;

            cout << A[i] << "|";
            cout << B[i] << "|";
            cout << C[i] << "|";
            cout << D[i] << "|";

        }
        
        for (int i = 0; i < 4; i++)
        {   
            for (int j = 0; j < 4; j++)
            { 
                if (i == 0)
                {
                    E[i][j] = A[j] * 2;
                }
                if (i == 1)
                {
                    E[i][j] = B[j] * 3;
                }
                if (i == 2)
                {
                    E[i][j] = C[j] * 4;
                }
                if (i == 3)
                {
                    num = D[j];
                    fat = 1;
                    for (int k = num; k >= 1; k--)
                    {
                        fat = fat * k;
                    }
                    E[i][j] = fat;
                    
                }
                
            }
            
        }
        cout << endl;
        cout << "\nMatriz E" << endl;
            for (int i = 0; i < 4; i++)
            {   cout << endl;
                for (int j = 0; j < 4; j++)
                {
                    cout << E[i][j] << "|";
                }
                
            }
    return 0;
}