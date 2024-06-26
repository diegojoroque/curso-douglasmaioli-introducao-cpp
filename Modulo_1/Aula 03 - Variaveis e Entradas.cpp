/*
Módulo 1 - O começo da jornada!
Aula 03 - Variáveis e Entradas
Disponível em https://www.youtube.com/watch?v=WYCKFyBii_Q
*/

/*
Tipos de variáveis:
    Bool (booleano) - true (1) or false (0);
    Char (caracter) - 1 único caractere;
    String (caracter) - 1 ou + caracteres;
    Int (inteiro) - sem decimal;
    Double (duplo) - nº "real" c/ menos de 15 casas decimais;
    Float (flutuador) - nº "real" c/ menos de 6 casas decimais.
*/

#include <iostream>

using namespace std;

int main(){
    int inteiro1 = 5; //tipo de variável seguida do seu nome e valor

    int inteiro2; //ou tipo variável seguida apenas do nome
    inteiro2 = 6; //e valor atribuido posteriormente (como aqui)

    float flutua;
    flutua = 1.1;

    double duplo = 6.7e98;

    bool booleano;
    booleano = true;

    char letter = 'd'; //char utiliza 'aspas simples'
    string word;
    word = "Deus"; //char utiliza "aspas duplas"

    cout << inteiro1 << endl << inteiro2 << endl; //endl (end line) para saltar a linha
    cout << flutua << endl << duplo << endl;
    cout << booleano << endl << letter << endl << word << endl;

    string banda;
    cout << "Qual e sua banda favorita?" << endl;//realizar pergunta para o usuário
    cin >> banda; //Na entrada de dados há a inversão do símbolo para maior que.

    cout << banda << " e a sua banda favorita.";
    return 0;
}