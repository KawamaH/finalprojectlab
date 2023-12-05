/*#ifndef CURSOS_H
#define CURSOS_H

#define MAX_CURSOS 100
#define MAX_LEN 50

typedef struct {
	char nombre[MAX_LEN];
	char codigo[MAX_LEN];
	char descripcion[MAX_LEN];
	char profesor[MAX_LEN];
} Curso;

typedef struct {
	Curso cursos[MAX_CURSOS];
	int cantidadCursos;
} ListaCursos;

ListaCursos leerCursosDesdeCSV(const char *filename);

#endif /* CURSOS_H 
*/
