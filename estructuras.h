#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

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

#endif
