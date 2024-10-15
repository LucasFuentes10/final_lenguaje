#include <stdio.h>
#include <string.h>
//--------------------------------------------------------------------
struct precios{
        int tiempo;
        int contraseña[50];
        char nombre[50];
};
//--------------------------------------------------------------------
void iniciarSecion(){

}
//--------------------------------------------------------------------
void crearCuenta(){

}
//--------------------------------------------------------------------
void precios(){

}
//--------------------------------------------------------------------
void tiempoRestante(){

}
//--------------------------------------------------------------------
void historial(){

}
//--------------------------------------------------------------------
void cuentas(){

}
//--------------------------------------------------------------------
void salir(){
    int up;
    printf("¿Esta seguro que quiere cerrar sesion?");
    printf("\n1_ Si.");
    printf("\n2_ No. ");
    scanf("%d", &up);
    switch (up )
    {
    case 1:
        
        break;
    case 2:

        break;
    default:
        break;
    }
}
//--------------------------------------------------------------------
int main(){
    int usuario;
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
    case 1:
        iniciarSecion;
        break;
    case 2:
        crearCuenta;
        break;
    case 3:
        precios;
        break;  
    case 4:
        salir();
        break;        
    default:
        printf("Opcion no valida.");
        break;
    }   
    }
    
    return 0;
}