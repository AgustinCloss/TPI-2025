#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "estructuras.h"

//void registrarGasto();
//void registrarIngreso();  acá vamos a poner los prototipos de las funciones, las cuales se van a encontrar en otro archivo
//...
//...

int main(){
	int opc,s=1, seguir;
	while (s){
		seguir = 1;
		printf("\n\nSistema de Gestion de Gastos Personales o Familiares\n--------MENU PRINCIPAL--------\n\n1. Registrar Gasto\n2. Registrar Ingreso\n3. Registrar Pago\n4. Listar Gastos e Ingresos\n5. Consultas y Reportes\n6. Salir\n\nElija una opcion: ");
		fflush(stdin);
		scanf("%d",&opc);
		switch (opc){
			case 1:
				system("cls");
				printf("---------\n1.REGISTRAR GASTO\n---------");
				while(seguir){
					//registrarGasto();
					printf("\nDesea registrar otro gasto? (1 si, 0 no): \t");
					fflush(stdin);
					scanf("%d", &seguir);
					while((seguir != 1) && (seguir != 0)){
						printf("\nOpcion invalida. Intentelo de nuevo.\n");
						printf("\nDesea registrar otro gasto? (1 si, 0 no): \t");
						fflush(stdin);
						scanf("%d", &seguir);
					}
				}
				break;
			case 2:
				system("cls");
				printf("---------\n2. REGISTRAR INGRESO\n---------");
				while(seguir){
					//registrarIngreso();
					printf("\nDesea registrar otro ingreso? (1 si, 0 no): \t");
					fflush(stdin);
					scanf("%d", &seguir);
					while((seguir != 1) && (seguir != 0)){
						printf("\nOpcion invalida. Intentelo de nuevo.\n");
						printf("\nDesea registrar otro ingreso? (1 si, 0 no): \t");
						fflush(stdin);
						scanf("%d", &seguir);
					}
				}
				break;
			case 3:
				system("cls");
				printf("---------\n3. REGISTRAR PAGO\n---------");
				while(seguir){
					//registrarPago();
					printf("\nDesea registrar otro pago? (1 si, 0 no): \t");
					fflush(stdin);
					scanf("%d", &seguir);
					while((seguir != 1) && (seguir != 0)){
						printf("\nOpcion invalida. Intentelo de nuevo.\n");
						printf("\nDesea registrar otro pago? (1 si, 0 no): \t");
						fflush(stdin);
						scanf("%d", &seguir);
					}
				}
				break;
			case 4:
				system("cls");
				printf("---------\n4. LISTAR GASTOS E INGRESOS\n---------");
				//Listar Gastos e Ingresos
				break;	
			case 5:
				system("cls");
				printf("---------\n5. CONSULTAS Y REPORTES\n---------");
				//Consultas y Reportes
				break;	
			case 6:
				printf("\nSALIENDO .....\n\n");
				s=0;
				break;			
			default:
				printf("Ingrese un numero valido");
		}
	}
	return 0;
}
