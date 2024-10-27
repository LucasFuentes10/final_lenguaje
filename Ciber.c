#include <stdio.h>
#include <string.h>

#define MAX_CUENTAS 5

//--------------------------------------------------------------------
struct Cuentas{
        char nombre[50];
        char clave[50];
};
//--------------------------------------------------------------------
void iniciarSesion(){

}
//--------------------------------------------------------------------
void crearCuenta(struct Cuentas cuentaN[MAX_CUENTAS]){
    int i;
    printf("\t---Menu de registro---\n");
    for (i=0; i < MAX_CUENTAS; i++){
        printf("Presionar enter para volver al menu principal\n");
        printf("Ingrese su nombre de usuario: \n");
        scanf("%s", cuentaN[i].nombre);
        printf("Ingrese su contraseña: \n");
        scanf("%s", cuentaN[i].clave);
        printf("Registro realizado con exito!\n");
        return;
    }

}
//--------------------------------------------------------------------
void precios(){
printf("LISTA DE PRECIOS\n");
printf("-------------------------\n");
printf ("1 hs = $700\n");
printf("Presione enter para volver\n");
getchar();
getchar();
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
int menu(){

    printf("\t\tBIENVENIDO AL CIBER DEL PIBE.\n");
    int op = 0;

        printf("1_ Iniciar sesion.\n");
        printf("2_ Crear cuenta.\n");
        printf("3_ Precios.\n");
        printf("4_ Salir.\n");
        printf("Opcion seleccionada:");
        scanf("%d",&op);

        if (op >=1 && op <=4){
            return op;
        }else{
            printf("Opcion no valida...");
        }
        return op;
    }   


//--------------------------------------------------------------------
void salir() {
    int up;
    printf("¿Está seguro que quiere cerrar sesión?\n");
    printf("1_ Sí.\n");
    printf("2_ No.\n");
    scanf("%d", &up);
    switch (up) {
        case 1:
            printf("Saliendo, tenga un excelente día...\n");
            break;
        case 2:
            printf("Regresando al menú principal...\n");
            break;
        default:
            printf("Opción no válida.\n");
            break;
    }
}

//--------------------------------------------------------------------
int main() {
    int op = 0;
    struct Cuentas cuentaN[MAX_CUENTAS];

    do {
        op = menu(); 
        switch (op) {
            case 1:
                iniciarSesion();
                break;
            case 2:
                crearCuenta(cuentaN);
                break;
            case 3:
                precios(); //Se agregó vuelta al menu principal
                break;
            case 4:
                salir();
                break;
            default:
                printf("Opción no válida.\n");
                break;
        }
    } while (op != 4); 

    return 0;
}