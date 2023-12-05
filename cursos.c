/*#include "cursos.h"
#include <stdio.h>

ListaCursos leerCursosDesdeCSV(const char *filename) {
	ListaCursos lista = { .cantidadCursos = 0 };
	FILE *file = fopen(filename, "r");
	
	//for (int i = 0; i < cursosLeidos.cantidadCursos; i++) {
	//	printf("Curso: %s, Codigo: %s, Descripcion: %s, Profesor: %s\n",
	//		   cursosLeidos.cursos[i].nombre,
	//		   cursosLeidos.cursos[i].codigo,
	//		   cursosLeidos.cursos[i].descripcion,
	//		   cursosLeidos.cursos[i].profesor);
	//}
	
	
	if (file != NULL) {
		while (fscanf(file, "%49[^,],%49[^,],%49[^,],%49[^\n]\n",
					  lista.cursos[lista.cantidadCursos].nombre,
					  lista.cursos[lista.cantidadCursos].codigo,
					  lista.cursos[lista.cantidadCursos].descripcion,
					  lista.cursos[lista.cantidadCursos].profesor) == 4
			   && lista.cantidadCursos < MAX_CURSOS) {
			lista.cantidadCursos++;
		}
		
		fclose(file);
	} else {
		printf("No se pudo abrir el archivo.\n");
	}
	
	return lista;
}
*/
