#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int A[10];
    int C[10][3];
    int i, j;
        for ( i = 0; i < 10; i++)
        {   
            cout << "\n Numero: ";
            cin >> A[i];
        }
        cout << endl;

        for ( i = 0; i < 10; i++)
        {
            for ( j = 0; j < 3; j++)
            {   
                if (j == 0)
                {
                    C[i][j] = A[i] + 5; 
                }
                if (j == 1)
                {
                    C[i][j] = 1;
                        for (int l = A[i]; l >=1; l--){
                            C[i][j] *=l;
                        }
                }
                if (j == 2)
                {
                    C[i][j]  = pow(A[i], 2);
                }
                
            }
            
        }
        for ( i = 0; i < 10; i++)
        { cout << endl;
            for ( j = 0; j < 3; j++)
            {
                cout << C[i][j] << "|";
            }
            
        }
        
    return 0;   
}