/*Elaborar um programa que faça a leitura de duas matrizes A e B de duas dimensões com
cinco linhas e cinco colunas. A matriz A deve ser formada por valores que não sejam
divisíveis por 3, enquanto a matriz B deve ser formada por valores que não sejam divisíveis
por 6. As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo
usuário. Construir e apresentar uma matriz C de mesma dimensão e número de elementos
que contenha a soma dos elementos das matrizes A e B.*/
#include <iostream>
using namespace std;
int main()
{

   int A[5][5], B[5][5], C[5][5];
    int i=0, j=0, contA=0, contB=0, auxA, auxB;

    while(contA<25)
    {
        auxA=rand()%100;

        if (auxA%3!=0)
        {
            contA++;
            A[i][j]=auxA;
            j++;
            if(j==5)
            {
                i++;
                j=0;
            }
        }
    }

    i=0;
    j=0;

    while (contB<25)
    {
        auxB=rand()%100;

        if(auxB%6!=0)
        {
            contB++;
            B[i][j]=auxB;
            j++;

            if(j==5)
            {
                i++;
                j=0;
            }
        }
    }

    cout<<"\n Matriz A:"<<endl;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<A[i][j]<<" | ";
        }
        cout<<endl;
    }

    cout<<"\n Matriz B:"<<endl;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<B[i][j]<<" | ";
        }
        cout<<endl;
    }
    cout<<"\n Matriz C:"<<endl;

    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            cout<<C[i][j]<<" | ";
        }
        cout<<endl;
    }

 return 0;
}