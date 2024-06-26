/*
Módulo 1 - O começo da jornada!
Aula 07 - Operadores Lógicos - E ( && ) / OU ( || ) / NÃO ( ! )
Disponível em https://www.youtube.com/watch?v=W0aIxGC96Y0
*/

#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;    

    cout << "Informe a nota 1\n";
    cin >> nota1;
    cout << "Informe a nota 2\n";
    cin >> nota2;

    float media=(nota1+nota2)/2;
    cout << "Media= " << media << endl;

    if (media < 2.5){
        cout << "Nota conceito D\n"; 
    } else if (media < 5){
        cout << "Nota conceito C\n";
    } else if (media < 7.5){
        cout << "Nota conceito B\n";
    } else{
        cout << "Nota conceito A\n";
    }
    
    float freq;
    cout << "Qual e a frequencia do aluno?\n";
    cin >> freq;

/*
    if (media >= 5 && freq >= 75){
        cout << "Aluno aprovado!\n";
    } else{
        cout << "Aluno reprovado!\n";
    }
*/

/*    if (media < 5 || freq < 75){
        cout << "Aluno reprovado!\n";
    }
*/

//Operador Ternario:
    (media >= 5) ? cout << "Aprovado" : cout << "Reprovado";

    return 0;
}