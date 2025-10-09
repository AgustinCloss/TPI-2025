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
void listarGastoseIngresos();
void consultasyReportes();

int main(){
	int opc,s=1;
	while (s){
		system("cls");
		printf("\n\nSistema de Gestion de Gastos Personales o Familiares\n--------MENU PRINCIPAL--------\n\n1. Registrar Gasto\n2. Registrar Ingreso\n3. Registrar Pago\n4. Listar Gastos e Ingresos\n5. Consultas y Reportes\n6. Agregar Categoria\n7. Salir\n\nElija una opcion: ");
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
				listarGastoseIngresos();
				break;	
			case 5:
				system("cls");
				printf("---------\n5. CONSULTAS Y REPORTES\n---------");
				consultasyReportes();
				break;	
			case 6:
				system("cls");
				printf("---------\n6. AGREGAR CATEGORIA\n---------");
				//agregarCategoria();
				break;
			case 7:
				printf("\nSALIENDO .....\n\n");
				s=0;
				break;				
			default:
				printf("\nIngrese un numero valido\n");
		}
	}
	return 0;
}

/////////////////////////////////////////REGISTRAR GASTO//////////////////////////////////////////////////////////////////////////////////////////

void registrarGasto(){
	int opc, s=1, seguir;
	while(s){
	    system("cls");
		printf("\nEscoja el tipo de gasto a registrar:\n\n1. Gasto Fijo\n2. Gasto Ocasional\n3. Gasto Temporal\n4. Gasto Anual\n5. Volver al Menu Principal\n\nElija una opcion: ");
		fflush(stdin);
		scanf("%d",&opc);
		switch(opc){
			case 1:
				system("cls");
				printf("---------\n1. GASTO FIJO\n---------");
				//Gasto Fijo...
				//¿registrarGastoFijo()?
				break;
			case 2:
				system("cls");
				printf("---------\n2. GASTO OCASIONAL\n---------");
				//Gasto Ocasional...
				//¿registrarGastoOcasional()?
				break;	
			case 3:
				system("cls");
				printf("---------\n3. GASTO TEMPORAL\n---------");
				//Gasto Temporal...
				//¿registrarGastoTemporal()?
				break;
			case 4:
				system("cls");
				printf("---------\n4. GASTO ANUAL\n---------");
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

/////////////////////////////////////////REGISTRAR INGRESO//////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////REGISTRAR PAGO/////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////LISTAR GASTOS E INGRESOS///////////////////////////////////////////////////////////////////////////////////

void listarGastoseIngresos(){
	
	int opc, s=1, seguir;
	
	while(s){
	    system("cls");
		printf("\nEscoja de que forma desea filtrar los datos:\n\n1. Filtrar Por Tipo\n2. Filtrar por Categoria\n3. Filtrar por Mes\n4. Volver al Menu Principal\n\nElija una opcion: ");
		fflush(stdin);
		scanf("%d",&opc);
		switch(opc){
			case 1:
				system("cls");
				printf("---------\n1. FILTRAR POR TIPO\n---------");
				//Filtrar Por Tipo...
				//¿filtrarPorTipo()?
				break;
			case 2:
				system("cls");
				printf("---------\n2. FILTRAR POR CATEGORIA\n---------");
				//Filtrar Por Categoria...
				//¿filtrarPorCategoria()?
				break;	
			case 3:
				system("cls");
				printf("---------\n3. FILTRAR POR MES\n---------");
				//Filtrar Por Mes...
				//¿filtrarPorMes()?
				break;
			case 4:	
				printf("\nVOLVIENDO .....\n\n");
				s=0;
				break;	
			default:
				printf("\nIngrese un numero valido\n");			
		}
		
		if(s){
			if((opc >= 1) && (opc <= 5)){
				system("cls");
				printf("\nDesea realizar otro listado? (1 si, 0 no): \t ");
				fflush(stdin);
				scanf("%d", &opc);
				while((opc != 1) && (opc != 0)){
					system("cls");
					printf("\nOpcion invalida. Intentelo de nuevo.\n");
					printf("\nDesea realizar otro listado? (1 si, 0 no): \t ");
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

/////////////////////////////////////////CONSULTAS Y REPORTES///////////////////////////////////////////////////////////////////////////////////////

void consultasyReportes(){
		int opc, s=1, seguir;
	while(s){
	    system("cls");
		printf("\nEscoja la consulta/reporte a realizar:\n\n1. Gastos por Categoria\n2. Gastos Por Mes y Anio\n3. Ingresos Por Persona\n4. Saldo Mensual\n5. Gastos Pendientes\n6. Pagos Por Medio de Pago\n7. Gastos con Saldo Incompleto\n8. Top 3 Categorias Mas Costosas\n9. Proyeccion Mensual\n10. Resumen General\n11. Volver al Menu Principal\n\nElija una opcion: ");
		fflush(stdin);
		scanf("%d",&opc);
		switch(opc){
			case 1:
				system("cls");
				printf("---------\n1. GASTOS POR CATEGORIA\n---------");
				//Gastos por Categoria...
				//¿gastosPorCategoria()?
				break;
			case 2:
				system("cls");
				printf("---------\n2. GASTOS POR MES Y ANIO\n---------");
				//Gastos Por Mes y Anio...
				//¿gastosPorMesYAnio()?
				break;	
			case 3:
				system("cls");
				printf("---------\n3. INGRESOS POR PERSONA\n---------");
				//Ingresos Por Persona...
				//¿ingresosPorPersona()?
				break;
			case 4:
				system("cls");
				printf("---------\n4. SALDO MENSUAL\n---------");
				//Saldo Mensual...
				////¿saldoMensual()?
				break;
			case 5:
				system("cls");
				printf("---------\n5. GASTOS PENDIENTES\n---------");
				//Gastos Pendientes...
				////¿gastosPendientes()?
				break;
			case 6:
				system("cls");
				printf("---------\n6. PAGOS POR MEDIO DE PAGO\n---------");
				//Pagos por Medio de Pago...
				////¿pagosPorMedioDePago()?
				break;
			case 7:
				system("cls");
				printf("---------\n7. GASTOS CON SALDO INCOMPLETO\n---------");
				//Gastos con Saldo Incompleto...
				////¿gastosConSaldoIncompleto()?
				break;
			case 8:
				system("cls");
				printf("---------\n8. TOP 3 CATEGORIAS MAS COSTOSAS\n---------");
				//Top 3 Categorias Mas Costosas...
				////¿categoriasMasCostosas()?
				break;
			case 9:
				system("cls");
				printf("---------\n9. PROYECCION MENSUAL\n---------");
				//Proyeccion Mensual...
				////¿proyeccionMensual()?
				break;
			case 10:
				system("cls");
				printf("---------\n10. RESUMEN GENERAL\n---------");
				//Resumen General...
				////¿resumenGeneral()?
				break;
			case 11:	
				printf("\nVOLVIENDO .....\n\n");
				s=0;
				break;	
			default:
				printf("\nIngrese un numero valido\n");			
		}
		
		if(s){
			if((opc >= 1) && (opc <= 5)){
				system("cls");
				printf("\nDesea realizar otra consulta/reporte? (1 si, 0 no): \t ");
				fflush(stdin);
				scanf("%d", &opc);
				while((opc != 1) && (opc != 0)){
					system("cls");
					printf("\nOpcion invalida. Intentelo de nuevo.\n");
					printf("\nDesea registrar otra consulta/reporte? (1 si, 0 no): \t ");
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

/////////////////////////////////////////AGREGAR CATEGORIA//////////////////////////////////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


