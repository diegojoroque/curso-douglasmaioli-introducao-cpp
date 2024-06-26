/*
Módulo 1 - O começo da jornada!
9 - Desafios Propostos Nível 1

Disponível em https://www.youtube.com/watch?v=KcRW1rSC5nk e https://drive.google.com/file/d/1viOzA_458Cc5ibxaFcmCNiFViwcQUzGS/view

Desafio 2

Crie um Algoritmo em C++, em que o usuário informa as notas de três provas de um determinado aluno e também a média de nota da turma toda. O Algoritmo deve calcular a média deste aluno e informar se sua nota é acima da média, abaixo da média ou está na média.
*/

#include <iostream>

using namespace std;

int main(){
    float n1, n2, n3, medtur, medalu;
    
    cout << "Informe a primeira nota:\n";
    cin >> n1;
    cout << "...\n";
    cout << "Informe a segunda nota:\n"; 
    cin >> n2;
    cout << "...\n";
    cout << "Informe a terceira nota:\n";
    cin >> n3;
    cout << "...\n";
    cout << "Informe a media das notas da turma:\n";
    cin >> medtur;
    cout << "...\n";

    medalu = (n1+n2+n3)/3;

    cout << "A media das notas desse(a) aluno(a) foi " << medalu << ".\n";

    if (medalu > medtur) {
        cout << "A media do aluno foi maior que a media da turma.";
    } else if (medalu == medtur) {
        cout << "A media do aluno e da turma foram iguais.";
    } else {
        cout << "A media do aluno foi abaixo da media da turma.";
    }

    return 0;
}