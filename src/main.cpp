#include <iostream>
#include "agenda.cpp"

using namespace std;

int main(){
    Agenda agenda(10);
    for(int i = 0; i <12; i++){
        agenda.insereNome();
        agenda.mostraNomes();
    }
}