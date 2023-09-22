#pragma once
#include "Nodo.h"

template<class T>
class Lista
{
private:
	Nodo<T> *inicio;
	int longitud;
public:
	Lista() { inicio = NULL; longitud = 0; }
	~Lista();
	void insertarInicio(T v);
	void ModificarPos(T v, int pos);
	void eliminarPos(int pos);
	int Get_longitud();
	void mostrar();
	T obtenerInicial();
	T obtenerPos(int pos);
	T obtenerFinal();
};


template <class T>
Lista<T>::~Lista() {
	Nodo<T>* temp;
	while (inicio != NULL) {
		temp = inicio;
		inicio = inicio->siguiente;
		delete temp;
		temp = NULL;
	}
}

template <class T>
void Lista<T>::ModificarPos(T v, int pos) {
	if (pos >= 0 && pos < longitud)
	{
		Nodo<T>* aux = inicio;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->siguiente;
		}
		aux->valor = v;

	}

}



template<class T>
void Lista<T>::insertarInicio(T v) {
		//Nodo<T> *nodo = new Nodo<T>(v);
		//if (inicio == NULL) inicio = nodo;
		//else
		//{ 
		//nodo->siguiente = inicio; 
		//}
		//inicio = nodo;
		//nodo = NULL;

	Nodo<T> *Newnodo = new Nodo<T>(v, inicio);
	if (Newnodo != NULL) {
		inicio = Newnodo;
		Newnodo = NULL;
		longitud++;
	}
}

template<class T>
int Lista<T>::Get_longitud() {
	return longitud;
}
template<class T>
void Lista<T>::eliminarPos(int pos) {
	if (pos == 0)
	{
		Nodo<T>* aux1 = inicio;
		inicio = inicio->siguiente;
		delete aux1;
		longitud--;
	}
	if (pos > 0 && pos < longitud)
	{
		Nodo<T>* aux1 = inicio;
		Nodo<T>* aux2 = inicio->siguiente;
		for (int i = 0; i < pos - 1; i++)
		{
			aux1 = aux1->siguiente;
			aux2 = aux2->siguiente;
		}
		aux1->siguiente = aux2->siguiente;
		delete aux2;
		longitud--;
	}

}

template<class T>
void Lista<T>::mostrar() {
	Nodo<T> *nodo = inicio;
	cout << "L ->";
	do {
		//Punto *pto = (Punto *)(nodo->valor);
		Punto *pto = nodo->valor;
		cout << pto->toString();
		if (nodo != NULL)
		{
			cout << "-> ";
			nodo = nodo->siguiente;
		}
	} while (nodo != NULL);

}

template <typename T>
T Lista<T>::obtenerInicial() {
	return obtenerPos(0);
}
template <typename T>
T Lista<T>::obtenerPos(int pos) {
	if (pos >= 0 && pos < longitud) {
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
template <typename T>
T Lista<T>::obtenerFinal() {
	return obtenerPos(longitud - 1);
}


