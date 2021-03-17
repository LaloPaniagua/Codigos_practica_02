#include <stdio.h>
#include<stdlib.h>

char *c;
int *i;        
double *d;
long *l;                           
float *f;
short *s;

int main()
{

    i = (int *)malloc(sizeof(int));
    c = (char *)malloc(sizeof(char));
    d = (double *)malloc(sizeof(double));
    l = (long *)malloc(sizeof(long));
    f = (float *)malloc(sizeof(float));
    s = (short *)malloc(sizeof(short));

    printf("\nDireccion de memoria de la variable anomina para int: %p", i);
    printf("\nDireccion de memoria de la variable anomina para char: %p", c);
    printf("\nDireccion de memoria de la variable anomina para double: %p", d);
    printf("\nDireccion de memoria de la variable anomina para long: %p", l);
    printf("\nDireccion de memoria de la variable anomina para float: %p", f);
    printf("\nDireccion de memoria de la variable anomina para short: %p", s);

    i = 7;
    c = 'c'; 
    d = 124;
    l = 123456789;
    f = 12;
    s = 25;

    printf("\n\n\nValor de la variable anomina para int: %i", i);
    printf("\nValor de memoria de la variable anomina para char: %c", c);
    printf("\nValor de memoria de la variable anomina para double: %lf", d);
    printf("\nValor de memoria de la variable anomina para long: %lf", l);
    printf("\nValor de memoria de la variable anomina para float: %f", f);
    printf("\nValor de memoria de la variable anomina para short: %d", s);

    *i = 9;
    *c = 's'; 
    *d = 425;
    *l = 4569852;
    *f = 366;
    *s = 14; 

    printf("\n\n\nNuevo valor de memoria de la variable anomina para int: %i", i);
    printf("\nNuevo valor de memoria de la variable anomina para char: %c", c);
    printf("\nNuevo valor de memoria de la variable anomina para double: %lf", d);
    printf("\nNuevo valor de memoria de la variable anomina para long: %ld", l);
    printf("\nnNuevo valor de memoria de la variable anomina para float: %f", f);
    printf("\nnNuevo valor de memoria de la variable anomina para short: %d", s);

    free(i);
    free(c);
    free(d);
    free(l);
    free(f);
    free(s);

    system("pause");
    getchar();
    getchar();
    return 0;
}