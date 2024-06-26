/*
Módulo 2 - Ponteiros, Vetores e Matrizes
14 - Desafios Propostos Nível 2

Disponível em https://www.youtube.com/watch?v=36BLud7MMtU e https://drive.google.com/file/d/1AYLCtXhCDiM68eLopUINnU2BC7wkAhcP/view

Desafio 10

Crie um Algoritmo em C++, que tenha uma função recebe dois ponteiros e troca o valor de referência entre os dois.
*/

/*
Minha primeira resolucao:

#include <iostream>

using namespace std;

int main (){

    int var1=10,var2=20;
    int*pont1;
    int*pont2;

    pont1=&var1;
    pont2=&var2;

    cout << "Valor da variavel 1 atraves do ponteiro 1 = " << *pont1 << endl;
    cout << "Valor da variavel 2 atravez do ponteiro 2 = " << *pont2 << endl;

    return 0;
}
*/

// Minha segunda resolucao:

#include <iostream>

using namespace std;

void inverte(int *&pont1, int *&pont2)
//Void e uma funcao que nao tem retorno. Nesse caso a funcao void recebe valores (argumentos) que sao trabalhados dentro da propria funcao.
// O & (e comercial) e utilizado para apontar para uma variavel ou ponteiro que ja tem nome. Nesse caso, tudo que for feito na funcao void, sera realizado na funcao main.
{
    int transicao; //Essa variavel sera utilizada para armazenar o valor de *pont1 temporariamente.

    transicao = *pont1;
    *pont1 = *pont2;
    *pont2 = transicao;
}

int main(){

    int *pont1 = new int;
    int *pont2 = new int;

    *pont1 = 10; //Foi atribuido um valor ao ponteiro *pont1;
    *pont2 = 20;

    cout << "Antes de realizar a troca:" << endl;
    cout << "*Pont1: (Endereco: " << pont1 << /* "pont1" esta apontando para o endereco. */ " - Valor de referencia: " << *pont1 /* "*pont1" esta apontando para o valor de referencia. */ << ")" << endl;
    cout << "*Pont2: (Endereco: " << pont2 << " - Valor de referencia: " << *pont2 << ")" << endl;

    inverte(pont1, pont2); //A funcao "inverte foi chamada".

    cout << "Apos realizar a troca:" << endl;
    cout << "*Pont1: (Endereco: " << pont1 << " - Valor de referencia: " << *pont1 << ")" << endl;
    cout << "*Pont2: (Endereco: " << pont2 << " - Valor de referencia: " << *pont2 << ")" << endl;

    return 0;
}