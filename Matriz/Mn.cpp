/*Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e sete
colunas. Ao final, apresentar o total de elementos pares existentes na matriz.*/
#include <iostream>

using namespace std;

int main()
{
    int A[7][7];
    int pares = 0;
        for ( int i = 0; i < 7; i++)
        {   cout << endl;
            for (int j = 0; j < 7; j++)
            {
                A[i][j] = rand() % 10;
                cout << A[i][j] << "|";
            }
            
        }
        for ( int i = 0; i < 7; i++)
        {   
            for (int j = 0; j < 7; j++)
            {
                if (A[i][j] % 2 == 0)
                {
                    pares++;
                }
                
            }
            
        }
        cout << "\n Exitem " << pares << " na Matriz" << endl;
    return 0;
}