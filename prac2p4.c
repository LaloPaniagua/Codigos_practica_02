#include <stdio.h>

int main(){
	int arr[10], *ptr;
	int j=1;
	for(int i=0;i<10;i++){
		arr[i]=j;
		j++;
	}
	arr[1]=5; //equivale a *(arr+1)=5
	for(int i=0;i<10;i++){
		printf("%d, ",arr[i]);
	}
	printf("\n\n");
	
	ptr = &arr[2];
	printf("ptr: %d\n", ptr);
	printf("*ptr: %d\n", *ptr);
	printf("ptr[0]: %d\n", ptr[0]);
	printf("*ptr+6: %d\n", *ptr+6);
	printf("*(ptr+6): %d\n", *(ptr+6));
	printf("ptr[-1]: %d\n", ptr[-1]);
	printf("ptr[9]: %d\n", ptr[9]);
	printf("Direccion arr: %p\n", &arr);
	printf("Direccion ptr:%p\n", &ptr);
	printf("Direccion que apunta ptr: %p\n", ptr);
	return 0xF;
}
/*
ptr: direccion de arr[2]=&arr[2]
*ptr: valor de arr[2]=0
ptr[0]: valor de *ptr=arr[2]=0
*ptr+6: valor de arr[2]+6=0+6=6
*(ptr+6):  valor de arr[8]=0
*ptr[-1]: es un error
ptr[-1]: valor de arr[1]=5
ptr[9]: valor fuera del arreglo ya que seria equivalente a arr[11] 

*/
// Codigo realizado por Diego Barragan Rivera en 11//03/2021
