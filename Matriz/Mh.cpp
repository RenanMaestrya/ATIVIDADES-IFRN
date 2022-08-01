#include <iostream>

using namespace std;

int main()
{
    int A[5][5];
    int B[5][5];    

        cout << "\n MATRIZ A" << endl;
        for (int i = 0; i < 5; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {
                A[i][j] = i;
                cout << A[i][j] << " ";
            }
            
        }
        cout << "\n MATRIZ B" << endl;
          for (int i = 0; i < 5; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {
                B[i][j] = i * 2;
                cout << B[i][j] << " ";
            }
            
        }
        cout << endl;
        for (int i = 0; i < 5; i++)
        {  
            for (int j = 0; j < 5; j++)
            {
                if (i == j)
                {
                    B[i][j] = i * 3;
                    cout << B[i][j] << " ";
                }
                
            }
            
        }
        
    return 0;
}   