/*
Modulo 3 - Classes
Aula 16-1 - Classes
Disponível em https://www.youtube.com/watch?v=-okwFwd2r14
*/

#include <iostream>

using namespace std;

class propaganda{ //Para se criar uma classe, basta digitar class seguido do nome da classe.
    private: //Argumentos, variaveis e funcoes privadas so podem ser acessadas dentro da propria classe.

    public: //Argumentos, variaveis e funcoes publicas podem ser acessadas fora da classe.

    void inscrever(){
        cout << "Se inscreva no Canal do Professor Douglas Maioli!\n";
    }

    void curta(){
        cout << "Curta esse video e ative o sininho!\n";
    }

}; //E necessario colocar ";" nas chaves da classe.

int main(){
    propaganda canal; //Para chamar uma classe, e necessario criar um nome para o objeto. Nesse caso, a classe se chama propaganda e o objeto se chama canal.
    canal.inscrever(); //Para utilizar as funcoes da classe, basta chama-lo junto ao objeto.
    canal.curta();

    return 0;
}