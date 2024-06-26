/*
Módulo 2 - Ponteiros, Vetores e Matrizes
Aula 12 - Vetores
Disponível em https://www.youtube.com/watch?v=aNNqxVeEv-k
*/

#include <iostream>

using namespace std;

int main () {

    /*
    Alocacao Estatica
    int vet[4]; //Quando declarado dessa maneira, ao imprimir o vetor de posicao 2, o qual ainda nao foi atribuido valor, sera retornado um valor "estranho" e "aleatorio" que esta na memoria.
    vet[0]=5;
    vet[1]=10;
    cout << vet[0] << endl;
    cout << vet[2] << endl;
    
    int vet[4] = {5,10}; //Quando a declaracao e realizada dessa maneira, ao imprimir o vetor de posicao 2, sera retornado o valor 0 mesmo que ainda nao tenha sido atribuido valor a ele.
    cout << vet[0] << endl;
    cout << vet[2] << endl;

    cout << "[";
    for (int i=0 ; i<4 ; i++){
        cout << vet[i] << " ";
    }
    cout << "]" << endl;

    int x = sizeof(vet); //Essa funcao "sizeof" retorna o tamanho do objeto, nesse caso do vetor "vet".
    int y = sizeof(int); //Nesse caso, "sizeof" retornar o tamanho da variavel inteiro "int".
    cout << "Tamanho do vetor: " << x << endl;
    cout << "Tamanho de inteiro: " << y << endl;
    int z = sizeof(vet)/sizeof(int);
    cout << "Quantidade de elementos do vetor: " << z << endl;
    */

    /*
    Alocacao Dinamica
    int tamanho;
    cout << "Digite o tamanho do vetor:" << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho]; //O new e utilizado para criar um espaco (inteiro) na memoria.
    
    for (int i=0 ; i<tamanho ; i++){
        cout << "Digite o elemento " << i << "do vetor:" << endl;
        cin >> vetor[i];
    }

    for (int i=0 ; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << endl;

    delete [] vetor; //Comando utilizado para excluir um vetor. Os colchetes sao utilizados para excluir vetores.  
    */

    return 0;
}