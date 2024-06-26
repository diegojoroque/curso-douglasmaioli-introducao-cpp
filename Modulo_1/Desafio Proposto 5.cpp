/*
Módulo 1 - O começo da jornada!
9 - Desafios Propostos Nível 1

Disponível em https://www.youtube.com/watch?v=KcRW1rSC5nk e https://drive.google.com/file/d/1viOzA_458Cc5ibxaFcmCNiFViwcQUzGS/view

Desafio 5

Em um programa de Moradia Popular, somente pessoas maiores de 21 anos e com renda abaixo de R$1200,00 podem participar. Crie um Algoritmo em C++, em que o usuário informa sua idade e sua renda, e é informado se ele pode ou não participar desse programa.*/

#include <iostream>

using namespace std;

int idade;
float renda;

int main (){
    cout << "Programa de Moradia Popular\n";
    cout << "Quantos anos voce tem?\n";
    cin >> idade;
    cout << "Qual o valor da sua renda?\n";
    cin >> renda;

    if (idade > 21 and renda < 1200){
        cout << "Parabens! Voce esta apto a participar desse programa.\n";
    } else if (idade < 21 and renda < 1200) { 
        cout << "Infelizmente voce nao tem a idade minima exigida para participar desse programa.\n";
    } else if (idade > 21 and renda > 1200) {
        cout << "Infelizmente sua renda e acima do valor maximo exigido para participar desse programa.\n";
    } else if (idade < 21 and renda > 1200) {
        cout << "Infelizmente voce nao tem a idade minima e o valor da sua renda e acima do exigido para participar desse programa.\n";
    }

    return 0;
}