#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "productos.h"
#include "IngresoProducto.h"
#include "Lista.h"
#include "Edicion.h"
#include "eliminar.h"

#define Maximo_de_Producto 100

// Función principal
int main() {
    int opcion;

    do {
        printf("\n--- Sistema de Inventarios ---\n");
        printf("1. Ingresar producto\n");
        printf("2. Listar productos\n");
        printf("3. Editar producto\n");
        printf("4. Eliminar producto\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarProducto();
                break;
            case 2:
                lista();
                break;
            case 3:
                editarProducto();
                break;
            case 4:
                eliminarProducto();
                break;
            case 5:
                printf("Saliendo del sistema.\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    // Liberar memoria al final
    for (int i = 0; i < totalProductos; i++) {
        free(inventario[i]);
    }

    return 0;
}