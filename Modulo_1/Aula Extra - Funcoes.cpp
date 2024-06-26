/*
Aula #22 - Funções - Parte 1 do curso de C++ do canal CFBCursos (disponível em https://www.youtube.com/watch?v=uB3Gm0QrgRw).
*/

/*
1) Void é uma função que não tem retorno.

#include <iostream>

using namespace std;

void texto(){
    cout << "Hello World!\n";
}

int main() {

    texto();

    return 0;
}
*/

/*
2)Função em que recebe valores (argumentos) que são trabalhados dentro da própria função.

#include <iostream>

using namespace std;

void soma(int n1, int n2){
    cout << n1 << "+" << n2 << " = " << n1+n2 << "\n";
}

int main() {
    soma(7,3);

    return 0;
}
*/

/*
3) Função que retorna valor(es).

#include <iostream>

using namespace std;

int produto(int n1, int n2){

    return n1*n2;
}

int resultado; //Variavel criada para armazenar o retorno da função.

int main () {
    resultado = produto(8,8); //Valor do retorno "sendo alocado à variável criada para esse fim". 
    
    cout << " Valor do produto = " << resultado << "\n";

    //cout << "Valor do produto = " << produto(8,7) << "\n"; //Pode ser impresso o valor diretamente. Nesse caso, não é necessário informar a variável resultado ou seja, basta informar o nome da função com os valores (argumentos).

    return 0;
}
*/

/*
4) Passando um vetor para a função.

#include <iostream>

using namespace std;

void semnome(string mudanca[3]){
    for (int i=0; i<3; i++){
        cout << mudanca[i] << "\n";
    }
}//Função (sem retorno) de nome "semnome", com um argumento do tipo string de nome "mudanca" de 3 posições, que imprime os valores do vetor de nome "vetor" de acordo com a estrutura de repetição "for".
    
int main (){
    string vetor[3]={"Macbook","iPhone","AppleWatch"};//Vetor do tipo string com tamanho 3 posições.
    semnome(vetor);//Chama a função "sem nome" passando para ela o valor do vetor

    return 0;
}
*/

/*
#include <iostream>

using namespace std;

float n;
void equacao (float x);

int main (){
    cout << "Digite:\n";
    cin >> n;

    equacao(n);

    return 0;
}

void equacao(float x){
    cout << "potencia de " << x << " e " << x*x << "\n";
}
*/