/* 07. Escreva um programa para preencher um vetor A de 10 elementos inteiros e um valor X. Em
seguida escrever na tela "ACHEI" se o valor X existir em A e "NÃO ACHEI" caso contrário.*/

#include <iostream>
using namespace std;

int main()
{
    int vetA[10]; 
    int n;
    bool esta;

        cout << "\n informe um numero: ";
        cin >> n;
       
       for (int i = 0; i < 10; i++){
           vetA[i]  = i;
       }
        for (int l = 0; l < 10; l++){
            
            if ( n == vetA[l])
            {
               esta = true;
            };
           
        }if(esta == true){
            cout << "\nACHEI!!!" << "\n";
        }else{
            cout << "\nNAO ACHEI :(" "\n";
        }
        
        
    return 0;
}
