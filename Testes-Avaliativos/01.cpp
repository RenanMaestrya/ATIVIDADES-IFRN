#include <iostream>

using namespace std;

int main()

{
    int matriz[10][10];
    int linha;
    int coluna;
    int lin, col;
    int somal = 0, somac = 0;
        
        for(int i = 0; i < 10; i++)
        {   cout << endl;
            for(int j = 0; j < 10; j++)
            {
                matriz[i][j] = rand() % 20;
                cout << matriz[i][j] << " ";
            }
        }
        cout << endl;
        cout << "\n Informe qual LINHA vocẽ deseja que apareça os elementos: ";
        cin >> linha;

        for(int i = 0; i < 10; i++)
        {
            for(int j = 0; j < 10; j++)
            {

                if(linha == i)
                {   
                    cout << matriz[i][j] << "|";
                }
 
            }
        }
        cout << endl;
        cout << "\n Informe qual COLUNA vocẽ deseja que apareça os elementos: ";
        cin >> coluna;

        for(int j = 0; j < 10; j++)
        {
             for(int i = 0; i < 10; i++)
            {

                if(coluna == j)
                {   
                    cout << endl;
                    cout << matriz[i][j];
                }
 
            }
        }
        cout << endl;
        cout << "\n Informe qual LINHA voce deseja somar: ";
        cin >> lin;
        cout << "\n Informe qual COLUNA voce deseja somar: ";
        cin >> col;
            for(int i = 0; i < 10; i++)
            {   
                for(int j = 0; j < 10; j++)
                {   
                    if(lin == i) 
                    {
                        somal = somal + matriz[i][j];
                    }
                    if(col == j)
                    {
                        somac = somac + matriz[i][j];
                    }
                }
            }
            cout << endl;
            cout << "\nA soma da linha e: " << somal << endl;
            cout << "\nA soma da coluna e: " << somac << endl;
    
    return 0;
}       