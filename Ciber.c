void iniciarSecion(){

}
//--------------------------------------------------------------------
void crearCuenta(){

}
//--------------------------------------------------------------------
void precios(){

}
//--------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
int main(){
    int op;
    printf("\t\tBIENVENIDO AL CIBER DEL PIBE.\n");
    while (op != 4)
    {
    printf("1_ Iniciar secion.\n");
    printf("2_ Crear cuenta.\n");
    printf("3_ Precios.\n");
    printf("4_ Salir.\n");
    printf("Opcion seleccionada:");
    scanf("%d",&op);
    switch (op)
    {
    case '1':
        iniciarSecion;
        break;
    case '2':
        crearCuenta;
        break;
    case '3':
        precios;
        break;      
    default:
        break;
    }   
    }
    printf("Saliendo, tenga un exelente dia...");
    return 0;
}