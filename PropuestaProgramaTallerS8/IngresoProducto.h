#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Maximo_de_Producto 100

typedef struct {
    char nombre[50];
    int cantidad;
    float precio;
} Producto;

Producto* inventario[Maximo_de_Producto];
int totalProductos = 0;

void ingresarProducto() {
    if (totalProductos >= Maximo_de_Producto) {
        printf("El inventario está lleno.\n");
        return;
    }

    Producto* nuevoProducto = (Producto*)malloc(sizeof(Producto));
    if (!nuevoProducto) {
        printf("Error al asignar memoria.\n");
        return;
    }

    printf("Ingrese el nombre del producto: ");
    scanf(" %[^\n]", nuevoProducto->nombre);
    printf("Ingrese la cantidad: ");
    scanf("%d", &nuevoProducto->cantidad);
    printf("Ingrese el precio: ");
    scanf("%f", &nuevoProducto->precio);

    inventario[totalProductos] = nuevoProducto;
    totalProductos++;
    printf("Producto ingresado correctamente.\n");
}
