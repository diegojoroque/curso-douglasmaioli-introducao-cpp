/*
Modulo 3 - Classes
Aula 16-2 - Classes
Disponível em https://www.youtube.com/watch?v=-okwFwd2r14
*/

#include <iostream>

using namespace std;

class carro{
    private: //Geralmente, as variaveis sao declaradas no privado.
    int ano;
    float valor, km;

    public:
    //construtor
    carro(int a=0, float v=-1, float k=-1){ //A funcao "construtor" cria um objeto ja atribuindo valores a ele). Sendo assim, nao e necessario utilizar o "set". O  nome da funcao construtor deverá ser o mesmo da classe. Nesse caso, "carro". Logo abaixo, foi utilizado esse tipo de entrada no objeto Celta.
        ano = a;
        valor = v;
        km = k;
    }

    //get e set
    //ano
    void setano(int a){ //set é utilizado para indicar algo. Como esta "indicando algo", e necessario atribui-lo a algo. Nesse caso, o ano foi atribuido ao "a", ou seja, o "a" recebeu o valor "setado".
        ano = a;
        //this->ano = ano; //Quando for utilizar o mesmo nome da variavel ja declarada na classe, utiliza-se "this->" para indicar qual e a classe.
    }
    int getano(){ //get é utilizado para obter algo.
        return ano;
    }
    //valor
    void setvalor(float v){
        valor = v;
    }
    float getvalor(){
        return valor;
    }
    //km
    void setkm(float k){
        km = k;
    }
    float getkm(){
        return km;
    }

};

int main(){
    carro palio;
    palio.setano(1995);
    palio.setvalor(10000);
    palio.setkm(150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: " << palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;

    carro celta(2000, 12000, 95000); //No caso do uso do construtor, a entrada dos dados pode ser realizada dessa maneira.
    cout << "Celta: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: " << celta.getkm() << endl;

    return 0;
}