/*Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15
colunas. Apresentar o somatório dos elementos pares situados na diagonal principal da
referida matriz.*/
#include <iostream>

using namespace std;

int main()
{
    int matriz[15][15];
    int cont = 0;
        
        for (int i = 0; i < 15; i++)
        {   cout << endl;
            for (int j = 0; j < 15; j++)
            {
                matriz[i][j] = rand() % 10;
                cout << matriz[i][j] << " ";
            }
            
        }
        cout << endl;
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 15; j++)
            {
                if (i == j)
                {
                    if (matriz[i][j] % 2 == 0)
                    {
                        cont = cont + matriz[i][j];
                    }
                    
                }
                
            }
        }
        cout << "\nA soma dos valores pares da diagonal principal" << cont << endl;
    return 0;   
}