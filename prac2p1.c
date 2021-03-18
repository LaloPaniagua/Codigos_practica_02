#include<stdio.h>
// Se declaran una variable y un apuntadr de cada tipo de dato.
int a,*b;
char c,*d;
double e,*f;
long g,*h;
float i,*j;
short k,*l;
int main(){
   // Se apuntan los apuntadores hacia las variables por medio del '&'
    b=&a;
    d=&c;
    f=&e;
    h=&g;
    j=&i;
    l=&k;
    //Se manda a imprimir las direcciones de cada variable y apuntador para probar que son las mismas.
    printf("Direccion a: %p\n",&a);
    printf("Direccion *b: %p\n",b);
    printf("Direccion c: %p\n",&c);
    printf("Direccion *d: %p\n",d);
    printf("Direccion e: %p\n",&e);
    printf("Direccion *f: %p\n",f);
    printf("Direccion g: %p\n",&g);
    printf("Direccion *h: %p\n",h);
    printf("Direccion i: %p\n",&i);
    printf("Direccion *j: %p\n",j);
    printf("Direccion k: %p\n",&k);
    printf("Direccion *l: %p\n\n",l);
    //se le asigna un valor a cada variable directamente
    a=1;
    c='A';
    e=3;
    g=4;
    i=5;
    k=6;
    //Se manda todo a imprimir para probar que los valores de los apuntadores y las variables sean iguales
    printf("Valores\n");
    printf("Valor a: %d\n",a);
    printf("Valor b: %d\n",*b);
    printf("Valor c: %c\n",c);
    printf("Valor d: %c\n",*d);
    printf("Valor e: %lf\n",e);
    printf("Valor f: %lf\n",*f);
    printf("Valor g: %ld\n",g);
    printf("Valor h: %ld\n",*h);
    printf("Valor i: %f\n",i);
    printf("Valor j: %f\n",*j);
    printf("Valor k: %d\n",k);
    printf("Valor l: %d\n",*l);
    printf("\n\n");
    //Se asignan valores por medio de los apuntadores
    *b=2;
    *d='B';
    *f=4;
    *h=5;
    *j=6;
    *l=7;
     //Se manda todo a imprimir para probar que los valores de los apuntadores y las variables sean iguales
    printf("Valores cambiados por medio de apuntadores\n");
    printf("Valor a: %d\n",a);
    printf("Valor b: %d\n",*b);
    printf("Valor c: %c\n",c);
    printf("Valor d: %c\n",*d);
    printf("Valor e: %lf\n",e);
    printf("Valor f: %lf\n",*f);
    printf("Valor g: %ld\n",g);
    printf("Valor h: %ld\n",*h);
    printf("Valor i: %f\n",i);
    printf("Valor j: %f\n",*j);
    printf("Valor k: %d\n",k);
    printf("Valor l: %d\n",*l);

return 0xF;
}
// Realizado por Diego Barragan Rivera y Eduardo Paniagua Broca en 11/03/2021
