/*
Módulo 2 - Ponteiros, Vetores e Matrizes
14 - Desafios Propostos Nível 2

Disponível em https://www.youtube.com/watch?v=36BLud7MMtU e https://drive.google.com/file/d/1AYLCtXhCDiM68eLopUINnU2BC7wkAhcP/view

Desafio 6

Crie um Algoritmo em C++, em que o usuário informa os gastos com alimentação de 5 famílias, calcula a média de gastos e diz de cada família, se seu gastou é abaixo da média, acima da média ou na média.
*/

/*
Minha primeira resolucao:

#include <iostream>

using namespace std;

int main () {

    float* gasto = new float [4];
    float gastotal , media = 0;

    for (int i=0 ; i<=4 ; i++){
        cout << "Informe o valor gasto com alimentacao pela " << i+1 << "a familia:" << endl;
        cin >> gasto[i];
        gastotal = gastotal + gasto[i];
    }

    media = gastotal / 5;
    cout << "As 5 familias gastaram no total R$" << gastotal << "." << endl;
    cout << "O gasto medio foi de R$" << media << "." << endl;

    if (gasto[0] > media) {
        cout << "O valor gasto pela 1a familia foi acima da media." << endl;
    } else if (gasto[0] == media) {
        cout << "A 1a familia gastou um valor identico ao valor medio." << endl;
    } else {
        cout << "O valor gasto pela 1a familia foi abaixo da media." << endl;
    }

    if (gasto[1] > media) {
        cout << "O valor gasto pela 2a familia foi acima da media." << endl;
    } else if (gasto[1] == media) {
        cout << "A 2a familia gastou um valor identico ao valor medio." << endl;
    } else {
        cout << "O valor gasto pela 2a familia foi abaixo da media." << endl;
    }

    if (gasto[2] > media) {
        cout << "O valor gasto pela 3a familia foi acima da media." << endl;
    } else if (gasto[2] == media) {
        cout << "A 3a familia gastou um valor identico ao valor medio." << endl;
    } else {
        cout << "O valor gasto pela 3a familia foi abaixo da media." << endl;
    }

     if (gasto[3] > media) {
        cout << "O valor gasto pela 4a familia foi acima da media." << endl;
    } else if (gasto[3] == media) {
        cout << "A 4a familia gastou um valor identico ao valor medio." << endl;
    } else {
        cout << "O valor gasto pela 4a familia foi abaixo da media." << endl;
    }

     if (gasto[4] > media) {
        cout << "O valor gasto pela 5a familia foi acima da media." << endl;
    } else if (gasto[4] == media) {
        cout << "A 5a familia gastou um valor identico ao valor medio." << endl;
    } else {
        cout << "O valor gasto pela 5a familia foi abaixo da media." << endl;
    }   

    return 0;
}
*/

//Minha segunda resolucao:

#include <iostream>

using namespace std;

int main () {
    float gastofamilia[5];
    float mediagasto;

    for (int i=0; i<5; i++){
        cout << "Qual o gasto da " << i+1 << "a familia?" << endl;
        cin >> gastofamilia[i];
        mediagasto+=gastofamilia[i];
    }
    
    mediagasto/=5;
    cout << "O gasto medio das 5 familias foi de R$" << mediagasto << "." << endl;

    for (int i=0; i<5; i++){
        if (gastofamilia[i] < mediagasto){
            cout << "O gasto da familia " << i+1 << " foi abaixo da media." << endl;
        } else if (gastofamilia[i] == mediagasto){
            cout << "O gasto da familia " << i+1 << " foi o mesmo da media." << endl;
        } else if (gastofamilia[i] > mediagasto){
            cout << "O gasto da familia " << i+1 << " foi acima da media." << endl;
        } else {
            cout << "Houve algum erro :(" << endl;
        }
    }

    return 0;
}