#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


typedef struct{
	unsigned long long codGasto;
	char tipoGasto[50];
	char desc[50];
	char categoria[50];
	double monto;
	double fechaGasto;
	int cuotasTotales;
	int cuotasPagadas;
	unsigned long long idPers;
	
} Gasto;

typedef struct{
	unsigned long long codGasto;
	char medioPago[40];
	double importe;
	double fechaPago;
	
} Pago;

typedef struct{
	char concepto[50];
	double monto;
	double fecha;
	unsigned long long idPers;
	
} Ingreso;

typedef struct{
	unsigned long long cod;
	char nombre[50];
	
} Categoria;

typedef struct{
	unsigned long long id;
	long long dni;
	char nombre[50];
	
} Persona;

void registrarGasto();
//void registrarIngreso();  acá van los prototipos de las funciones
//void registrarPago();
//...
//...

int main(){
	int opc,s=1;
	while (s){
		system("cls");
		printf("\n\nSistema de Gestion de Gastos Personales o Familiares\n--------MENU PRINCIPAL--------\n\n1. Registrar Gasto\n2. Registrar Ingreso\n3. Registrar Pago\n4. Listar Gastos e Ingresos\n5. Consultas y Reportes\n6. Salir\n\nElija una opcion: ");
		fflush(stdin);
		scanf("%d",&opc);
		switch (opc){
			case 1:
				system("cls");
				printf("---------\n1.REGISTRAR GASTO\n---------");
				registrarGasto();
				break;
			case 2:
				system("cls");
				printf("---------\n2. REGISTRAR INGRESO\n---------");
			    //registrarIngreso();
				break;
			case 3:
				system("cls");
				printf("---------\n3. REGISTRAR PAGO\n---------");
				//registrarPago();
				break;
			case 4:
				system("cls");
				printf("---------\n4. LISTAR GASTOS E INGRESOS\n---------");
				//listarGastoseIngresos();
				break;	
			case 5:
				system("cls");
				printf("---------\n5. CONSULTAS Y REPORTES\n---------");
				//consultasyReportes();
				break;	
			case 6:
				printf("\nSALIENDO .....\n\n");
				s=0;
				break;			
			default:
				printf("\nIngrese un numero valido\n");
		}
	}
	return 0;
}

void registrarGasto(){
	int opc, s=1, seguir;
	while(s){
	    system("cls");
		printf("\nEscoja el tipo de gasto a registrar:\n\n1. Gasto Fijo\n2. Gasto Ocasional\n3. Gasto Temporal\n4. Gasto Anual\n5. Volver al Menu Principal\n\nElija una opcion: ");
		fflush(stdin);
		scanf("%d",&opc);
		switch(opc){
			case 1:
				//Gasto Fijo...
				//¿registrarGastoFijo()?
				break;
			case 2:
				//Gasto Ocasional...
				//¿registrarGastoOcasional()?
				break;	
			case 3:
				//Gasto Temporal...
				//¿registrarGastoTemporal()?
				break;
			case 4:
				//Gasto Anual..
				////¿registrarGastoAnual()?
				break;
			case 5:	
				printf("\nVOLVIENDO .....\n\n");
				s=0;
				break;	
			default:
				printf("\nIngrese un numero valido\n");			
		}
		
		if(s){
			if((opc >= 1) && (opc <= 5)){
				system("cls");
				printf("\nDesea registrar otro gasto? (1 si, 0 no): \t ");
				fflush(stdin);
				scanf("%d", &opc);
				while((opc != 1) && (opc != 0)){
					system("cls");
					printf("\nOpcion invalida. Intentelo de nuevo.\n");
					printf("\nDesea registrar otro gasto? (1 si, 0 no): \t ");
					fflush(stdin);
					scanf("%d", &opc);
				}
				if(!opc){
					s = 0;
				}
			}
		}
		
	}
}


