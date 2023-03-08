#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

	struct producto{
		int codigo;
		char descripcion[40];
		float precio;
		float descuento;
		char fecha_de_vencimiento[30];
		int existencia;
		}Producto[5];
		
	int main(){
	for(int i=0;i<5;i++){
		fflush(stdin);
		printf("Producto %i. Ingresa el codigo:",i+1);
		scanf("%i",&Producto[i].codigo);
		fflush(stdin);
		printf("\nProducto %i. Ingresa la descripcion:",i+1);
		gets(Producto[i].descripcion);
		fflush(stdin);
		printf("\nProducto %i. Ingrese el precio:",i+1);
		scanf("%f",&Producto[i].precio);
		
		printf( "\nProducto %i. Descuento del producto:",i+1);
		scanf("%f",&Producto[i].descuento);
		fflush(stdin);
		printf("\nProducto %i. Fecha de vencimiento:",i+1);
		gets(Producto[i].fecha_de_vencimiento);
		
		printf("\nProducto %i. Existencia del producto:",i+1);
		scanf("%i",&Producto[i].existencia);
		
		printf("\n");
				fflush(stdin);
		
	}
	for(int i=0;i<5;i++){
		printf("\n\n Datos del producto # %i",i+1);
		
		printf("\nCodigo:%i",Producto[i].codigo);
		
		printf("\nDescripcion:%s",Producto[i].descripcion);
		
		printf("\nPrecio:%2.f",Producto[i].precio);
		
		printf("\nDescuento:%2.f",Producto[i].descuento);
		
		printf("\nFecha de vencimiento:%s",Producto[i].fecha_de_vencimiento);
		
		printf("\nExistencia:%i",Producto[i].existencia);
		
		}
		return 0;	
	}