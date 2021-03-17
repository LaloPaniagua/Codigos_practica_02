#include<stdio.h>
//Prototipos de las funciones
void sumar(double a,double b,double c);
void restar(double a,double b,double c);
void multiplicar(double a,double b,double c);
void dividir (double a,double b,double c);

int main()
	{
		char option;
		double *v1,*v2,*r,val1,val2,result;
		v1=&val1;
		v2=&val2;
		r=&result;
		printf("Seleccione la operación a realizar ingresando la letra correspondiente: \na)Suma\nb)Resta\nc)Multiplicación\nd)División\n\n");
		scanf("%c",&option);
		//Selección de la operación a realizar e ingreso de los valores (estos se almacenan en variables y son leídos por las funciones por medio de apuntadores		
		switch(option)
			{
				case 'a':
					printf("\nIngrese el primer valor ");
					scanf("%lf",&val1);
					printf("\nIngrese el segundo valor ");
					scanf("%lf",&val2);
					sumar(*v1,*v2,*r);
					break;
				case 'b':
					printf("\nIngrese el primer valor ");
					scanf("%lf",&val1);
					printf("\nIngrese el valor a restar ");
					scanf("%lf",&val2);
					restar(*v1,*v2,*r);
					break;
				case 'c':
					printf("\nIngrese el primer valor ");
					scanf("%lf",&val1);
					printf("\nIngrese el segundo valor ");
					scanf("%lf",&val2);
					multiplicar(*v1,*v2,*r);
					break;
				case 'd':
					printf("\nIngrese el dividendo ");
					scanf("%lf",&val1);
					printf("\nIngrese el divisor ");
					scanf("%lf",&val2);
					dividir(*v1,*v2,*r);
					break;
				default:
					printf("\nNo se ha seleccionado una opción válida");
					break;
			}
	}

void sumar(double a,double b,double c){ //Función suma
    c=a+b;
    printf("El resultado es: %f",c);
}
void restar(double a,double b,double c){ //Función resta
    c=a-b;
    printf("El resultado es: %f",c);
}
void multiplicar(double a,double b,double c){ //Función multiplicar
    c=a*b;
    printf("El resultado es: %f",c);
}
void dividir (double a,double b,double c){ //Función dividir (contemplando el caso de la divisióon entre cero
    if(b!=0)
    	{
    		c=a/b;
    		printf("El resultado es: %f",c);
		}
	else
		printf("El divisor no puede valer cero");
}
// Programa realizado Por Eduardo Miguel paniagua Broca y Diego Barragán Rivera el 11/3/2021
