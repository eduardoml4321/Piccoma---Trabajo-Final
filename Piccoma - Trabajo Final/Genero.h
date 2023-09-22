#pragma once
#include <iostream>
#include <string>
using namespace std;


class Genero {
public:
	string nombre;

public:
	Genero(string nombre) {
		this->nombre = nombre;
	}
	string getNombre() {
		return nombre;
	}
};