/*
 ============================================================================
 Name        : RecuperatorioBelucciSofia1g.c
 Author      : Sofia Belucci
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	int id;
	char nombre[20];
	int infectados;
	int recuperados;
	int muertos;

}ePais;

int invertirCadena(char cadena[]);
int ordenarCaracteres(char cadena[]);
//void actualizarRecuperados(ePais pais[], int recuperadosDia);

int main(void) {
	setbuf(stdout, NULL);

	/*
	char string[] = "UTN-FRA";

	invertirCadena(string);
	*/

	/*
	char cadena[] = "Algoritmos";

	ordenarCaracteres(cadena);
	*/



	return 0;
}



/*
void actualizarRecuperados(ePais pais[], int recuperadosDia)
{
	int tam = strlen(pais);

	ePais lista[1] = {1, "Irlanda", 12, 12, 23};

	if(pais!= NULL)
	{
		for(int i = 0; i < tam; i++)
		{
			if(strcmp(pais[i].nombre, lista[i].nombre) == 0)
			{

				pais[i].recuperados += recuperadosDia;
				pais[i].infectados -= recuperadosDia;


			}

		}


	}

}
*/

int invertirCadena(char cadena[])
{
	int todoOk = 0;
	int tam = strlen(cadena);

	if(cadena != NULL)
	{
		for(int i = tam + 1; i >= 0; i--)
		{
			printf("%c", cadena[i]);
		}


		todoOk = 1;

	}

	return todoOk;
}


int ordenarCaracteres(char cadena[])
{
	int todoOk = 0;
	int tam = strlen(cadena);
	char aux;

	if(cadena != NULL)
	{

		for (int i = 0; i < tam - 1; i++) {

				for (int j = i + 1; j < tam; j++) {
					if (cadena[i] > cadena[j]) {

						aux = cadena[i];
						cadena[i] = cadena[j];
						cadena[j] = aux;



					}
				}
		}

		printf("%s", cadena);



		todoOk = 1;
	}



return todoOk;
}


