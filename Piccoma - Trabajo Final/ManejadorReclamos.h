#pragma once
#include "Cola.h"
#include "Reclamo.h"
class ManejadorReclamos
{
private:
	Cola<Reclamo*>* colaReclamos;
public:
	ManejadorReclamos()
	{
		colaReclamos = new Cola<Reclamo*>;
	}
	void agregarReclamo(Reclamo * R)
	{
		colaReclamos->enqueue(R);
	}
	void get_Reclamo()
	{
		if (!colaReclamos->esVacia()) 
		{
			colaReclamos->dequeue()->mostrarReclamo();
		}			
	}
	int get_catReclamos()
	{
		return colaReclamos->size();
	}

	void buscar(int id) {

		for (int i = 0; i < colaReclamos->size(); i++)
		{
			if (id == colaReclamos->obtenerPos(i)->get_idReclamo())
			{
				colaReclamos->obtenerPos(i)->mostrarReclamo();
			}
		}	
	}

};

