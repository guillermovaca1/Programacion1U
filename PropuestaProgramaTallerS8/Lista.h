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

void listarProductos() {
    if (totalProductos == 0) {
        printf("No hay productos en el inventario.\n");
        return;
    }

    printf("\n--- Lista de Productos ---\n");
    for (int i = 0; i < totalProductos; i++) {
        Producto* producto = inventario[i];
        printf("%d. Nombre: %s | Cantidad: %d | Precio: %.2f\n",
               i + 1, producto->nombre, producto->cantidad, producto->precio);
    }
}