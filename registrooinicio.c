/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include "registrooinicio.h"

// Genera una ID aleatoria de 6 d�gitos
int generarID() {
	srand(time(NULL));
	return rand() % 900000 + 100000;
}

int registrarOIniciarSesion() {
	int opcion;
	printf("�Qu� desea hacer?\n");
	printf("1. Registrarse\n");
	printf("2. Iniciar sesi�n\n");
	printf("Ingrese el n�mero correspondiente: ");
	scanf("%d", &opcion);
	
	if (opcion == 1) {
		int tipoUsuario;
		printf("\nRegistrarse como:\n");
		printf("1. Estudiante\n");
		printf("2. Profesor\n");
		printf("Ingrese el n�mero correspondiente: ");
		scanf("%d", &tipoUsuario);
		
		char nombre[50];
		printf("\nIngrese su nombre: ");
		scanf("%s", nombre);
		
		int id = generarID();
		
		if (tipoUsuario == 1 || tipoUsuario == 2) {
			printf("\nRegistro exitoso.\n");
			printf("Nombre: %s\n", nombre);
			printf("ID generado: %d\n", id);
			return id;
		} else {
			printf("\nOpci�n no v�lida.\n");
			exit(EXIT_FAILURE);
		}
	} else if (opcion == 2) {
		printf("\nFuncionalidad de inicio de sesi�n no implementada.\n");
		exit(EXIT_FAILURE);
	} else {
		printf("\nOpci�n no v�lida.\n");
		exit(EXIT_FAILURE);
	}
}*/
