/*
Módulo 2 - Ponteiros, Vetores e Matrizes
Aula 11 - Ponteiros
Disponível em https://www.youtube.com/watch?v=4mBymAMQxsc
*/

//Ponteiros sao variaveis que armazenam o endereco de outra variavel.
//O tipo do ponteiro se refere ao tipo da variavel que ele armazena o endereco.

#include <iostream>
#include <cstddef>

using namespace std;

int main (){
    int var1;
    int* pont1; //int* e utilizado para declarar ponteiros. Ponteiros sao identificado por um * entre o tipo e o nome da variavel.

    var1=5;
    pont1=&var1; //O & (e comercial) e utilizado para apontar para uma variavel que ja tem nome.

    cout << "Valor da var1 = " << var1 << endl;
    cout << pont1 << " e o endereco do primeiro byte da variavel var1 apontada por pont1." << endl; //Retorna o primeiro byte do endereco da variavel apontada por ele. Por isso e importante declarar o tipo da variavel ao declarar o ponteiro. Nesse caso, por ser uma variavel do tipo inteiro e ocupar 4 bytes, o ponteiro sabe que deverava acessar os 3 bytes subsequentes a este que consta no endereco.
    cout << "Valor da variavel atraves do ponteiro = " << *pont1 << endl;

    /*
    int var2=var1; //Atribui a var2 o valor de var1.
    int var2=*pont1; //Atribui a var2 o valor de var1 atraves do pont1.
    cout << "var2 = " << var2 << endl;
    */

    /*
    var1 = 30; //Atribui um novo valor a var1.
    *pont1 = 30; //Atribui um novo valor a variavel que e apontada por pont1;
    cout << "O novo valor de var1 e " << var1 << endl;
    */

    /*
    int var2 = 50;
    pont1=&var2;
    cout << "O valor da nova variavel apontada atraves do ponteiro pont1 e " << *pont1 << endl;
    */

    /*
    int* pont2;
    //Ao declarar uma variavel, ela e alocada em um espaco da memoria.
    pont2 = NULL; //Neste caso, o ponteiro, aponta para um espaco que ainda nao ha uma variavel alocada. Sendo assim, para evitar erros, aponta o pont2 para o vazio (NULL). Para utilizar o NULL, e necessario incluir a bibliotecaor cstddef.
    cout << "O pont2 esta apontando para o endereco " << pont2 << endl;
    cout << "O pont2 esta apontando para " << *pont2 << endl; //Nesse caso ele esta apontando para o vazio (NULL).
    */

    /*
    int* pont3 = new int; //O new e utilizado para criar um espaco (inteiro) na memoria.
    *pont3 = 35; //Como esse espaco da memoria (de um inteiro) nao tem um nome, so e possivel acessa-lo atraves do ponteiro. Nesse caso o valor 35 e atribuido a este espaco inteiro atraves do ponteiro *pont3.
    cout << "O ponteiro pont3 aponta para o valor " << *pont3 << endl;
    cout << "O ponteiro *pont3 aponta para o endereco " << pont3 << endl;
    */

    /*
    Explicacao atraves da imagem utilizada aos 23'23" do video.
    pont1 -> *pont1
    pont3 -> *pont3
    *pont3 = *pont1 ->*pont3 recebe o valor de *pont1. Nesse caso, ha os mesmos valores em diferentes espacos da memoria.
    delete pont3; //O comando delete pode ser utilizado para excluir o antigo valor de pont3, evitando assim o vazamento de memoria do  valor de *pont3.
    pont3 = pont1 -> pont3 passa a ter o mesmo endereco do pont1 ou seja, tem o mesmo valor no mesmo espaco da memoria.
    */

    return 0;
}