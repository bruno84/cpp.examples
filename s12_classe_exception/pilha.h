#include <iostream>
#include <stdexcept>

using namespace std;

template <typename T> 
class Pilha
{
	// ATRIBUTOS DA CLASSE:
	private:
		T* array;
		int top;
		int size;
	
	public:
		// Construtor
		Pilha(int size);
		// Métodos	
		void push(T valor);	
		T pop();
		T peek();	
		bool isFull();
		bool isEmpty();
		void show();
};
