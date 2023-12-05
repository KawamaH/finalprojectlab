#include <stdio.h>
#include <stdlib.h>
#include "registrooinicio.h"
#include "obtenerdatos.h"
int main() {
	
	ListaEstudiantes estudiantesLeidos = leerEstudiantesDesdeCSV();
	ListaCursos cursosLeidos = leerCursosDesdeCSV();
	ListaProfesores profesoresLeidos = leerProfesoresDesdeCSV();
	
	//int id = registrarOIniciarSesion();
	
	//if (id == 0) {
	//	printf("Ocurrió un error en el registro o inicio de sesión. Saliendo del programa...\n");
	//	return EXIT_FAILURE;
	//}
	
	//printf("ID obtenida: %d. Saliendo del programa...\n", id);
	return 0;
}
