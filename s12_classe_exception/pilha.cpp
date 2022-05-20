#include <iostream>
#include <stdexcept>
#include "pilha.h"

using namespace std;

// CONSTRUTOR:

template <typename T> 
Pilha<T> :: Pilha(int s) 
{
	top = -1;
	size = s;
	array = new T[size];
}


//METODOS:

template <typename T> 
void Pilha<T> :: push(T valor)
{
	cout << "Empilhar...\n";

    if( top == size-1) {
        throw string("pilha cheia!");
    }

    top = top + 1;
    array[ top ] = valor;
}


template <typename T> 
T Pilha<T> :: pop()
{
	cout << "Desempilhar...\n";

	T retorno;
	
    if(top == -1) {
        throw string("pilha vazia");	//exception
    }

    retorno = (T) array[ top ];
    top = top - 1;

    return retorno;
}


template <typename T> 
T Pilha<T> :: peek()	// retorna o elemento no topo
{
	T retorno;
	
    if(top == -1) {
        throw -1;	//exception
    }
    
    retorno = (T) array[ top ];

    return retorno;
}
	
	
template <typename T> 
bool Pilha<T> :: isFull()
{
    if( top == size-1) {
        return true;
    }
    else { 
    	return false;
    }
}
	

template <typename T> 
bool Pilha<T> :: isEmpty()
{
    if( top == -1) {
        return true;
    }
    else { 
    	return false;
    }
}
	

template <typename T> 
void Pilha<T> :: show()
{
	cout << "Exibindo...\n";
	
    for(int i=0; i <= top; i++) {
        cout << "posicao " << i << " = " << array[i] << "\n";
    }
	cout << "topo index = " << top << "\n";
}





