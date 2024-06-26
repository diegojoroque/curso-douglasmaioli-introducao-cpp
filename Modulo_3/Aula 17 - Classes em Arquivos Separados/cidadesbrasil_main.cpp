/*
Modulo 3 - Classes
Aula 17 - Classes em Arquivos Separados
Disponível em https://www.youtube.com/watch?v=jrhofSNMalY

O comando "g++ cidadesbrasil_main.cpp cidadesbrasil.cpp -o brcity.exe" é utilizado para compilar os arquivos ou seja, gerar o arquivo .EXE.
*/

#include <iostream>

#include "cidadesbrasil.h"

using namespace std;

int main(){
    cidadesbrasil lavras(105756, 1868, 0.782, 1);
    cout << "Lavras:\n";
    cout << "Populacao: " << lavras.getpopulacao() << endl;
    cout << "Fundacao: " << lavras.getano() << endl;
    cout << "IDH: " << lavras.getidh() << endl;
    cout << "Estado: " << lavras.getestado() << endl;
    cout << endl;

    cidadesbrasil campinas(1213792, 1774, 0.805, 2);
    cout << "Campinas:\n";
    cout << "Populacao: " << campinas.getpopulacao() << endl;
    cout << "Fundacao: " << campinas.getano() << endl;
    cout << "IDH: " << campinas.getidh() << endl;
    cout << "Estado: " << campinas.getestado() << endl;
    cout << endl;

    cidadesbrasil saopaulo(12396372, 1554, 0.805, 2);
    cout << "Sao Paulo:\n";
    cout << "Populacao: " << saopaulo.getpopulacao() << endl;
    cout << "Fundacao: " << saopaulo.getano() << endl;
    cout << "IDH: " << saopaulo.getidh() << endl;
    cout << "Estado: " << saopaulo.getestado() << endl;
    cout << endl;

    cidadesbrasil belohorizonte(2530701, 1897, 0.810, 1);
    cout << "Belo Horizonte:\n";
    cout << "Populacao: " << belohorizonte.getpopulacao() << endl;
    cout << "Fundacao: " << belohorizonte.getano() << endl;
    cout << "IDH: " << belohorizonte.getidh() << endl;
    cout << "Estado: " << belohorizonte.getestado() << endl;
    cout << endl;

    system ("pause");

    return 0;
}