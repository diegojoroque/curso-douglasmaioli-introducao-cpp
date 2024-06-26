/*
Módulo 1 - O começo da jornada!
9 - Desafios Propostos Nível 1

Disponível em https://www.youtube.com/watch?v=KcRW1rSC5nk e https://drive.google.com/file/d/1viOzA_458Cc5ibxaFcmCNiFViwcQUzGS/view

Desafio 1

Dada a função f(x)=x²-3x+5.
Crie um Algoritmo em C++, que tenha uma função que calcula o valor de f(a), em que a é um número real informado pelo usuário.
*/

#include <iostream>

using namespace std;

float funcao (float x){
    return (x*x)-(3*x)+5;
//    float fx;//Poderia ser declarado uma variavel para armazenar o valor da equação.
//    fx = (x*x)-(3*x)+5;//Logo após declarado, ela receberia o valor da equação.
//    return fx;//Nesse ponto, ela retornaria o valor armazenado na variável.
}

int main (){
    float a,fa;
    cout << "Informe um numero real:\n";
    cin >> a;
    fa = funcao(a);
    cout << "O resultado da equacao e " << fa << ".\n";

    return 0;
}

/*
Código com função Void:

#include <iostream>

using namespace std;

float a;

void fa (float x) {
    cout << "O valor de f(" << x << ") e " << (a*a)-(3*a)+5 << "." <<endl;
}

int main () {
    cout << "Informe um numero qualquer:\n";
    cin >> a;    

    fa(a);

    return 0;
}
*/