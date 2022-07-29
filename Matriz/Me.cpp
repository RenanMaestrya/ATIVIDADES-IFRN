#include <iostream>

using namespace std;

int main()
{
    int A[12];
    int B[12];
    int C[2][12];
    int i, j;
        for ( i = 0; i < 12; i++)
        {
            A[i] = i;
            cout << A[i] << " ";
        }
            cout << endl;
        for ( i = 0; i < 12; i++)
        {
            B[i] = i;
            cout << B[i] << " ";
        }
        for ( i = 0; i < 2; i++)
        {
            for ( j = 0; j < 12; j++)
            {
               if (i == 0)
               {
                    C[i][j] = A[j] * 2;
               }
               if (i == 1)
               {
                    C[i][j] = B[j] - 5;
               }
               
            }
            
        }   cout << endl;
        for ( i = 0; i < 2; i++)
        {   cout << endl;
            for ( j = 0; j < 12; j++)
            {
               cout << C[i][j] << "|";
            }
            
        }
    
    return 0;          
}