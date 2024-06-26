/*
Módulo 2 - Ponteiros, Vetores e Matrizes
14 - Desafios Propostos Nível 2

Disponível em https://www.youtube.com/watch?v=36BLud7MMtU e https://drive.google.com/file/d/1AYLCtXhCDiM68eLopUINnU2BC7wkAhcP/view

Desafio 8

Crie um Algoritmo em C++, que o usuário informa o tamanho de um vetor, e seus elementos. O Algoritmo deve imprimir este vetor e logo após, perguntar ao usuário se ele quer imprimir outro vetor. Utilize o delete após a impressão do vetor.
*/

/*Minha primeira resolucao:

#include <iostream>

using namespace std;

int main () {

    int tamanho;
    cout << "Informe o tamanho do vetor:" << endl;
    cin >> tamanho;

    int* vetor = new int [tamanho];

    for (int i=0 ; i<=tamanho ; i++){
        cout << "Digite o " << i+1 << "o elemente do vetor:" << endl;
        cin >> vetor[i];
    }

    cout << "[ ";
    for (int i=0 ; i<=tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;

    delete [] vetor;

    return 0;
}

*/

// Minha segunda resolucao:

#include <iostream>

using namespace std;

int main()
{
    int tamanho,continua;

    do {
        cout << "Informe o tamanho do vetor:" << endl;
        cin >> tamanho;

        float *vetor = new float[tamanho];

        for (int i = 0; i < tamanho; i++) {
            cout << "Insira o " << i + 1 << "o elemento do vetor:" << endl;
            cin >> vetor[i];
        }

        cout << "Os elementos do vetor sao:\n [ ";

        for (int i = 0; i < tamanho; i++) {
            cout << vetor[i] << " ";
        }

        cout << "]" << endl;

        cout << "Digite 1 para informar outro vetor ou 0 para encerrar:" << endl;
        cin >> continua;
        
        delete [] vetor;        
    } while (continua != 0);

    return 0;
}