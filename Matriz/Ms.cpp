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