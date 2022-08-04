#include <iostream>

using namespace std;

int main()
{
    int AD[10][5];
    int maior = 200;
    int menor = 170;
    int maioraltura = 0, maioraltura1 = 0, maioraltura2 = 0, maioraltura3 = 0, maioraltura4 = 0;
    

        for( int i = 0; i < 10; i++)
        {   cout << endl;
            for( int j = 0; j < 5; j++)
            {
                AD[i][j] = rand() % (maior - menor + 1) + menor;
                cout << AD[i][j] << " ";
            }
        }
        
        //DELEGAÇÃO 1
        cout << endl;
        for( int i = 0; i < 10; i++)
        {   
            for( int j = 0; j < 5; j++)
            {
                if(AD[i][0] > maioraltura)
                {
                    maioraltura = AD[i][j];
                }
               
            }
        }
        cout <<"\nA maior altura da primeira delegação e: " << maioraltura << endl;

         //DELEGAÇÃO 2
        cout << endl;
        for( int i = 0; i < 10; i++)
        {   
            for( int j = 0; j < 5; j++)
            {
                if(AD[i][1] > maioraltura1)
                {
                    maioraltura1 = AD[i][j];
                }
               
            }
        }
        cout <<"\nA maior altura da segunda delegação e: " << maioraltura1 << endl;

         //DELEGAÇÃO 3
        cout << endl;
        for( int i = 0; i < 10; i++)
        {   
            for( int j = 0; j < 5; j++)
            {
                if(AD[i][2] > maioraltura2)
                {
                    maioraltura2 = AD[i][j];
                }
               
            }
        }
        cout <<"\nA maior altura da terceira delegação e: " << maioraltura2 << endl;

         //DELEGAÇÃO 2
        cout << endl;
        for( int i = 0; i < 10; i++)
        {   
            for( int j = 0; j < 5; j++)
            {
                if(AD[i][3] > maioraltura3)
                {
                    maioraltura3 = AD[i][j];
                }
               
            }
        }
        cout <<"\nA maior altura da quarta delegação e: " << maioraltura3 << endl;

         //DELEGAÇÃO 5
        cout << endl;
        for( int i = 0; i < 10; i++)
        {   
            for( int j = 0; j < 5; j++)
            {
                if(AD[i][4] > maioraltura4)
                {
                    maioraltura4 = AD[i][j];
                }
               
            }
        }
        cout <<"\nA maior altura da quinta delegação e: " << maioraltura4 << endl;
}
