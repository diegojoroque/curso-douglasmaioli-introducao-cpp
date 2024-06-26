/*
Modulo 3 - Classes
18 - Desafio Proposto Nivel 3

Desafio 11

Crie um Algoritmo em C++, que tenha uma classe chamada cidadesbrasil, nessa classe, escolha os atributos de cada objeto como populacao, ano de fundacao, entre outros.
*/

#include <iostream>

using namespace std;

class cidadesbrasil{
    private:
        int populacao, ano;
        float idh;
        string estado; 

    public:
        //construtor
        cidadesbrasil(int pessoa, int fundacao, float indice, string uf);

        void setpopulacao (int pessoa);
        int getpopulacao ();

        void setano (int fundacao);
        int getano ();

        void setidh (float indice);
        float getidh ();

        void setestado (string uf);
        string getestado ();
};

int main(){
    cidadesbrasil lavras(105756, 1868, 0.782, "MG");
    cout << "Lavras:\n";
    cout << "Populacao: " << lavras.getpopulacao() << endl;
    cout << "Fundacao: " << lavras.getano() << endl;
    cout << "IDH: " << lavras.getidh() << endl;
    cout << "Estado: " << lavras.getestado() << endl;
    cout << endl;

    cidadesbrasil campinas(1213792, 1774, 0.805, "SP");
    cout << "Campinas:\n";
    cout << "Populacao: " << campinas.getpopulacao() << endl;
    cout << "Fundacao: " << campinas.getano() << endl;
    cout << "IDH: " << campinas.getidh() << endl;
    cout << "Estado: " << campinas.getestado() << endl;
    cout << endl;

    cidadesbrasil saopaulo(12396372, 1554, 0.805, "SP");
    cout << "Sao Paulo:\n";
    cout << "Populacao: " << saopaulo.getpopulacao() << endl;
    cout << "Fundacao: " << saopaulo.getano() << endl;
    cout << "IDH: " << saopaulo.getidh() << endl;
    cout << "Estado: " << saopaulo.getestado() << endl;
    cout << endl;

    cidadesbrasil belohorizonte(2530701, 1897, 0.810, "MG");
    cout << "Belo Horizonte:\n";
    cout << "Populacao: " << belohorizonte.getpopulacao() << endl;
    cout << "Fundacao: " << belohorizonte.getano() << endl;
    cout << "IDH: " << belohorizonte.getidh() << endl;
    cout << "Estado: " << belohorizonte.getestado() << endl;
    cout << endl;

    return 0;
}

//construtor
cidadesbrasil::cidadesbrasil(int pessoa=0, int fundacao=1500, float indice=0, string uf="Erro"){
    populacao = pessoa;
    ano = fundacao;
    idh = indice;
    estado = uf;
}

void cidadesbrasil::setpopulacao(int pessoa){
    populacao = pessoa;
}
int cidadesbrasil::getpopulacao(){
    return populacao;
}

void cidadesbrasil::setano(int fundacao){
    ano = fundacao;
}
int cidadesbrasil::getano(){
    return ano;
}

void cidadesbrasil::setidh(float indice){
    idh = indice;
}
float cidadesbrasil::getidh(){
    return idh;
}

void cidadesbrasil::setestado(string uf){
    estado = uf;
}
string cidadesbrasil::getestado(){
    return estado;
}