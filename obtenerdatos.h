#ifndef OBTENERDATOS_H
#define OBTENERDATOS_H
#define MAX_CURSOS 100
#define MAX_ESTUDIANTES 100
#define MAX_PROFESORES 100
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

typedef struct {
	char nombre[MAX_LEN];
	char id[MAX_LEN];
	char cursosinscritos[MAX_LEN];
	char calificaciones[MAX_LEN];
} Estudiante;

typedef struct {
	Estudiante estudiantes[MAX_ESTUDIANTES];
	int cantidadEstudiantes;
} ListaEstudiantes;

typedef struct {
	char nombre[MAX_LEN];
	char id[MAX_LEN];
	char cursosasignados[MAX_LEN];
}Profesor;

typedef struct {
	Profesor profesores[MAX_PROFESORES];
	int cantidadProfesores;
}ListaProfesores;

ListaCursos leerCursosDesdeCSV(const char *filename);
ListaEstudiantes leerEstudiantesDesdeCSV(const char *filename);
ListaProfesores leerProfesoresDesdeCSV(const char *filename);

#endif
