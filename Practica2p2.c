#include <stdio.h>
#include<stdlib.h>
//Declaración de los apuntadores
char *c;
int *i;        
double *d;
long *l;                           
float *f;
short *s;

int main()
{
    //Uso de la función malloc para crear variables anónimas a las que apunte cada uno de los apuntadores.
    i = (int *)malloc(sizeof(int));
    c = (char *)malloc(sizeof(char));
    d = (double *)malloc(sizeof(double));
    l = (long *)malloc(sizeof(long));
    f = (float *)malloc(sizeof(float));
    s = (short *)malloc(sizeof(short));
    //Impresión de la direccióon de memoria de las variables anónimas.
    printf("\nDireccion de memoria de la variable anonima para int: %p", i);
    printf("\nDireccion de memoria de la variable anonima para char: %p", c);
    printf("\nDireccion de memoria de la variable anonima para double: %p", d);
    printf("\nDireccion de memoria de la variable anonima para long: %p", l);
    printf("\nDireccion de memoria de la variable anonima para float: %p", f);
    printf("\nDireccion de memoria de la variable anonima para short: %p", s);
    
    //Asignación de valores para las variables anónimas por medio de los apuntadores.
    *i = 7;
    *c = 'c'; 
    *d = 124;
    *l = 123456789;
    *f = 12;
    *s = 25;
    //Impresión de los valores
    printf("\n\n\nValor de la variable anonima para int: %i", *i);
    printf("\nValor de la variable anonima para char: %c", *c);
    printf("\nValor de la variable anonima para double: %lf", *d);
    printf("\nValor de la variable anonima para long: %lf", *l);
    printf("\nValor de la variable anonima para float: %f", *f);
    printf("\nValor de la variable anonima para short: %d", *s);

    *i = 9;
    *c = 's'; 
    *d = 425;
    *l = 4569852;
    *f = 366;
    *s = 14; 

    printf("\n\n\nNuevo valor de la variable anonima para int: %i", *i);
    printf("\nNuevo valor de la variable anonima para char: %c", *c);
    printf("\nNuevo valor de la variable anonima para double: %lf", *d);
    printf("\nNuevo valor de la variable anonima para long: %ld", *l);
    printf("\nNuevo valor de la variable anonima para float: %f", *f);
    printf("\nNuevo valor de la variable anonima para short: %d", *s);

    free(i);
    free(c);
    free(d);
    free(l);
    free(f);
    free(s);
    
    return 0;
}
