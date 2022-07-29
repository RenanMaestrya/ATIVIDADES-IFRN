#include <iostream>

using namespace std;

int main()
{
    int A[5][3];
    int B[5][3];
    int C[5][3];
    int i, j, valor;
        ////////// PREENCHER MATRIZ A //////////
        for ( i = 0; i < 5; i++){
            for ( j = 0; j < 3; j++){
                cout << "\n Digite um valor para Martriz A: ";
                cin >> valor;
                A[i][j] = valor;
            }
            
        }
         ////////// PREENCHER MATRIZ B //////////
        for ( i = 0; i < 5; i++){
            for ( j = 0; j < 3; j++){
                cout << "\n Digite um valor para Martriz B: ";
                cin >> valor;
                B[i][j] = valor;
            }
            
        }
        
        for ( i = 0; i < 5; i++){
            for( j = 0; j < 3; j++){
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        for ( i = 0; i < 5; i++)
        {
            for( j = 0; j < 3; j++){
                cout << C[i][j] << " ";
            }
        }
        cout << endl;
}
