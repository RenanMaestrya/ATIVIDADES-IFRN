// Escrever  um  aplicativo  que  possa  armazenar  o  nome,  as  duas  notas  e  a  média  dos  alunos 
// de uma turma. O aplicativo deverá apresentar o seguinte menu MENU 1 - Cadastrar aluno 
// 2 - Consultar dados de aluno 3 - Alterar dados de aluno 4 - Consultar média da turma 5 - 
// Sair Opção: 

#include <iostream>
using namespace std;

int main() {

    int opcao, n, auxAluno, nota1, nota2, auxConsulta;
    float media;
    float mediaAluno[auxAluno];
    float mediaTurma, somaTurma;
    string vetAluno[auxAluno];
    char op;
    string aluno;
    auxAluno = 0;

    cout << "|~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|        MENU        |\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|1 - Cadastrar Aluno |\n";
    cout << "|2 - Consultar Dados |\n";
    cout << "|3 - Editar Aluno    |\n";
    cout << "|4 - Média da Turma  |\n";
    cout << "|5 - Sair            |\n";
    cout << "|~~~~~~~~~~~~~~~~~~~~|\n";


    cout << "\nDigite uma opção: ";
    cin >> opcao;

    while(opcao != 5)
    {

        switch(opcao){
        case 1:
            cout << "Cadastro de Aluno" << "\n";
            cout << "\nDigite o nome do(a) aluno(a): \n";
            cin >> aluno;
            vetAluno[auxAluno] = aluno;
            cout << "\nDigite a primeira nota do(a) aluno(a): \n";
            cin >> nota1;
            cout << "\nDigite a segunda nota do(a) aluno(a): \n";
            cin >> nota2;
            media = (nota1+nota2)/2;
            mediaAluno[auxAluno] = media;
            auxAluno++;
            break;
        case 2:
            cout << "Consultar dados de qual aluno?" << "\n";
            cin >> aluno;
            cout << "\n";
            for (int i = 0; i < auxAluno; i++){
                if(vetAluno[i]==aluno){
                    auxConsulta = i;
                }
            }
            if (auxConsulta>=0){
                cout << "Nome: " << vetAluno[auxConsulta] << "\n";
                cout << "Média: " << mediaAluno[auxConsulta] << "\n";
            }
            else{
                    cout << "\nAluno não encontrado! \n";
                }
            break;
        case 3:
            cout << "Editar qual aluno?" << "\n";
            cin >> aluno;
            cout << "\n";
            for (int i = 0; i < auxAluno; i++){
                if(vetAluno[i]==aluno){
                    auxConsulta = i;
                }
            }
            if (auxConsulta>=0){
                cout << "Editar nome? " << "\n";
                cout << "S/N";
                cin >> op;
                if ((op == 'S') || (op == 's')){
                    cout << "\nDigite o novo nome:";
                    cin >> aluno;
                    vetAluno[auxConsulta] = aluno;
                }
                cout << "Editar notas? " << "\n";
                cout << "S/N";
                cin >> op;
                if ((op == 'S') || (op == 's')){
                    cout << "\nDigite a primeira nota do(a) aluno(a): \n";
                    cin >> nota1;
                    cout << "\nDigite a segunda nota do(a) aluno(a): \n";
                    cin >> nota2;
                    media = (nota1+nota2)/2;
                    mediaAluno[auxConsulta] = media;
                }
            }
            else{
                    cout << "\nAluno não encontrado! \n";
                }

            break;
        case 4:
            cout << "Média da Turma" << "\n";

            for (int i = 0; i < auxAluno; i++){

                somaTurma = somaTurma + mediaAluno[i];                
            }

            mediaTurma = somaTurma / auxAluno;

            cout << "\nA média da turma nas duas avaliações foi de " << mediaTurma << "\n";
            break;
        case 5:
            cout << "Sair " << "\n";
            break;
        default:
            cout << "O valor digitado nao corresponde a uma opção válida!" << "\n";
    }
        cout << "|~~~~~~~~~~~~~~~~~~~~|\n";
        cout << "|        MENU        |\n";
        cout << "|~~~~~~~~~~~~~~~~~~~~|\n";
        cout << "|1 - Cadastrar Aluno |\n";
        cout << "|2 - Consultar Dados |\n";
        cout << "|3 - Editar Aluno    |\n";
        cout << "|4 - Média da Turma  |\n";
        cout << "|5 - Sair            |\n";
        cout << "|~~~~~~~~~~~~~~~~~~~~|\n";

        cout << "\nDigite uma opção: ";
        cin >> opcao;

    }

    return 0;

}