#pragma once
#include"Libro.h"

class Manga :public Libro {

public:
	Manga(string nombre, string autor) : Libro(nombre, autor) {
		orientacion = "Derecha a izquierda";
	}

};

