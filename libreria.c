int menu()
{
    printf("\n1 - Suma.");
    printf("\n2 - Resta.");
    printf("\n3 - Division.");
    printf("\n4 - Multiplicacion.");
    printf("\n5 - Factorial.");
    printf("\n6 - Salir.\n");
    printf("\nElija una opcion: ");

    int opcion;
    scanf("%d", &opcion);

    return opcion;
}

int pedirDato()
{
    int dato;
    printf("Ingrese numero: ");
    scanf("%d", &dato);

    return dato;
}

int suma(int numUno, int numDos)
{
    int resultadoSuma;

    resultadoSuma = numUno + numDos;

    return resultadoSuma;
}

int resta(int numUno, int numDos)
{
    int resultadoSuma;

    resultadoSuma = numUno - numDos;

    return resultadoSuma;
}

int multiplicacion(int numUno, int numDos)
{
    int resultadoSuma;

    resultadoSuma = numUno * numDos;

    return resultadoSuma;
}

float division(int numUno, int numDos)
{
    float resultadoSuma;

    resultadoSuma = (float)numUno / (float)numDos;

    return resultadoSuma;
}

int factorial(int numero)
{
    int resultado;
    resultado = 1;

    int i;
    for(i = 1;i <= numero;i++)
    {
        resultado *= i;
    }
    return resultado;


}
