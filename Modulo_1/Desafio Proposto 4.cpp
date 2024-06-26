/*
Módulo 1 - O começo da jornada!
9 - Desafios Propostos Nível 1

Disponível em https://www.youtube.com/watch?v=KcRW1rSC5nk e https://drive.google.com/file/d/1viOzA_458Cc5ibxaFcmCNiFViwcQUzGS/view

Desafio 4

Crie um Algoritmo em C++, que calcula a potência, em que o usuário informa um número real e um número natural. Nesse algoritmo, sempre que é informado o resultado da potência, é perguntado ao usuário, se este deseja calcular outra potência.
*/

#include <iostream>

using namespace std;

float potencia (float x, int y){
    float pot=1;
    int cont=1;
    while (cont <= y){
        pot*=x; //identico a escrever pot=pot*x;
        cont++; //identico a escrever cont=cont+1;
    }
    return pot;
}

int main(){
    float b;
    int e;
    while (1){
    cout << "Digite a base (numero real):\n";
    cin >> b;
    cout << "Digite o expoente (numero natura):\n";
    cin >> e;
    float respost=potencia(b,e);
    cout << "O resultado de " << b << " elevado a " << e << " e igual a " << respost << endl;
    int q;
    cout << "Digite 1 se quiser calcular outra potencia e 0 se nao quiser\n";
    cin >> q;
    if (q == 0){
        break;
    }
    }

    return 0;
}