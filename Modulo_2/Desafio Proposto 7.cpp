/*
Módulo 2 - Ponteiros, Vetores e Matrizes
14 - Desafios Propostos Nível 2

Disponível em https://www.youtube.com/watch?v=36BLud7MMtU e https://drive.google.com/file/d/1AYLCtXhCDiM68eLopUINnU2BC7wkAhcP/view

Desafio 7

Crie um Algoritmo em C++, em que o usuário informa a dimensão de uma matriz, e os elementos
de duas matrizes (ambas com a mesma dimensão) e o Algoritmo mostra a soma entre estas duas
matrizes.
*/

#include <iostream>

using namespace std;

int main (){
    int l,c;

    cout << "Quantas linhas tera a matriz?" << endl;
    cin >> l;
    cout << "Quantas colunas tera a matriz?" << endl;
    cin >> c;

    float matriz1[l][c], matriz2[l][c];

    cout << "Informe os elementos da matriz 1:" << endl;

    for (int i=0; i<l; i++){
        for (int j=0; j<c; j++) {
            cout << "Digite o elemento da linha " << i+1 << " / coluna " << j+1 << endl;
            cin >> matriz1[i][j];
        }
    }

    cout << "Informe os elementos da matriz 2:" << endl;

    for (int i=0; i<l; i++){
        for (int j=0; j<c; j++){
            cout << "Digite o elemento da linha" << i+1 << " / coluna " << j+1 << endl;
            cin >> matriz2[i][j];
        }
    }

    float matrizsoma[l][c];

     cout << "A soma das matrizes 1 e 2 e:" << endl;
    
    for (int i=0; i<l; i++){
        for (int j=0; j<c; j++){
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
                cout << matrizsoma[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}