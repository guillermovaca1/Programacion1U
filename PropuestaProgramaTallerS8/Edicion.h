#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"
#define Maximo_de_Producto 100



void editarProducto() {
    listarProductos();
    if (totalProductos == 0) return;

    int indice;
    printf("Seleccione el número del producto a editar: ");
    scanf("%d", &indice);
    if (indice < 1 || indice > totalProductos) {
        printf("Índice inválido.\n");
        return;
    }

    Producto* producto = inventario[indice - 1];
    printf("Editar producto '%s'\n", producto->nombre);
    printf("Ingrese el nuevo nombre: ");
    scanf(" %[^\n]", producto->nombre);
    printf("Ingrese la nueva cantidad: ");
    scanf("%d", &producto->cantidad);
    printf("Ingrese el nuevo precio: ");
    scanf("%f", &producto->precio);
    printf("Producto actualizado correctamente.\n");
}