#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int A[7][7];
    int B[7][7];
        cout << "\n MATRIZ A";
        for (int i = 0; i < 7; i++)
        {   cout <<endl;
           for ( int j = 0; j < 7; j++)
           {
                A[i][j] = i;
                cout << A[i][j] << " ";
           }
           
        }
        for (int i = 0; i < 7; i++)
        {
            for (int j = 0; j < 7; j++)
            {
                if (i == j)
                {
                    B[i][j] = 1;
                    for (int k = A[i][j]; k >= 1; k--)
                    {
                        B[i][j] *=k;
                    }
                    
                }
                else if (i != j)
                {
                    B[i][j] = A[i][j]+1;
                }
                
                
            }
            
        } cout <<"\n MATRIZ B COM A DIAGONAL PRINCIAL EM FATORIAL" << endl;
        for ( int i = 0; i < 7; i++)
        {   cout << endl;
            for ( int j = 0; j < 7; j++)
            {
                cout << B[i][j] << " ";
            }
          
        }
        cout << endl;
    return 0;
}   