/*
Módulo 2 - Ponteiros, Vetores e Matrizes
14 - Desafios Propostos Nível 2

Disponível em https://www.youtube.com/watch?v=36BLud7MMtU e https://drive.google.com/file/d/1AYLCtXhCDiM68eLopUINnU2BC7wkAhcP/view

Desafio 9

Crie um Algoritmo em C++ utilizando apenas ponteiros, em que o usuário informa a idade de duas pessoas, e o Algoritmo informa a média destas duas idades.
*/

/*
Minha primeira resolucao:

#include <iostream>

using namespace std;

int main () {
    int idade1,idade2;
    int*pont1;
    int*pont2;
    float media;

    cout << "Informe a idade da 1a pessoa:" << endl;
    cin >> idade1;
    cout << "Informe a idade da 2a pessoa:" << endl;
    cin >> idade2;

    pont1=&idade1;
    pont2=&idade2;

    media = (idade1 + idade2)/2;

    cout << "A mdia entre as idades da 1a e 2a pessoa e " << media << "." << endl;

    return 0;
}
*/

//Minha segunda resolucao:

#include <iostream>

using namespace std;

int main () {
    float* idade1 = new float;
    float* idade2 = new float;
        //float* e utilizado para declarar ponteiros. Ponteiros sao identificado por um * entre o tipo (float) e o nome da variavel (idade1).
        //O new e utilizado para criar um espaco na memoria.
    
    cout << "Qual a idade da 1a pessoa?" << endl;
    cin >> *idade1;
    cout << "Qual a idade da 2a pessoa?" << endl;
    cin >> *idade2;
        //Como esse espaco criado na memoria nao tem um nome, so e possivel acessa-lo atraves do ponteiro. Nesse caso o valor informado pelo usuario sera atribuido a este espaco inteiro atraves do ponteiro *idade1.

    float* media = new float;

    *media = (*idade1 + *idade2)/2;

    cout << "A media entre as duas idades e " << *media << endl;

    return 0;
}