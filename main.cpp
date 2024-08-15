#include "FilaCircular.h"


using namespace std;

int main() {
    FilaCircular fila(5);

    fila.inserir(10);
    fila.inserir(20);
    fila.inserir(30);
    fila.inserir(40);
    fila.inserir(50);

    cout << "Elemento no início da fila: " << fila.consultarInicio() << endl;

    fila.remover();
    cout << "Elemento no início da fila após remoção: " << fila.consultarInicio() << endl;

    fila.inserir(60);
    cout << "Elemento no início da fila após nova inserção: " << fila.consultarInicio() << endl;

    // Testando fila cheia
    fila.inserir(70);

    return 0;
}
