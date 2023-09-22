#include "ManejadorReclamos.h"
#include "ManejadorLibros.h"
#include "ListaUsuarios.h"

Reclamo *insertReclamo()
{
	Reclamo* Re;
	string TextoR, tipoR;
	cout << "Ingrese el Tipo de Reclamo: "; cin >> tipoR;
	cin.ignore();
	cout << "Ingrese el mensaje del reclamo : "; getline(cin, TextoR);
	cout << endl;
	
	Re = new Reclamo(tipoR, TextoR);
	return Re;
}

void main()
{
	ManejadorReclamos *MR = new ManejadorReclamos();
	
	MR->agregarReclamo(insertReclamo());
	MR->agregarReclamo(new Reclamo("APP", "Hoy queria leer el manga Xyz, pero no me carga"));


	MR->buscar(10001);
	cout << "Cantidad de reclamos: " << MR->get_catReclamos();

	system("pause");
	

	Lista<Genero*>* l = new Lista<Genero*>();
	l->insertarInicio(new Genero("Accion"));
	l->insertarInicio(new Genero("Drama"));
	l->insertarInicio(new Genero("Romance"));

	ManejadorLibros* list = new ManejadorLibros();
	list->insertarInicio(new Manga("NAruto", "autor"), l);
	list->mostrarMangas();
	
	system("pause");
	delete list;
	delete l;
	delete MR;
	

}









	/*ListaUsuario* listaU = new ListaUsuario();
	int opcion, dato;
	do {
		cout << "---MENU---" << endl;
		cout << "1) Insertar Usuario" << endl;
		cout << "2) Mostrar Lista de Usuarios" << endl;
		cout << "3) Eliminar un Usuario de la Lista" << endl;
		cout << "4) Buscar un Usuario en la Lista" << endl;
		cout << "5) SALIR" << endl;
		cin >> opcion;


		switch (opcion) {
		case 1:

			listaU->insertarUsuario(new Usuario("Ramiro", "ramiro@upc.edu.pe", 18));
			listaU->insertarUsuario(new Usuario("Mauricio", "mauricio@upc.edu.pe", 28));


			cout << "Usuarios insertados!!!..." << endl;
			system("pause");
			system("cls");
			break;
		case 2:

			cout << "Mostrando Elementos de la Lista.." << endl;
			listaU->mostrarUsuarios(); cout << endl;
			cout << endl;
			system("pause");
			system("cls");
			break;
		case 3:

			cout << "Digite la posicion del usuario a eliminar: " << endl;
			cin >> dato;
			listaU->eliminarUsuario(dato); cout << "Usuario: " << dato << " eliminado..." << endl;
			system("pause");
			system("cls");
			break;
		case 4:
			cout << "Digite el ID del Usuario a buscar: " << endl;
			cin >> dato;
			listaU->buscarID(dato); cout << endl;
			system("pause");
			system("cls");
			break;
		case 5:
			return 0;
			break;
		}


	} while (opcion != 5);
*/
	
