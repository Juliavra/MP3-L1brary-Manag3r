#ifndef __DATA
#define __DATA


#include "linkedlist.h"

typedef struct
{
    char nombreArtista [128];
    int anioEdicion;
    char tituloDisco [256];
    int trackNro;
    char tituloTema [256];
} sData;



///**************************************************************************************************************************
///**************************************************************************************************************************
///         DECLARACION FUNCIONES


sData* sData_new(void);  ///Reserves space for 1 Data Pack

sData* sData_newParametros(char* nombreArtista,char* anioEdicion,char* tituloDisco ,char* trackNro, char* tituloTema);

int sData_setArtistName(sData* this,char* nombreArtista);
int sData_getArtistName(sData* this,char* nombreArtista);
int sData_setanioEdicion(sData* this, int anioEdicion);
int sData_getanioEdicion(sData* this,int* anioEdicion);
int sData_settituloDisco(sData* this,char* tituloDisco);
int sData_gettituloDisco(sData* this,char* tituloDisco);
int sData_settrackNro(sData* this, int trackNro);
int sData_gettrackNro(sData* this,int* trackNro);
int sData_settituloTema(sData* this,char* tituloTema);
int sData_gettituloTema(sData* this,char* tituloTema);

#endif

