/*
Módulo 1 - O começo da jornada!
Aula 05 - Funções
Disponível em https://www.youtube.com/watch?v=kSqmUA6h_50
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

using namespace std;

#define pi 3.14;

#define curtir cout << "Curta essa aula\n";

void inscrever(){
    cout << "Funcao que nao tem saida. \n(apenas realiza algo e nao retorna nada).\n";
}
    //função que não tem saída (apenas realiza algo e não retorna nada).
    //Ao "chamar essa função", aparecerá essa mensagem.

int somar(int x, int y){
    int t;
    t=1;

    int soma;
    soma = x+y;
    return soma;

}
    //int: tipo da função
    //somar: nome da função
    //int x e int y: entradas da função (argumentos)
        //int: tipo de variável
        //soma: nome da variável (por estar dentro da função, essa variável é local)


int main(){

    int t;
    t=0;
    inscrever();

    int a=5, b=4;
        //Declaração das variáveis a serem utilizadas na função somar
    int s;
    s = somar (a,b);

    cout << "Soma: " << s << endl;

    cout << "Valor de t: " << t << endl;

    cout << pi;

    curtir;

    return 0;
}