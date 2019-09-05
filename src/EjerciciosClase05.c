/*
 ============================================================================
 Name        : EjerciciosClase05.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define LIMIT 5
int sumaArray (int *pArray, int limite, int *resultado);
int maximoEnArray (int *pArray, int limite, int *maximo);
int menorEnArray (int *pArray, int limite, int *menor);
int promedioEnArray(int *pArray, int limite, int *promedio);
int ordenaArray (int *pArray, int limite);
//int copiarArrayInt (int *pArray, int limite, *pArrayCopia);
int printArrayInt(int *pArray , int limite);

int main(void) {

	int edades[LIMIT] = {300,100,200,500,400};

/*	int menor, maximo, resultado, promedio;

	if (menorEnArray (edades, LIMIT, &menor) == 0){
		printf("%i",menor);
	}

	if (maximoEnArray (edades, LIMIT, &maximo) == 0){
			printf("%i",maximo);
		}

	if (sumaArray (edades, LIMIT, &resultado) == 0){
			printf("%i",resultado);
		}

	if (promedioEnArray(edades, LIMIT, &promedio) == 0){
			printf("%i",promedio);
		}
*/

	if (ordenaArray (edades,LIMIT) == 0){
		printf("El array está ordenado: ");
		printArrayInt(edades, LIMIT);
	}




}


int printArrayInt(int *pArray , int limite)
{
	int retorno = -1;
	int i;
	printf("\nDEBUG IMPRIMIENDO\n");
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			printf("\n\t%i",pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}


int sumaArray (int *pArray, int limite, int *resultado){
	int result = 0;

	int retorno = -1;
	int i;
	printf("\nDEBUG SUMA\n");
	if(pArray != NULL && limite > 0)
	{
		for(i=0;i<limite;i++)
		{
			result = result + pArray[i];
		}
		*resultado = result;
		retorno = 0;
	}
	return retorno;

}

int maximoEnArray (int *pArray, int limite, int *maximo){
	int max;

	int retorno = -1;
	int i;
	printf("\nDEBUG MAXIMO\n");
	if(pArray != NULL && limite > 0)
	{
		max = pArray[0];
		for(i=0;i<limite;i++)
		{
			if (max < pArray[i])
			max = pArray[i];
		}
		*maximo = max;
		retorno = 0;
	}
	return retorno;

}


int menorEnArray (int *pArray, int limite, int *menor){
	int men;

	int retorno = -1;
	int i;
	printf("\nDEBUG MENOR\n");
	if(pArray != NULL && limite > 0)
	{
		men = pArray[0];
		for(i=0;i<limite;i++)
		{
			if (men > pArray[i])
			men = pArray[i];
		}
		*menor = men;
		retorno = 0;
	}
	return retorno;

}


int promedioEnArray(int *pArray, int limite, int *promedio){

	int resultado;
	int prome;
	int retorno = -1;
	prome = 0;
	printf("\nDEBUG MENOR\n");
	if (sumaArray(pArray,limite,&resultado) == 0){
		prome = resultado / limite;
		retorno = 0;
	}

	return retorno;


}


int ordenaArray (int *pArray, int limite){
	int *arrayLocal;
	arrayLocal = pArray;
	int i, j, aux;
	int retorno = -1;



	printf("\nDEBUG ARRAY ORDENADO\n");
		if(pArray != NULL && limite > 0)
		{

			for(i=0;i<limite;i++)
			{

				for (j = i+1; j <limite; j++){
					if(arrayLocal[i] > arrayLocal[j]){
						aux = arrayLocal[i];
						arrayLocal[i] = arrayLocal[j];
						arrayLocal[j] = aux;
					}
				}
			}

			retorno = 0;
		}
		return retorno;

}

/*
int copiarArrayInt (int *pArray, int limite, *pArrayCopia){
	int i;
	int retorno = -1;

		printf("\nDEBUG ARRAY COPIADO\n");
		if(pArray != NULL && limite > 0)
		{
			for(i=0;i<limite;i++)
			{
				*pArrayCopia[i] = pArray[i];
			}
			retorno = 0;
		}
		return retorno;

}*/
