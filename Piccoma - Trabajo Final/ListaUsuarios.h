#pragma once
#include "Usuario.h"
#include "Lista.h"

class ListaUsuario {
public:
	Lista<Usuario*>*lista;
	int dato;

public:
	ListaUsuario() {
		lista = new Lista<Usuario*>();
	};

	//ListaUsuario() {};

	~ListaUsuario() {};

	void insertarUsuario(Usuario* usuario) {
		lista->insertarInicio(usuario);
	}

	void insertarUsuario2(Usuario*usuario) {
		lista->insertarInicio(usuario);
	}

	void getUsuario() {
		lista->obtenerInicial()->get_id();
	}

	void eliminarUsuario(int n) {
		lista->eliminarPos(n);
	}

	//void modificarUsuario() {
		//lista->ModificarPos(T dato);
	//}

	void buscar(int n) {
	}


	void mostrarUsuarios() {
		for (int i = 0; i < lista->Get_longitud(); i++) {
			lista->obtenerPos(i)->obtenerUsuario(); cout << endl;
		}
	}

	void buscarID(int id) {
		for (int i = 0; i < lista->Get_longitud(); i++) {
			if (id == lista->obtenerPos(i)->get_id()) {
				lista->obtenerPos(i)->obtenerUsuario();
				cout << "El usuario ha sido encontrado..." << endl;
			}
			else {
				cout << "El usuario no ha sido encontrado en la lista..." << endl;
			}
		}
	}
};

