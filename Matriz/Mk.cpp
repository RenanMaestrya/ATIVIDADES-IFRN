#include <iostream>

using namespace std;

int main()
{
    float A[5][5];
    float cont = 0;
        for (int i = 0; i < 5; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {   A[i][j] = i;
                cout << A[i][j] << " ";
            }
        }cout << endl;
        for ( int i = 0; i < 5; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {   
                if (i == j)
                {
                    cont = cont + A[i][j]; //o contador vai receber o valor das posições
                }
                
                cout << cont << " ";
            }
        }
    return 0;      
}