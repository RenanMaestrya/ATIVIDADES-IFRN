//04. Faça um Programa que peça a idade e a altura de 5 pessoas.
//armazene cada informação no seu respectivo vetor. Imprima a idade e a altura na ordem INVERSA a ordem lida.
#include <iostream>

using namespace std;

int main()
{
    int ida[5];
    float alt[5];
    int idade;
    float altura;

        for(int i =0; i < 5; i++){
            cout <<"\n Informe sua idade: ";
            cin >> idade;
            ida[i] = idade;
               
            cout << "\n Informe sua Altura: ";
            cin >> altura; 
            alt[i] = altura;
            }
          
          for (int k = 4; k >= 0; k--)
          {
             cout << "\nIdade: " << ida[k] << " , " << "altura: " << alt[k] << "\n\n";
          }
     return 0;     
}