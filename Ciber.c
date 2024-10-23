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
        printf("Ingrese su nombre de usuario: \n");
        scanf("%s", cuentaN[i].nombre);
        printf("Ingrese su contraseña: \n");
        scanf("%s", cuentaN[i].clave);
        printf("Registro realizado con exito!\n");
    }

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
int menu(int op){

    printf("\t\tBIENVENIDO AL CIBER DEL PIBE.\n");
    op = 0;

    while (op != 4){
        printf("1_ Iniciar secion.\n");
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
        
    }   
    
}
//--------------------------------------------------------------------
void salir(int *op){
    int up;
    *op = 0;
    printf("¿Esta seguro que quiere cerrar sesion?");
    printf("\n1_ Si.");
    printf("\n2_ No. ");
    scanf("%d", &up);
    switch (up)
    {
    case 1:
        printf("Saliendo, tenga un exelente dia...\n");
        *op = 4;
        break;
    case 2:
        printf("Regresando al menu principal...\n");
       *op = 0;
        break;
    default:
        printf("Opcion no valida regresando al menu principal...\n");
        *op = 0;
        break;
    }
}
//--------------------------------------------------------------------
int main(){
    
    int op = 0;
    struct Cuentas cuentaN[MAX_CUENTAS];
    op = menu(op);
    switch (op){
    case 1:
        iniciarSesion();
        break;
    case 2:
        crearCuenta(cuentaN);
        break;
    case 3:
        precios();
        break;  
    case 4:
        salir(op);
        break;        
    default:
        printf("Opcion no valida.");
        break;
    }

    return 0;
}