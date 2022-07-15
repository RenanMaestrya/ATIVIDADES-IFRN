// 05. Faça um Programa que peça as quatro notas de 10 alunos.
// calcule e armazene num vetor amédia de cada aluno.
// imprima o número de alunos com média maior ou igual a 7.0.
#include <iostream>
using namespace std;

int main()
{
    float N1[20], N2[10], N3[10], N4[10], soma[20], media[10];
    float notas;
    float cont = 0;

        for(int i = 0; i < 10; i++){
            cout << "\n Informe as nota do aluno " << i << " do primeiro bimestre: ";
            cin >> notas;
            N1[i] = notas;
            
            cout << "\n Informe a nota do aluno " << i << " do segundo bimeste:" ;
            cin >> notas;
            N2[i] = notas;
            
            cout << "\n Informe as nota do aluno " << i << " do terceiro bimestre: ";
            cin >> notas;
            N3[i] = notas;
            
            cout << "\n Informe as nota do aluno " << i << " do quarto bimestre: ";
            cin >> notas;
            N4[i] = notas;
        }
            for (int k = 1; k <= 10; k++)
            {
               soma[k] = N1[k] + N2[k] + N3[k] + N4[k];
            }
            for ( int x = 1; x <= 10; x++)
            {
                media[x] = soma[x] / 4;
            }
            for (int l = 1; l <= 10; l++){

                cout << "\nA media do aluno " << l << " foi de: " << media[l];

                 if (media[l] >= 7){
                 cont++;
                }
            }
                cout << "\n\n A quantidade de alunos acima da media foi de: " << cont << "\n\n";
    
    return 0;
}