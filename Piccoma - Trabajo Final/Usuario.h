#pragma once
#include <iostream>
#include <string>
using namespace std;

class Usuario
{

private:
	string nombre;
	string correo;
	int edad;
	long id;
	static int ultimoIngresado;

public:
	Usuario(string nombre, string correo, int edad)
	{
		this->nombre = nombre;
		this->correo = correo;
		this->edad = edad;
		this->id = generarId();
	};
	Usuario() {};
	~Usuario() {};

	string get_nombre() {
		return this->nombre;
	}

	string get_correo() {
		return this->correo;
	}

	int get_edad() {
		return this->edad;
	}

	long get_id() {
		return this->id;
	}

	void obtenerUsuario() {
		cout << "---Datos del Usuario---" << endl;
		cout << "Nombre: " << get_nombre() << endl;
		cout << "Correo: " << get_correo() << endl;
		cout << "Edad: " << get_edad() << endl;
		cout << "Id: " << get_id() << endl;
	}

	int generarId() {
		ultimoIngresado++;
		return ultimoIngresado;
	}
};

int Usuario::ultimoIngresado = 2300;

