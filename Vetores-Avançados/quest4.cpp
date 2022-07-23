#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int maior, menor;
    int vetA[20];
    int vetB[20];
    int vetDif[20];
    int vetSom[20];
    int vetMult[20];

    srand((unsigned)time(0));

    cout << "\nDigite o limite inferior: \n";
    cin >> menor;
    cout << "\nDigite o limite superior: \n";
    cin >> maior;

    for (int i = 0; i <20; i++){
        vetA[i] = rand()%(maior-menor+1)+menor;
    }

    for (int i = 0; i <20; i++){
        vetB[i] = rand()%(maior-menor+1)+menor;
    }

    for (int i = 0; i <20; i++){
        vetSom[i] = vetA[i] + vetB[i];
        vetDif[i] = vetA[i] - vetB[i];
        vetMult[i] = vetA[i] * vetB[i];
    }

    for (int i = 0; i < 20; i++){
        cout << vetSom[i] << " ";
        
    }
    cout << "\n";
    for (int i = 0; i < 20; i++){
        cout << vetDif[i] << " ";
        
    }
    cout << "\n";
    for (int i = 0; i < 20; i++){
        cout << vetMult[i] << " ";
        
    }
    cout << "\n";

return 0;

}