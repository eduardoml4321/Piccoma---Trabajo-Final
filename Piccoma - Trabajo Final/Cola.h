#pragma once
#include "Nodo.h"

template<class T>
class Cola {

private:

	Nodo<T>* inicio;
	Nodo<T>* fin;
	int N_Elements;

public:

	Cola() {

		this->inicio = NULL;
		this->fin = NULL;
		N_Elements = 0;
	}

	void enqueue(T v);
	T dequeue();
	bool esVacia();
	int size();
	T obtenerPos(int pos);
};

template<class T>
bool Cola<T>::esVacia() {

	return (inicio == NULL);
}

template<class T>
void Cola<T>::enqueue(T v) {

	Nodo<T>* nodo = new Nodo<T>(v);

	if (esVacia()) {

		inicio = nodo;
		fin = inicio;
	}

	else 
	{
		fin->siguiente = nodo;
		fin = nodo;
	}
	N_Elements++;
	nodo = NULL;
}

template<class T>
T Cola<T>::dequeue() {

	T dato = inicio->dato;

	if (inicio == fin) {

		inicio = NULL;
		fin = NULL;
	}
	else {
		Nodo<T>* nodoAEliminar = inicio;
		inicio = inicio->siguiente;
		delete nodoAEliminar;
	}
	N_Elements--;
	return dato;
}

template<class T>
T Cola<T>::obtenerPos(int pos) {
	if (pos >= 0 && pos < N_Elements) {
		Nodo<T>* aux = inicio;
		for (int i = 0; i < pos; i++) {
			aux = aux->siguiente;
		}
		return aux->dato;
	}
	else {
		return NULL;
	}
}


template<class T>
int Cola<T>::size() {
	return N_Elements;
}





