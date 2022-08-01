/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas
e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada
linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B.*/
#include <iostream>

using namespace std;

int main()
{
    int A[8][6];
    int B[8];
        
        cout << "\n MAtriz A:";
        for (int i = 0; i < 8; i++)
        {   cout << endl;
            for (int j = 0; j < 6; j++)
            {   
                A[i][j] = i;
                cout << A[i][j] << " ";
            }
        }
        for (int i = 0; i < 8; i++)
        {
            {
                B[i] = A[i];
            }
        }
       
        
        
}