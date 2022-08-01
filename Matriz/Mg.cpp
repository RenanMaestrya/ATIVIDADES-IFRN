#include <iostream>

using namespace std;

int main()
{
    int i, j;
    float A[4][5];
    float B[4][5];
    
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 5; j++)
            {
                cout << "\n Celsius [" << i << "][" << j << "]:";
                cin >> A[i][j];

            }
            
        }
        for ( i = 0; i < 4; i++)
        {
            for ( j = 0; j < 5; j++)
            {
                B[i][j] =  (A[i][j] * 9/5) + 32;
            }
            
        }
        for ( i = 0; i < 4; i++)
        {   cout << endl;
            for ( j = 0; j < 5; j++)
            {
                cout << B[i][j] << " ";
            }
            
        }
        
    return 0;
}