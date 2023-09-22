#include "Manga.h"
#include "Comic.h"
class ManejadorLibros{
private:
	Lista<Manga*>* listMangas;
	Lista<Comic*>* listComics;

public:
	ManejadorLibros() {
		listMangas = new Lista<Manga*>();
		listComics = new Lista<Comic*>();
	}
	void insertarInicio(Manga* m, Lista<Genero*>* l)
	{
		listMangas->insertarInicio(m);
		listMangas->obtenerPos(0)->setListaGeneros(l);
	}
	void insertarInicio(Comic* s, Lista<Genero*>* l)
	{
		listComics->insertarInicio(s);
		listComics->obtenerPos(0)->setListaGeneros(l);
	}
	Manga* obtenerManga(int pos)
	{
		if (listMangas->Get_longitud() < pos)
		{
			for (int i = 0; i < pos; i++)
			{
				return listMangas->obtenerPos(pos);
			}
		}
		else
			cout << "Posicion no existente";
	}
	Comic* obtenerComic(int pos)
	{
		if (listComics->Get_longitud() < pos)
		{
			for (int i = 0; i < pos; i++)
			{
				return listComics->obtenerPos(pos);
			}
		}
		else
			cout << "Posicion no existente";
	}
	void mostrarMangas() {
		for (int i = 0; i < listMangas->Get_longitud(); i++)
		{
			cout <<"Nombre del Manga:"<< listMangas->obtenerPos(i)->getNombre() << endl;
			cout <<"Autor: "<< listMangas->obtenerPos(i)->getAutor() << endl;
			cout << "Generos: "; listMangas->obtenerPos(i)->mostrarGeneros();
		}
	}
};

