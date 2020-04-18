#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"
int main()
{
    int numUno;
    int numDos;
    int opciones;
    int totalSuma;
    int totalResta;
    float totalDivision;
    int totalMultiplicacion;
    int totalFactorialUno;
    int totalFactorialDos;

    numUno = pedirDato();
    numDos = pedirDato();

    opciones = menu();
    while(opciones < 1 || opciones > 6)
    {
        system("cls");
        printf("Error. Ingrese un numero valido.\n");
        opciones = menu();
    }

    //system("cls");

    switch(opciones)
    {
        case 1:
            totalSuma = suma(numUno,numDos);
            printf("\nEl resultado de %d + %d es: %d",numUno, numDos, totalSuma);
            break;
        case 2:
            totalResta = resta(numUno,numDos);
            printf("\nEl resultado de %d - %d es: %d",numUno, numDos, totalResta);
            break;
        case 3:
            if(numDos != 0)
            {
                totalDivision = division(numUno,numDos);
                printf("\nEl resultado de %d / %d es: %f",numUno, numDos, totalDivision);
            }
            else
            {
                printf("\nERROR. No se puede dividir por 0.");
            }
            break;
        case 4:
            totalMultiplicacion = multiplicacion(numUno,numDos);
            printf("\nEl resultado de %d * %d es: %d",numUno, numDos, totalMultiplicacion);
            break;
        case 5:
            totalFactorialUno= factorial(numUno);
            totalFactorialDos = factorial(numDos);
            printf("\nEl factorial de %d es: %d y el factorial %d es: %d",numUno, totalFactorialUno, numDos, totalFactorialDos);
            break;
    }

    return 0;
}
