#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
//#include "data.h"
#include "linkedlist.h"


/** \brief Carga los datos de los empleados desde el archivo data.csv (modo texto).
 *
 * \param path char*
 * \param pArrayListEmployee LinkedList*
 * \return int
 *
 */
int controller_loadFromText(char* path , LinkedList* pArrayList){
    FILE *pFile;
    int retorno = 0;
    if ((pFile = fopen(path, "r"))!=NULL)
        retorno = parser_sDataFromText(pFile, pArrayList);
    fclose(pFile);
    return retorno;
}/**< FINALIZADO */

///------------------------------------------------------------------------------------------------------------

