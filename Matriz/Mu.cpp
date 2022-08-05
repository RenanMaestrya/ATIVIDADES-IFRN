/*Elaborar um programa que leia duas matrizes A e B de duas dimensões com quatro linhas e
cinco colunas. A matriz A deve ser formada por valores divisíveis por 3 ou 4, enquanto a
matriz B deve ser formada por valores divisíveis por 5 e 6. As entradas dos valores nas
matrizes devem ser validadas pelo programa, e não pelo usuário. Construir e apresentar a
matriz C de mesma dimensão e número de elementos que contenha o valor da multiplicação
dos elementos da matriz A com os elementos correspondentes da matriz B.*/
#include <iostream>
using namespace std;
int main()
{
    int A[4][5], B[4][5], C[4][5];
    int i=0, j=0, contA=0, contB=0, auxA, auxB;

    while(contA<20)
    {
        auxA=rand()%100;

        if((auxA%3==0) || (auxA%4==0))
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

    while (contB<20)
    {
        auxB=rand()%200;

        if((auxB%5==0)&&(auxB%6==0))
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

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<A[i][j]<<" | ";
        }
        cout<<endl;
    }

    cout<<"\n Matriz B:"<<endl;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            cout<<B[i][j]<<" | ";
        }
        cout<<endl;
    }
    cout<<"\n Matriz C:"<<endl;

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            C[i][j]=A[i][j]*B[i][j];
            cout<<C[i][j]<<" | ";
        }
        cout<<endl;
    }

 return 0;
}