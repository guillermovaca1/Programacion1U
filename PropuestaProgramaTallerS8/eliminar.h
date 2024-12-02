#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"
#define Maximo_de_Producto 100



void eliminarProducto() {
    listarProductos();
    if (totalProductos == 0) return;

    int indice;
    printf("Seleccione el número del producto a eliminar: ");
    scanf("%d", &indice);
    if (indice < 1 || indice > totalProductos) {
        printf("Índice inválido.\n");
        return;
    }

    // Liberar memoria del producto eliminado
    free(inventario[indice - 1]);

    // Reorganizar los punteros del inventario
    for (int i = indice - 1; i < totalProductos - 1; i++) {
        inventario[i] = inventario[i + 1];
    }
    totalProductos--;
    printf("Producto eliminado correctamente.\n");
}
