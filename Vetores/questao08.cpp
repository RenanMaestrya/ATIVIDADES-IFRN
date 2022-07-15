/*08. Faça um algoritmo para ler 15 números e armazenar em um vetor VET, verificar e escrever se
existem números repetidos no vetor VET e em que posições se encontram*/

#include <iostream>
using namespace std;

int main()
{
  int vet[15], i, j, qtd=0;
	
	    for(i=0;i<15;i++)
	  {
		  cout<<"Digite o "<< i <<"o numero: ";
		  cin>>vet[i];
	  }
	    for(i=0;i<15;i++)
	  {
		for(j=i+1;j<15;j++)
		{
		  if(vet[i]==vet[j])
			{
				cout<<"O numero "<< vet[i] <<" foi repetido na posiçao "<< i <<" e " << j << endl;
				qtd=qtd+1;
			}
		}
	  }
	  if(qtd==0)
	  {
		    cout<<"Nao existem numeros repetidos no vetor";
	  }


}
