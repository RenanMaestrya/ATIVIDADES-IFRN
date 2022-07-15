#include <iostream>
using namespace std;

int main()
{
    int A[10], B[10], C[20];
    int i=0;
    int k=0;

        for (int i = 0; i < 10; i++){
            A[i]=i+1;
        }
         for (int k = 0; k < 10; k++){
             B[k]=10-k;   
        }
         
         for (int l = 0; l < 20; l++){
            if (l%2==1)
            {
                C[l]=A[i];
                i++;
            }
            else{
                C[l] = B[k];
                k++;
            }
            cout << C[k] << endl;
        }
        
    return 0;   
}