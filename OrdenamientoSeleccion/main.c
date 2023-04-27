#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <time.h>

Pila ordenarArreglo(int a[],Pila uno, Pila * dos, Pila * tres, int dimension);

int main()
{
    Pila uno;
    inicpila(&uno);
    Pila dos;
    inicpila(&dos);
    Pila tres;
    inicpila(&tres);
    srand(time(NULL));
    int dimension = 60, i = 0;
    int arreglo[dimension];
    cargarArreglo(arreglo, dimension);
    for(i=0; i<dimension; i++)
    {
        printf(" -%d- ", arreglo[i]);
    }

    uno = ordenarArreglo(arreglo, uno, &dos, &tres, dimension);
    mostrar(&uno);
    mostrar(&dos);
    mostrar(&tres);
    return 0;
}

void cargarArreglo(int a[], int dimension)
{
    int numero, i=0;
    while(i<dimension)
    {
        numero = rand()%61;
        a[i] = numero;
        i++;
    }
}

Pila ordenarArreglo(int a[],Pila uno, Pila * dos, Pila * tres, int dimension){
int i = 0;
while(i<dimension){
    if(a[i] <= 20){
        apilar(&uno, a[i]);
    }

    if(a[i] > 20 && a[i] <= 40){
        apilar(dos, a[i]);
    }

    if(a[i] > 40 && a[i] <= 60){
        apilar(tres, a[i]);
    }
    i++;
}
return uno;

