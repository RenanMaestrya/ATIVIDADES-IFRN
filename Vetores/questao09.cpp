/* 09. Faça um algoritmo para ler um vetor de 20 números. Após isto, ler mais um número qualquer,
calcular e escrever quantas vezes esse número aparece no vetor.*/

#include <iostream>
using namespace std;

int main()
{
    int V[5];
    int n, num;
    int cont = 0;
        
        for (int i = 0; i < 5; i++)
        {
            cout << "\n Digite 20 numeros inteiros: ";
            cin >> n;
            V[i] = n;
          
        }
            cout << "\n Digite qualquer numero: ";
            cin >> num;

        for (int j = 0; j < 5; j++)
        {
                if (V[j] == num)
                cont++; 
        }if (cont == 1)
        {
            cout<< "O numero "<< num <<" aparece "<< cont <<" vez" << endl;
        }else if (cont>1)
        {
            cout<<"\n O numero "<< num << " aparece "<< cont <<" vezes" << endl;
        }else if (cont == 0)
        {
            cout<<"\n O numero "<< num << " nao aparece" << endl;
        }

    return 0;
}