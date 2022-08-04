#include <iostream>

using namespace std;

int main()
{
    int A[4][5];   
    int B[4][5];
        for (int i = 0; i < 4; i++)
        {   cout << endl;
            for (int j = 0; j < 5; j++)
            {
                A[i][j] = rand() % 15;
                if (A[i][j] / 3 && A[i][j] / 4)
                {
                    cout << A[i][j] << " ";
                }
                
            }
            
        }
        
}   