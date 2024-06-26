/*
Módulo 2 - Ponteiros, Vetores e Matrizes
Aula 13 - Matrizes
Disponível em https://www.youtube.com/watch?v=rXiCpNlNlQI
*/

#include <iostream>

using namespace std;

int main () {
   int matriz[2][3]; //Primeiramente e informado a linha e posteriormente a coluna.

    matriz[0][0] = 11;
    matriz[0][1] = 12;
    matriz[0][2] = 13;

    matriz[1][0] = 21;
    matriz[1][1] = 22;
    matriz[1][2] = 23;

    for (int i=0 ; i<2 ; i++){
        for (int j=0 ; j<3 ; j++){ //Seguindo o mesmo raciocionio, primeiramente e informado o "for" da linha e posteriormente o "for" da coluna.
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}