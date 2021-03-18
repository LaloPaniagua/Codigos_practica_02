#include<stdio.h>
//Prototipos de las funciones
void sumar(double *a,double *b,double *c);
void restar(double *a,double *b,double *c);
void multiplicar(double *a,double *b,double *c);
void dividir (double *a,double *b,double *c);

int main()
	{
		//Declaración de las variables y de sus apuntadores coorrespondientes
		char option;
		double *v1,*v2,*r,val1,val2,result;
		v1=&val1;
		v2=&val2;
		r=&result;
		printf("Seleccione la operaciÃ³n a realizar ingresando la letra correspondiente: \na)Suma\nb)Resta\nc)MultiplicaciÃ³n\nd)DivisiÃ³n\n\n");
		scanf("%c",&option);
		//Selección de la ooperación a realizar		
		switch(option)
			{
				case 'a':
					printf("\nIngrese el primer valor ");
					scanf("%lf",&val1);
					printf("\nIngrese el segundo valor ");
					scanf("%lf",&val2);
					sumar(v1,v2,r);
					break;
				case 'b':
					printf("\nIngrese el primer valor ");
					scanf("%lf",&val1);
					printf("\nIngrese el valor a restar ");
					scanf("%lf",&val2);
					restar(v1,v2,r);
					break;
				case 'c':
					printf("\nIngrese el primer valor ");
					scanf("%lf",&val1);
					printf("\nIngrese el segundo valor ");
					scanf("%lf",&val2);
					multiplicar(v1,v2,r);
					break;
				case 'd':
					printf("\nIngrese el dividendo ");
					scanf("%lf",&val1);
					printf("\nIngrese el divisor ");
					scanf("%lf",&val2);
					dividir(v1,v2,r);
					break;
				default:
					printf("\nNo se ha seleccionado una opciÃ³n vÃ¡lida");
					break;
			}
	}
//Codificación de las funciones correspondientes a cada operación
void sumar(double *a,double *b,double *c){
   * c=*a+*b;
    printf("El resultado es: %f",*c);
}
void restar(double *a,double *b,double *c){
    *c=*a-*b;
    printf("El resultado es: %f",*c);
}
void multiplicar(double *a,double *b,double *c){
    *c=*a * *b;
    printf("El resultado es: %f",*c);
}
void dividir (double *a,double *b,double *c){
    if(*b!=0)
    	{
    		*c=*a / *b;
    		printf("El resultado es: %f",*c);
		}
	else
		printf("El divisor no puede valer cero");
}
// Programa realizado Por Eduardo Miguel Paniagua Broca y Diego Barragán Rivera el 11/3/2021
