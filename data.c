#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#include "data.h"
#include "linkedlist.h"
///*****************************************************************************************************************************************************
///*****************************************************************************************************************************************************
/// COPIA DE EMPLOYEE TP 3

///------------------------------------------------------------------------------------------------------------
/** \brief Reserves space for 1 Data Pack
 *
 * \param void
 * \return Data Pack
 *
 */

 sData* sData_new(void)
{
    return (sData *)calloc(1, sizeof(sData));
}

///BORRAR CUANDO FUNCIONE EN DATA
/*
Employee *employee_new()
{
    return (Employee*)calloc(1, sizeof(Employee));
}
*/
///------------------------------------------------------------------------------------------------------------

sData* sData_newParametros(char* nombreArtista,char* anioEdicion,char* tituloDisco ,char* trackNro, char* tituloTema)
{
    sData* pData= sData_new();
    if(pData != NULL)
        {
        strncpy(pData->nombreArtista, nombreArtista, 128);
        pData->anioEdicion = atoi(anioEdicion);
        strncpy(pData->tituloDisco, tituloDisco, 256);
        pData->trackNro = atoi(trackNro);
        strncpy(pData->tituloTema, tituloTema, 256);

        }
    return pData;
}

///------------------------------------------------------------------------------------------------------------

int sData_setArtistName(sData* this,char* nombreArtista)
{
    int rtn = 0;
    if (strlen(nombreArtista) > 0 && this != NULL)
    {
        strncpy(this->nombreArtista, nombreArtista, 128);
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_getArtistName(sData* this,char* nombreArtista)
{
    int rtn = 0;
    if (strlen(this->nombreArtista) > 0 && this != NULL){
        strncpy(nombreArtista, this->nombreArtista, 128) ;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_setanioEdicion(sData* this, int anioEdicion)
{
    int rtn = 0;
    if (anioEdicion>= 1900 && this != NULL){
        this->anioEdicion= anioEdicion;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_getanioEdicion(sData* this,int* anioEdicion)
{
    int rtn = 0;
    if (anioEdicion!= NULL && this != NULL){
        *anioEdicion = this->anioEdicion;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_settituloDisco(sData* this,char* tituloDisco)
{
    int rtn = 0;
    if (strlen(tituloDisco) > 0 && this != NULL){
        strncpy(this->tituloDisco, tituloDisco, 256);
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_gettituloDisco(sData* this,char* tituloDisco)
{
    int rtn = 0;
    if (strlen(this->tituloDisco) > 0 && this != NULL){
        strncpy(tituloDisco, this->tituloDisco, 256) ;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_settrackNro(sData* this, int trackNro)
{
    int rtn = 0;
    if (trackNro>= 1 && this != NULL){
        this->trackNro= trackNro;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_gettrackNro(sData* this,int* trackNro)
{
    int rtn = 0;
    if (trackNro!= NULL && this != NULL){
        *trackNro = this->trackNro;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_settituloTema(sData* this,char* tituloTema)
{
    int rtn = 0;
    if (strlen(tituloTema) > 0 && this != NULL){
        strncpy(this->tituloTema, tituloTema, 256);
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------

int sData_gettituloTema(sData* this,char* tituloTema)
{
    int rtn = 0;
    if (strlen(this->tituloTema) > 0 && this != NULL){
        strncpy(tituloTema, this->tituloTema, 256) ;
        rtn = 1;
    }
    return rtn;
}

///------------------------------------------------------------------------------------------------------------
///------------------------------------------------------------------------------------------------------------

/*
int employee_sortById(void* auxEmployee1, void* auxEmployee2){
    int rtn = 0;
    if(((Employee*)auxEmployee1)->id<((Employee*)auxEmployee2)->id)
        rtn = 1;
    return rtn;
}
*/
/*
int employee_sortByName(void* auxEmployee1, void* auxEmployee2){
    int rtn = 0;
    if(strcmp(((Employee*)auxEmployee1)->name, ((Employee*)auxEmployee2)->name) > 0)
        rtn = 1;
    return rtn;
}
*/
/*
int employee_sortBySalary(void* auxEmployee1, void* auxEmployee2){
    int rtn = 0;
    if(((Employee*)auxEmployee1)->salary<((Employee*)auxEmployee2)->salary)
        rtn = 1;
    return rtn;
}
*/
/*
int employee_sortByHoursWorked(void* auxEmployee1, void* auxEmployee2){
    int rtn = 0;
    if(((Employee*)auxEmployee1)->hoursWorked<((Employee*)auxEmployee2)->hoursWorked)
        rtn = 1;
    return rtn;
}
*/

///-------------------------------------------------------------------------------------------------------------------------

