	#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int n, aleat;

    cout << "\nDigite o tamanho do vetor a ser preenchido: ";
    cin >> n;

    int vet[n];
    int vetOrd[n];
    int contPar, contImpar, aux;
    contPar = 0;
    contImpar = 0;

    srand((unsigned)time(0));

    for (int i = 0; i < n; i ++){
        aleat = rand();
        vet[i] = aleat;
    }

    for (int i = 0; i < n; i ++){
        cout << "\n " << vet[i] << " ";
    }

    for (int i = 0; i < n; i ++){
        if (vet[i]%2==0){
            contPar++;
        }
        else{
            contImpar++;
        }
    }
    
    int vetPar[contPar];
    int vetImpar[contImpar];

    cout << "\nNumeros pares: " << contPar; // qtd de números pares
    cout << "\nNumeros impares: " << contImpar; // qtd de números ímpares

    int somaPar = 0;
    int somaImpar = 0;

    for (int i = 0; i < n; i ++){
       if (vet[i]%2==0){
            vetPar[somaPar] = vet[i];
            somaPar++;
       }
       else {
            vetImpar[somaImpar] = vet[i];
            somaImpar++;
       }
    }

    for (int i = 0; i < somaPar; i ++){ //vetor de pares
        cout << "\n" << vetPar[i] << " ";
    }

    cout << "\n\n";

    for (int i = 0; i < somaImpar; i ++){ // vetor de ímpares
        cout << "\n" << vetImpar[i] << " ";
    }

    for (int i = 0; i < contPar; i++){ //FORs de ordenação crescente Pares
            
        for (int j = 0; j < contPar; j++){
                
            if (vetPar[i] < vetPar[j]){
                    
                aux = vetPar[i]; 
                vetPar[i] = vetPar[j];
                vetPar[j] = aux;
                        
            }
        }
    }
    
    for (int i = 0; i < contImpar; i++){ //FORs de ordenação decrescente Ímpares
        
        for (int j = 0; j < contImpar; j++){
                
            if (vetImpar[i] > vetImpar[j]){
    
                aux = vetImpar[i]; 
                vetImpar[i] = vetImpar[j];
                vetImpar[j] = aux;
                    
            }
        }
    }

    cout << "\n\n";
    
    for (int i = 0; i < contPar; i ++){ //vetor de pares ordenados
        cout << "\n" << vetPar[i] << " ";
    }
    
    cout << "\n\n";
    
    for (int i = 0; i < contImpar; i ++){ //vetor de ímpares ordenados
        cout << "\n" << vetImpar[i] << " ";
    }
    
    
    cout << "\n\n";
    
    int j = 0;
    
    for (int i = 0; i < n; i++){ //junção dos dois vetores - par e ímpar
        
        if (i < contPar){
        
            vet[i] = vetPar[i];
        }
        else{
            
            vet[i] = vetImpar[j];
            j++;
        }
        
    }
    
    cout << "\n\n";
    
    for (int i = 0; i < n; i ++){
     
        cout << vet[i] << "\n";
        
    }

return 0;

}

/*Utilizando vetores, crie um programa que organize uma quantidade qualquer de números
inteiros fornecidos de forma aleatória da seguinte forma: primeiro os números pares em
ordem crescente e depois os números ímpares em ordem decrescente.*/