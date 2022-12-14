/*
 * Passenger.h
 *
 *  Created on: 19 may. 2022
 *
 */

#ifndef PASSENGER_H_
#define PASSENGER_H_

#include "LinkedList.h"

typedef struct
{
	int id;
	char nombre[50];
	char apellido[50];
	float precio;
	int tipoPasajero;
	char codigoVuelo[10];
	int estadoVuelo;
	int isEmpty;

}Passenger;

Passenger* Passenger_new();
Passenger* Passenger_newParametros(char* idStr,char* nombreStr,char* apellidoStr,char* precioStr, char* codigoStr, char* tipoPasajeroStr, char* estadoVueloStr);
void Passenger_delete(Passenger* this);

int removePassenger(LinkedList* pArrayListPassenger);

int Passenger_setId(Passenger* this,int id);
int Passenger_getId(Passenger* this,int* id);

int Passenger_setNombre(Passenger* this,char* nombre);
int Passenger_getNombre(Passenger* this,char* nombre);

int Passenger_setApellido(Passenger* this,char* apellido);
int Passenger_getApellido(Passenger* this,char* apellido);

int Passenger_setCodigoVuelo(Passenger* this,char* codigoVuelo);
int Passenger_getCodigoVuelo(Passenger* this,char* codigoVuelo);

int Passenger_setTipoPasajero(Passenger* this,int tipoPasajero);
int Passenger_getTipoPasajero(Passenger* this,int* tipoPasajero);

int Passenger_setPrecio(Passenger* this,float precio);
int Passenger_getPrecio(Passenger* this,float* precio);

int Passenger_setEstadoVuelo(Passenger* this, int estadoVuelo);
int Passenger_getEstadoVuelo(Passenger* this, int* estadoVuelo);

int Passenger_add(LinkedList* pListaPasajeros);
Passenger* loadPassenger(void);

int Passenger_modify(LinkedList* pListaPasajeros);
int Passenger_buscarPorId(LinkedList* pListaPasajeros);
#endif /* PASSENGER_H_ */
