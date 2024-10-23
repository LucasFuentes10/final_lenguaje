#include <stdio.h>
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
    }   
    return op;
}
//--------------------------------------------------------------------
void salir(int op){
    int up;
    op = 0;
    printf("¿Esta seguro que quiere cerrar sesion?\n");
    printf("1_ Si.\n");
    printf("2_ No.\n ");
    scanf("%d", &up);
    switch (up)
    {
    case 1:
        printf("Saliendo, tenga un exelente dia...\n");
        break;
    case 2:
        printf("Regresando al menu principal...\n");
       op = menu(op);
        break;
    default:
        break;
    }
}
//--------------------------------------------------------------------
int main(){
    int op = 0;
    op = menu(op);
   switch (op)
    {
     
    case 4:
        salir(op);
        break;        
    default:
        printf("Opcion no valida.");
        break;
    }   
    
   
    
    return 0;
}