#include "FilaCircular.h"

// Construtor
FilaCircular::FilaCircular(int capacidade) : capacidade(capacidade), inicio(0), fim(0), tamanho(0) {
    fila = new int[capacidade];
}

// Destrutor
FilaCircular::~FilaCircular() {
    delete[] fila;
}

// Insere um elemento no fim da fila
void FilaCircular::inserir(int valor) {
    if (estaCheia()) {
        std::cout << "Fila cheia. Não é possível inserir " << valor << std::endl;
        return;
    }
    fila[fim] = valor;
    fim = (fim + 1) % capacidade;
    tamanho++;
}

// Remove o elemento do início da fila
void FilaCircular::remover() {
    if (estaVazia()) {
        std::cout << "Fila vazia. Não é possível remover." << std::endl;
        return;
    }
    inicio = (inicio + 1) % capacidade;
    tamanho--;
}

// Consulta o elemento no início da fila
int FilaCircular::consultarInicio() {
    if (estaVazia()) {
        std::cout << "Fila vazia. Não há elementos." << std::endl;
        return -1; // Retorna -1 se a fila estiver vazia
    }
    return fila[inicio];
}

// Verifica se a fila está vazia
bool FilaCircular::estaVazia() {
    return tamanho == 0;
}

// Verifica se a fila está cheia
bool FilaCircular::estaCheia() {
    return tamanho == capacidade;
}
