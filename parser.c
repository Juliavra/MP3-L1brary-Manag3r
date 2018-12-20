


#include <stdio.h>
#include <stdlib.h>

#include "linkedlist.h"
#include "data.h"


/*
#include <conio.h>
#include <string.h>


#include "controller.h"
*/










///-------------------------------------------------------------------------------------------------------------------------
///---------PARSER--------------PARSER-------------------PARSER-----------------------PARSER--------------PARSER------------
///-------------------------------------------------------------------------------------------------------------------------

/** \brief Parsea los datos los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayList LinkedList*
 * \return int
 *
 */

int parser_sDataFromText(FILE* pFile , LinkedList* pArrayList)
{
    char nombreArtista [128], anioEdicion [6], tituloDisco [256], trackNro[3], tituloTema [256];  ///   LOS INT DEBEN TENER TAMAÑOS MENORES
    sData *auxData = sData_new();
    sData *pData;
    int cantidad, retorno = 1, r[5];
    fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",nombreArtista,anioEdicion,tituloDisco,trackNro, tituloTema);

printf("\nartista:%s\n", nombreArtista);
printf("\nanio:%s\n", anioEdicion);
printf("\ntitulo:%s\n",tituloDisco);
printf("\ntrack nro:%s\n",trackNro);
printf("\n  tema:%s\n",tituloTema);



printf("acaaaaaaa");



    while(!feof(pFile))
   {
        cantidad = fscanf(pFile,"%[^,],%[^,],%[^,],%[^,],%[^\n]\n",nombreArtista,anioEdicion,tituloDisco,trackNro, tituloTema);
        if(cantidad == 5)
        {
            r[0] = sData_setArtistName(auxData,nombreArtista);
            r[1] = sData_setanioEdicion(auxData, atoi(anioEdicion));
            r[2] = sData_settituloDisco(auxData,tituloDisco);
            r[3]= sData_settrackNro(auxData, atoi(trackNro));
            r[4]= sData_settituloTema(auxData, tituloTema);

            ///HACER VALIDACION INDIVIDUAL PARA CORREGIR ERRORES DE MANERA INDIVIDUAL
            if (r[0] && r[1] && r[2] && r[3] && r[4])
            {
                pData = sData_newParametros(nombreArtista,anioEdicion,tituloDisco,trackNro, tituloTema);
                if (pData != NULL)
                {
                    ///HAY QUE HACER LA FUNCION LLADD Q AGREGA EL PDATA AL FINAL DEL TREN
                   /// ll_add(pArrayList,pData);
                }
                else
                {
                    printf("No se pudo conseguir memoria libre.");
                }

            }
        }
        else
            retorno = 0;
    }
    free(pData);
    free(auxData);
    return retorno;
}

///--------------------------------------------------------------------------------------------------------------------
///--------------------------------------------------------------------------------------------------------------------

