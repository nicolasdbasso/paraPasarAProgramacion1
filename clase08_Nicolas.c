/*
 ============================================================================
 Name        : clase08_Nicolas.c
 Author      : JulioB
 Version     :
 Copyright   : glp 3
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int validaNumero (char numeros[]);

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	return EXIT_SUCCESS;
	char numeros [50];

	fgets(numeros, sizeof (numeros), stdin);
	length =  strlen (numeros);



}

int validaNumero (char numeros[]){
	int length = srtlen(numeros);
	int i;
	int retorno;

	retorno = 0;

	for (i = 0 ; i < length ; i++){
		if (numeros[i] < '0' || numeros [i] > '9'){
			retorno = -1;
			break;
		}
	}
	return retorno;
}

int validaNumeroNegativo (char numeros[]){
	int length = srtlen(numeros);
	int i;
	int retorno;

	retorno = 0;

	for (i = 0 ; i < length ; i++){
		if (numeros[i] < '0' || numeros [i] > '9'){
			if (numeros[i] == '-' && i == 0){
				continue;
			}
			retorno = -1;
			break;
		}
	}
	return retorno;
}
