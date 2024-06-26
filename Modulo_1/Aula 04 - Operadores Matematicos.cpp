/*
Módulo 1 - O começo da jornada!
Aula 04 - Operadores Matemáticos
Disponível em https://www.youtube.com/watch?v=5L7N4Swiw90
*/

/*
As duas primeiras linhas são o cabeçalho do programa;
#include é para incluir bibliotecas;
iostream é uma biblioteca utilizada para "in" e "out" de dados;
int é o tipo de variável de saída;
main informa que é a principal função a ser executada;
std significa standard que é a função padrão;
using namespace std; antes de declara o tipo de variável substitui o uso de std dentro da função;
cout é a função padrão de saída;
{chaves} indicam o que está dentro da função ou da estrutura de repetição;
retorn 0 é utilizado antes de fechar as {} para indicar que acabou (Retornou 0).
*/

#include <iostream>
#include <math.h> //Inclui biblioteca com operações matemáticas

using namespace std;

int main (){
    int  a=5, b=2;
    cout << "Sendo o valor de a=" << a << " e b=" << b << endl;

    int soma;
    soma = a+b;
    cout << "Soma: " << soma << endl;
    //Se não for necessário armazenar o valor da soma, pode-se "economizar" memória ao fazer a soma diretamente na saída atravês de: cout << "Soma: " << a+b << endl;

    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    int prod=a*b;
    cout << "Produto: " << prod << endl;

    int quocint=a/b;
    cout << "Quociente inteiro: " << quocint << endl;

    int resto=a%b;
    cout << "Resto: " << resto << endl;

    float quocreal=(float)a/(float)b;
    cout << "Quociente real: " << quocreal << endl;

    float pot= pow(a,b);
    cout << "Potencia: " << pot << endl;

    //Incremento e Decremento
    cout << "a antigo: " << a << endl;
    a = a+1;
    cout <<"a novo: " << a << endl;   

    //a+=1; //Outra maneira de realizar incremento e decremento.
    //a--; //Outra maneira de realizar incremento e decremento.
    //a*=3; //Outra maneira de realizar "incremento" de um valor e realizar o produto.

    return 0;
} 