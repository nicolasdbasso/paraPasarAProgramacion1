/*
 ============================================================================
 Name        : Clase2_Laboratorio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "nuevoArchivo.h"
#define MAX_EDAD 20
#define MIN_EDAD 10
#define MAX_DNI 5000000
#define MIN_DNI 4000000

#define MSG_EDAD "Ingrese edad: "
#define MSG_DNI "Ingrese DNI: "
#define MSG_ERROR "Superaste el numero de intentos."


int getNumero (int* num, int maximo, int minimo,int cantIntentos, char* mensaje, char* mensajeError);

int main(void) {
	int dni;
	int edad;
	int reintentos = 3;

	if(getNumero(&dni, MAX_DNI, MIN_DNI, reintentos, MSG_EDAD, MSG_ERROR) == 0){
		printf("Es un DNI correcto.");
	};

	if (getNumero(&edad, MAX_EDAD, MIN_EDAD, reintentos, MSG_DNI, MSG_ERROR) == 0){
		printf("Es una edad correcta.");
	}
};



