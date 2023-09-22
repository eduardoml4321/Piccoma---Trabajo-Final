#pragma once
#include <string>
using namespace std;
using namespace System;

class Reclamo
{
private:
	string tipoReclamo;
	string textoReclamo;
	int idReclamo;
	bool chequeado;
	// Variable estática para realizar un seguimiento del último ID utilizado
	static int ultimoIdUtilizado;

public:
	Reclamo(string T_Reclamo, string Text_Reclamo):textoReclamo(Text_Reclamo),tipoReclamo(T_Reclamo),idReclamo(generarIdUnico())
	{

	}
	string get_tipoReclamo() { return tipoReclamo; }
	string get_textoReclamo() { return textoReclamo; }
	int    get_idReclamo() { return idReclamo; }
	bool   get_chequeado() { return chequeado; }

	int generarIdUnico() {
		ultimoIdUtilizado++; 
		return ultimoIdUtilizado; 
	}
	void mostrarReclamo()
	{
		cout << "Id del reclamo: " << get_idReclamo() << endl;
		cout << "Tipo de Reclamo: " << get_tipoReclamo() << endl;
		cout << "Mensaje: " << get_textoReclamo() << endl;
		cout << endl;
	}
	void set_tipoReclamo(string t) { tipoReclamo = t; }
	void set_textoReclamo(string text) { textoReclamo = text; }
	void set_chequeado(bool C) { chequeado = C; }
};

int Reclamo::ultimoIdUtilizado = 10000;  // Inicializa la variable estática en 0      //convertir a lambda quiza?