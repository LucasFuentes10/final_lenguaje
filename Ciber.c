#include <stdio.h>
#include <string.h>

#define MAX_CUENTAS 5
#define MIN_CUENTA 1
//--------------------------------------------------------------------
struct Cuentas{
    char nombre[50];
    char clave[50];

};
struct admin
{
    char admin[3];
    char clave[3];
};

int administrador(struct admin a[MIN_CUENTA]);  
void usuario(struct Cuentas c[MIN_CUENTA]);     
int menu(int op); 
int CcAdmin(struct admin a[MIN_CUENTA]);  
//--------------------------------------------------------------------
void iniciarSesion(int op){
    struct admin a[MIN_CUENTA];
    struct Cuentas c[MIN_CUENTA];
    op = 0;
    do
    {
    printf("///////////////////////////////////\n");
    printf("Menu inicio de secion:\n");
    printf("1_ Iniciar como administrador.\n");
    printf("2_ Iniciar como cliente\n");
    printf("3_ Salir\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        administrador(a);
        break;
    case 2:
        usuario(c);
        break;
    case 3:
        menu(op);
        break;    
    default:
        printf("Opcion no valida.");
        break;
    }
    } while (op != 3);
}
//--------------------------------------------------------------------
int administrador(struct admin a[MIN_CUENTA]){
    for (int i = 0; i < MIN_CUENTA; i++)
    {
        printf("Escriba su nombre\n");
        scanf("%s",a[i].admin);
        printf("Escribi la contraseña\n");
        printf("%s",a[i].clave);        
    }
    return 0;
}
//--------------------------------------------------------------------
int CcAdmin(struct admin a[MIN_CUENTA]){
    printf("\tMenu para crear cuenta de administrador\n"); 
    for (int i = 0; i < MIN_CUENTA; i++)
    {
        printf("Ingrese su nombre\n");
        scanf("%s",a[i].admin);
        printf("Ingrese una clave\n");
        scanf("%s", a[i].clave);    
    }
    return 0;
}
//--------------------------------------------------------------------
void CrCuUsuario(struct Cuentas a){
    printf("\tMenu para agregar un usuario\n");
    for (int i=0; i < 1; i++){
        printf("Ingrese su nombre de usuario: \n");
        scanf("%s", a.nombre);
        printf("Ingrese su contraseña: \n");
        scanf("%s", a.clave);
        printf("Registro realizado con exito!\n");
    }
}
//--------------------------------------------------------------------
void usuario(struct Cuentas c[MIN_CUENTA]) {
    for (int i = 0; i < MIN_CUENTA; i++)
    {
        printf("Usuario: %s\n", c[i].nombre);
        printf("Contraseña: %s\n", c[i].clave);
    }
}
//--------------------------------------------------------------------
void crearCuenta(struct Cuentas cuentaN[MAX_CUENTAS]){
    int i;
    printf("\t---Menu de registro para varios usuarios---\n");
    for (i=0; i < MAX_CUENTAS; i++){
        printf("Ingrese su nombre de usuario: \n");
        scanf("%s", cuentaN[i].nombre);
        printf("Ingrese su contraseña: \n");
        scanf("%s", cuentaN[i].clave);
        printf("Registro realizado con exito!\n");
    }
}
//--------------------------------------------------------------------
int crearUsuario(struct Cuentas c[MAX_CUENTAS]){
    int op = 0;
    struct Cuentas a;
    struct admin v[MIN_CUENTA];
    printf("¿Cuantas cuentas desea crear?\n");
    printf("1_ Una sola cuenta\n");
    printf("2_ Cinco cuentas\n");
    printf("3_ Crear cuenta admin\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        CrCuUsuario(a);
        break;
    case 2:
        crearCuenta(c);
        break;
    case 3:
        CcAdmin(v);
        break;
    default:
        printf("Opcion no valida.");
        break;
    }
    return 0;
}
//--------------------------------------------------------------------
void menuAdmin(){
    int op;
    printf("\tMenu de administrador\n\n");
    printf("1_Ver computadoras.\n");
    printf("");
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
            printf("Opcion no valida...\n");
        }
        
    }   
    return 0;
}
//--------------------------------------------------------------------
int salir(int op){
    op = 0;
    printf("¿Esta seguro que quiere cerrar sesion?\n");
    printf("1_ Si.\n");
    printf("2_ No.\n ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Saliendo, tenga un exelente dia...\n");
        return 1;
        break;
    case 2:
        printf("Regresando al menu principal...\n");
        return 0;
        break;
    default:
        printf("Opcion no valida.");
        break;
    }
    return 0;
}
//--------------------------------------------------------------------
int main(){ 
    int op = 0;
    struct Cuentas cuentaN[MAX_CUENTAS];
   do
   {
        op = menu(op);
        switch (op){
        case 1:
            iniciarSesion(op);
            break;
        case 2:
            crearUsuario(cuentaN);
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
   } while (op != 1);
    return 0;
}
    //strcpy(c.nombre, "administradorX");
    //strcpy(c.clave, "admin123");