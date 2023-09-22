#pragma once
#include "Nodo.h"

template<class T>
class Pila
{
private:
	Nodo<T>* tope;

public:
	Pila() {
		tope = NULL;
	}
	~Pila();
	void push(T v);
	T pop();
	bool estaVacia();
};

template<typename T>
Pila<T>::~Pila() {
	Nodo<T> *aux = tope;
	while (aux != NULL)
		aux = tope;
	tope = tope->siguiente;
	delete aux;
}


template<typename T>
void Pila<T>::push(T v) {

	if (estaVacia())
	{
		tope = new Nodo<T>(v);
	}
	else
	{
		tope = new Nodo<T>(v, tope);			
	}

}
template<typename T>
T Pila<T>::pop() {
	if (estaVacia()) return NULL;				
	else
	{
		Nodo<T>* nodoAEliminar = tope;
		T elemento = tope->dato;
		tope = tope->siguiente;				
		delete nodoAEliminar;               
		return elemento;
	}

}
template<typename T>
bool Pila<T>::estaVacia() {
	if (tope == NULL)
	{
		return 1;
	}
	return 0;
}