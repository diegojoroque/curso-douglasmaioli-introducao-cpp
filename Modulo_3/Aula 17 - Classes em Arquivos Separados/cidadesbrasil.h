/*
Modulo 3 - Classes
Aula 17 - Classes em Arquivos Separados
Disponível em https://www.youtube.com/watch?v=jrhofSNMalY

O comando "g++ cidadesbrasil_main.cpp cidadesbrasil.cpp -o brcity.exe" é utilizado para compilar os arquivos ou seja, gerar o arquivo .EXE.
*/

class cidadesbrasil{
    private:
        int populacao, ano;
        float idh;
        int estado; 

    public:
        //construtor
        cidadesbrasil(int pessoa, int fundacao, float indice, int uf);

        void setpopulacao (int pessoa);
        int getpopulacao ();

        void setano (int fundacao);
        int getano ();

        void setidh (float indice);
        float getidh ();

        void setestado (int uf);
        int getestado ();
};