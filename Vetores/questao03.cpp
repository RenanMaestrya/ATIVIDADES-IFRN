//03. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.

#include <iostream>

using namespace std;

int main()
{
    int V[4];
    float soma=0;

        cout << "\nDigite 4 notas de um Aluno: " << endl;
        for(int i = 0; i < 4; i++){
                
            cin >> V[i];
            soma = soma + V[i];
            }
                
            cout << "\nA media e: " << soma / 4 << endl;
    
    return 0;   
}