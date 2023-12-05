#include "obtenerdatos.h"
#include <stdio.h>

ListaCursos leerCursosDesdeCSV() {
	ListaCursos lista = { .cantidadCursos = 0 };
	FILE *file = fopen("cursos.csv", "r");
	
	
	
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


ListaEstudiantes leerEstudiantesDesdeCSV(const char *filename) {
	ListaEstudiantes lista = { .cantidadEstudiantes = 0 };
	FILE *file = fopen(filename, "r");

	
	
	if (file != NULL) {
		while (fscanf(file, "%49[^,],%49[^,],%49[^,],%49[^\n]\n",
					  lista.estudiantes[lista.cantidadEstudiantes].nombre,
					  lista.estudiantes[lista.cantidadEstudiantes].id,
					  lista.estudiantes[lista.cantidadEstudiantes].cursosinscritos,
					  lista.estudiantes[lista.cantidadEstudiantes].calificaciones) == 4
			   && lista.cantidadEstudiantes < MAX_ESTUDIANTES) {
			lista.cantidadEstudiantes++;
		}
		
		fclose(file);
	} else {
		printf("No se pudo abrir el archivo.\n");
	}
	
	return lista;
}

ListaProfesores leerProfesoresDesdeCSV(const char *filename) {
	ListaProfesores lista = { .cantidadProfesores = 0 };
	FILE *file = fopen(filename, "r");
	
	
	
	if (file != NULL) {
		while (fscanf(file, "%49[^,],%49[^,],%49[^,],%49[^\n]\n",
					  lista.profesores[lista.cantidadProfesores].nombre,
					  lista.profesores[lista.cantidadProfesores].id,
					  lista.profesores[lista.cantidadProfesores].cursosasignados) == 3
			   && lista.cantidadProfesores < MAX_PROFESORES) {
			lista.cantidadProfesores++;
		}
		
		fclose(file);
	} else {
		printf("No se pudo abrir el archivo.\n");
	}
	
	return lista;
}

void imprimirListaEstudiantes(ListaEstudiantes lista) {
	printf("---- Registro de Estudiantes ----\n");
	
	for (int i = 0; i < lista.cantidadEstudiantes; i++) {
		printf("Estudiante %d:\n", i + 1);
		printf("Nombre: %s\n", lista.estudiantes[i].nombre);
		printf("ID: %s\n", lista.estudiantes[i].id);
		printf("Cursos inscritos: %s\n", lista.estudiantes[i].cursosinscritos);
		printf("Calificaciones: %s\n", lista.estudiantes[i].calificaciones);
		printf("--------------------\n");
	}
}

void imprimirListaProfesores(ListaProfesores lista) {
	printf("---- Registro de Profesores ----\n");
	
	for (int i = 0; i < lista.cantidadProfesores; i++) {
		printf("Profesor %d:\n", i + 1);
		printf("Nombre: %s\n", lista.profesores[i].nombre);
		printf("ID: %s\n", lista.profesores[i].id);
		printf("Cursos inscritos: %s\n", lista.profesores[i].cursosasignados);
		printf("--------------------\n");
	}
}

void imprimirListaCursos(ListaCursos lista) {
	printf("---- Registro de Cursos ----\n");
	
	for (int i = 0; i < lista.cantidadCursos; i++) {
		printf("Curso %d:\n", i + 1);
		printf("Nombre: %s\n", lista.cursos[i].nombre);
		printf("Codigo: %s\n", lista.cursos[i].codigo);
		printf("Calificaciones: %s\n", lista.cursos[i].descripcion);
		printf("Profesor a cargo: %s\n", lista.cursos[i].profesor);
		printf("--------------------\n");
	}
}
