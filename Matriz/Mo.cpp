/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas
e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada
linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B.*/
#include <iostream>

using namespace std;

int main()
{
    int A[8][6], B[8], soma=0;
    for (int i=0; i<8; i++)
    {
        for (int j=0; j<6; j++)
        {
            A[i][j]=rand()%100;
            cout<<A[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;

    for (int i=0; i<8; i++)
    {
        soma=0;

        for (int j=0; j<6; j++)
        {
            soma=soma+A[i][j];
             B[i]=soma;
            
        }
       
    }


    for (int i=0; i<8; i++)
    {  
    cout<<"Soma da linha "<<i<<" = "<<B[i]<<endl;
    }
    return 0;
}