//02. Faça um Programa que preencha um vetor de 10 números reais e mostre-os na ordem inversa.

#include <iostream>
#include <ctime>

using namespace std;

int main()
{   
    srand((unsigned)time(0));
    int V[10];

        for(int i = 0; i < 10; i++){
           V[i] = rand();
           cout << V[i] <<"\n";
        }

        cout << "\n Inverso: \n ";

    //Laço para imprimir os mesmos valores so que na ordem inversa
            for(int i = 9; i >= 0; i--){
                cout <<"\n" << V[i];
            }
     
     return 0;       
}       