/*
Módulo 1 - O começo da jornada!
Aula 06 - Estruturas Condicionais - IF / ELSE
Disponível em https://www.youtube.com/watch?v=Iq8VcY6d6AM
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
    /*
    Comparações:
    Igual: ==
    Diferenca: !=
    Outros: >, <, >=, <=
    */

    /*
    Se Simples

    if (media >= 5){
        cout << "Aluno Aprovado\n";
    }
    */
    
    /*
    Se e Senao
    if (media >= 5){
        cout << "Aluno Aprovado\n";
    } else {
            cout << "Aluno Reprovado\n";
        }
    */

   if (media < 2.5){
        cout << "Nota Final: D\n";
   } else if (media < 5){
        cout << "Nota Final: C\n";
   } else if (media < 7.5){
        cout << "Nota Final: B\n";
   } else{
        cout << "Nota Final: A\n";
   }
   //No ultimo else nao e necessario informar "else if" porque, se as notas ja passaram pelas outras condicoes, ele se encaixara na ultima condicao automaticamente.
    return 0;
} 
