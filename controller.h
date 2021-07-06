#ifndef CONTROLLER_H_INCLUDED
#define CONTROLLER_H_INCLUDED
#include "pais.h"

int controller_inputData(void* pElement, int (*pFuncSet) (void*, char*), char * descripcion);
int controller_cargarArchivoTexto(LinkedList* listaPaises);
int controller_ListarPaises(LinkedList* listaPaises);
int controller_mostrarPais(ePais * pais);
LinkedList* controller_asignarEstadistica(LinkedList* this);
int controller_filtrarPorPaisesExitosos(LinkedList* this);
int controller_filtrarPorPaisesEnElHorno(LinkedList* this);
int controller_GuardarTexto(LinkedList* listaPaises);
int controller_OrdenarPorNivelVacu(LinkedList* this);
int controller_OrdenarPorNivelVacu(LinkedList* this);
int controller_MostrarPaisMasCastigado(LinkedList* this);

#endif // CONTROLLER_H_INCLUDED
