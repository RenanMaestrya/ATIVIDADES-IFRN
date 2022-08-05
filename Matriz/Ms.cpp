/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a
matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes A
e B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/
#include <iostream>

using namespace std;

int main()
{
    int par[5][6];
    int impar[5][6];
    int C[5][6];
    int npar, nimpar, pares = 0, impares = 0;

    int i = 0;
    int j = 0;
        while (pares < 30)
        {
            npar = rand() % 50;
        
            if (npar % 2 == 0)
        {
            pares++;
            par[i][j] = npar;
            j++;
        }
            if (j == 6)
            {
                i++;
                j=0;
            }
        }    
    i = 0;
    j = 0;
        while (impares < 30)
        {
            nimpar = rand() % 50;
        
            if (nimpar % 2 != 0)
            {
                impares++;
                impar[i][j] = nimpar;
                j++;
            }
            if (j == 6)
            {
                i++;
                j = 0;
            }
        }
        cout << endl;   
        for ( i = 0; i < 5; i++)
        {   cout << endl;
            for ( j = 0; j < 6; j++)
            {
                cout << par[i][j] << "|";
            }
            
        }
        cout << endl;   
        for ( i = 0; i < 5; i++)
        {   cout << endl;
            for ( j = 0; j < 6; j++)
            {
                cout << impar[i][j] << "|";
            }
            
        }
        cout << endl;
        cout << "\n SOMA DAS MATRIZES" << endl;
        for ( i = 0; i < 5; i++)
        {   cout << endl;
            for ( j = 0; j < 6; j++)
            {   
                C[i][j] = par[i][j] + impar[i][j];
                cout << C[i][j] << " ";
            }
            
        }
    return 0;   
}   