/*10. Faça um algoritmo para preencher um vetor de 20 números. Após isto, deverá ser lido mais um número
qualquer e verificar se esse número existe no vetor ou não. Se existir, o algoritmo deve pedir um
novo número.*/

#include <iostream>
using namespace std;

int main()
{
    int V[20];
    int num, x, cont;
    bool certo;

        for (int i = 0; i < 20; i++){
            cout << "\n Digite um numero para preencher o vetor: ";
            cin >> num;
            V[i] =  num;
        }
            while (certo)
            {
                cont = 0;

                cout << "\n Procure um numero no vetor: ";
                cin >> x;
            
            
        for (int j = 0; j < 20; j++)
        {
            if (V[j] == x)
            {
                cont++;
            }
        }
            if (cont == 0)
            {
                certo = false;
            break;
            }
        }
    return 0;
}