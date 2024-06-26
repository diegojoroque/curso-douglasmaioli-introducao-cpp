/*
Módulo 1 - O começo da jornada!
Aula 08 - Estruturas de Repetição - WHILE /DO-WHILE / FORURL
Disponível em https://www.youtube.com/watch?v=N0eRzGbTBKc
*/

/*
While - Enquanto
    while (condicao) {
        comandos
    }

Do while - Faça enquanto
    do{
        comandos
    } (condicao)

For - Para
    for (inico ; final ; passo) {
        comandos
    }

A diferenca entre o while e o do while e que o este realiza o comando ao menos uma vez enquanto aquele pode nao realiza-lo. Ou seja, no while pergunta primeiro e depois realiza os comandos enquanto no do while realiza o comando para depois perguntar.
*/

#include <iostream>

using namespace std;

main(){
    int n;
    cout << "Digite um numero inteiro nao negativo.\n";
    cin >> n;

    int soma=0;
    int cont=1;

    /*
    while (cont <= n){
        soma+=cont; //Tambem pode ser escrito como soma=soma+cont
        cont++; //Tambem pode ser escrito como cont=cont+1
    }
    */

    /*
    do{
        soma+=cont;
        cont++;
    } while (cont <= n);
    */

    for (int j=1 ; j<=n ; j+=1){
        soma+=j;
    }

    cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;

    //break - comando utilizado para "parar".

    return 0;
}