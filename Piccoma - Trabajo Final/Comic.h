#pragma once
#include"Libro.h"

class Comic :public Libro {

public:
	Comic(string nombre, string autor) : Libro(nombre, autor) {
		orientacion = "Izquierda a derecha";
	}

};