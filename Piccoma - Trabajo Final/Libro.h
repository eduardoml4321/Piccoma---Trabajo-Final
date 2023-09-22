#pragma once
#include "Lista.h"
#include "Genero.h"
#include <iostream>
using namespace std;

class Libro
{
public:
	string nombre;
	string autor;
	string orientacion;
	int reseña;
	string texto;
	Lista<Genero*>* listaGeneros;

public:
	Libro(string nombre, string autor, int reseña);
	Libro(string nombre, string autor, string orientacion, int reseña);
	Libro(string nombre, string autor);
	string getNombre();
	string getAutor();
	int getReseña();
	void setReseña(int reseña);
	string getOrientacion();
	string getTexto();
	void setTexto(string texto);
	Lista<Genero*>* getListaGeneros();
	void setListaGeneros(Lista<Genero*>* l);
	void mostrarGeneros();
};

Libro::Libro(string nombre, string autor, int reseña)
{
	this->nombre = nombre;
	this->autor = autor;
	this->reseña = reseña;
}

Libro::Libro(string nombre, string autor, string orientacion, int reseña)
{
	this->nombre = nombre;
	this->autor = autor;
	this->orientacion = orientacion;
	this->reseña = reseña;
}

Libro::Libro(string nombre, string autor)
{
	this->nombre = nombre;
	this->autor = autor;
	this->orientacion = "Sin orientacion";
	this->reseña = 0;
	this->texto = "sin texto";
	listaGeneros = new Lista<Genero*>();

}

string Libro::getNombre()
{
	return nombre;
}

string Libro::getAutor()
{
	return autor;
}

int Libro::getReseña()
{
	return reseña;
}

void Libro::setReseña(int reseña) {
	this->reseña = reseña;
}

string Libro::getOrientacion()
{
	return orientacion;
}

string Libro::getTexto() {
	return texto;
}

void Libro::setTexto(string texto) {
	this->texto = texto;
}

Lista<Genero*>* Libro::getListaGeneros() {
	return listaGeneros;
}

void Libro::setListaGeneros(Lista<Genero*>* l) {
	listaGeneros = l;
}

void Libro::mostrarGeneros() {

	for (int i = 0; i < listaGeneros->Get_longitud(); i++)
	{
		cout << listaGeneros->obtenerPos(i)->getNombre() <<" ";
	}
	cout<<endl;
}