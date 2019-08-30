/*
 * nuevoArhivo.c
 *
 *  Created on: 29 ago. 2019
 *      Author: alumno
 */

int getNumero (int* num, int maximo, int minimo,int cantIntentos, char* mensaje, char* mensajeError){

	/*
// * yop - ANDA BIEN

	int contadorDeIntentos = 0;
	int numero;
	int retorno = -1;

	do{
		printf("%s", mensaje);
		scanf("%d",&numero);

		contadorDeIntentos++;
	}while((numero <= minimo || numero >= maximo) && contadorDeIntentos < cantIntentos );  //&& contadorDeIntentos <= reintentos

	*num = numero;

	if (contadorDeIntentos < cantIntentos){
		retorno = 0;
	};

	return retorno;


*/

	//PROFESOR
	int numero;
	int ret = -1;

	for (int i = 0; i <= cantIntentos ; i++){
		printf("%s", mensaje);
		scanf("%d",&numero);

		if (numero >= minimo && numero <= maximo){
			*num = numero;
			ret = 0;

			break;
		}else{
			printf("%s",mensajeError);
		}
	}

	return ret;


}

