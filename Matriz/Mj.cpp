#include <iostream>

using namespace std;

int main()
{
    int A[6][5];
    int B[6][5];
        cout <<"\n MATRIZ A" << endl;
        for (int i = 0; i < 6; i++)
        {   cout << endl;
           for (int j = 0; j < 5; j++)
           {
                A[i][j] = rand() % 10;
                cout << A[i][j] << "|";
           }
           
        }
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {   
                B[i][j] = A[i][j];
                if (A[i][j] % 2 == 0) // Verifica se o valor dos indices é par
                {
                    B[i][j] = A[i][j] + 5; // Se for par vai somar o valor do indice +5. EXP MATRIZ[0][0] = 2, fara 2 + 5
                }
                else if (A[i][j] % 2 != 0) // Verifica se o valor dos indices é impar
                {
                    B[i][j]  = A[i][j] - 4; // Se for impar vai subtrair o valor do indice -4. EXP MATRIZ[0][0] = 3, fara 3 - 4
                }
                
            }
        
        }cout <<"\n MATRIZ A E B VERIFICADA" << endl;
        for ( int i = 0; i < 7; i++)
        {   cout << endl;
             for ( int j = 0; j < 7; j++)
            {
                cout << B[i][j] << " ";
            }
        }
    return 0;
}