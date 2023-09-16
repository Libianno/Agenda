#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Agenda{
    public:
        Agenda(int numero_contatos_){
            numero_contatos = numero_contatos_;
        }

        void insereNome(){
            if (nomes.size() <= numero_contatos){
                cout << "Informe o nome ";
                getline(cin, nome);
                if (nome.length() <= 10)
                    nomes.push_back(nome);
                else{
                    nomes.push_back(nome.substr(0, 10));
                    cout << "O nome ultrapassa 10 caracteres e sera truncado para" << nome[count] << endl;
                }
                count++;
            }
        }

        void mostraNomes(){
            for (string name : nomes){
                cout << name << endl;
            }
        }

    private:
        vector<string> nomes;// iniciar com valor, duvida pq vector tem tamanho variável 
        int count = 0;
        long unsigned int numero_contatos;
        string nome;
};