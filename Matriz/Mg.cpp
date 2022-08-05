/*Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco
colunas, armazenando nessa matriz os valores das temperaturas em graus Celsius.
Construir a matriz B de mesma dimensão, em que cada elemento seja o valor da
temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. Apresentar
ao final as matrizes A e B.*/
#include <iostream>

using namespace std;

int main()
{
    int i, j;
    float A[4][5];
    float B[4][5];
    
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 5; j++)
            {
                cout << "\n Celsius [" << i << "][" << j << "]:";
                cin >> A[i][j];

            }
            
        }
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 5; j++)
            {
                B[i][j] =  (A[i][j] * 9/5) + 32;
            }
            
        }
        for ( i = 0; i < 4; i++)
        {   cout << endl;
            for ( j = 0; j < 5; j++)
            {
                cout << B[i][j] << " ";
            }
            
        }
        
    return 0;
}