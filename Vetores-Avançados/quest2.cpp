// Dados dois vetores de tamanho N, faça um algoritmo que diga se eles possuem conteúdo 
// igual. Se existir, imprima o valor e os índices.

#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int n, A, B, cont, aux,auxind;
    int vetA[5];
    int vetB[5];
    int vetIndA[5];
    int vetIndB[5];
    int vetIgual[5];

    cout << "\nDigite o tamanho dos vetores:";
    cin >> n;

    for (int i = 0; i < n; i++){

        cout << "\nDigite o " << i << " valor do primeiro vetor";
        cin >> A;
        vetA[i] = A;
    }

    for (int i = 0; i < n; i++){

        cout << "\nDigite o " << i << " valor do segundo vetor";
        cin >> B;
        vetB[i] = B;
    }

    aux = 0;
    cont = 0;
    int igual = 0;
    auxind = 0;

    for (int i = 0; i < n; i++){
        cont = 0;
        for (int j = 0; j < n; j++){

            if (vetA[i]==vetB[j]){
                cont++;
                vetIndA[auxind] = i;
                vetIndB[auxind] = j;
                auxind++;
            }
        }
        if(cont >= 1){
            vetIgual[igual] = vetA[i];
            igual++;
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++){
        cout << vetA[i] << " ";
        
    }
    cout << "\n";
    for (int i = 0; i < n; i++){
        cout << vetB[i] << " ";
        
    }
    cout << "\n";
    for (int i = 0; i < igual; i++){
        cout << "\nO valor " << vetIgual[i] << " está se repetindo na posição " << vetIndA[i] << " do primeiro vetor e na posição " << vetIndB[i] << " do segundo vetor. \n";

    }
    cout << "\n";
    return 0;

}