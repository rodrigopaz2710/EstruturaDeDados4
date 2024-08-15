#ifndef FILACIRCULAR_H
#define FILACIRCULAR_H

#include <iostream>

class FilaCircular {
private:
    int* fila;       // Vetor que armazena os elementos da fila
    int capacidade;  // Capacidade máxima da fila
    int inicio;      // Índice do início da fila
    int fim;         // Índice do fim da fila
    int tamanho;     // Número de elementos na fila

public:
    FilaCircular(int capacidade);
    ~FilaCircular();

    void inserir(int valor);
    void remover();
    int consultarInicio();
    bool estaVazia();
    bool estaCheia();
};

#endif
