/*
Modulo 3 - Classes
Aula 17 - Classes em Arquivos Separados
Disponível em https://www.youtube.com/watch?v=jrhofSNMalY

O comando "g++ cidadesbrasil_main.cpp cidadesbrasil.cpp -o brcity.exe" é utilizado para compilar os arquivos ou seja, gerar o arquivo .EXE.
*/

#include <iostream>

#include "cidadesbrasil.h"

using namespace std;

//construtor
cidadesbrasil::cidadesbrasil(int pessoa=0, int fundacao=1500, float indice=0, int uf=0){
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

void cidadesbrasil::setestado(int uf){
    estado = uf;
}
int cidadesbrasil::getestado(){
    return estado;
}