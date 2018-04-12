#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float el_numero1,el_numero2,resultado;
    int flag_x=0;
    int flag_y=0;


    while(seguir=='s')
    {
        if(flag_x==0)
        {
             printf("1- Ingresar 1er operando (A=x)\n");
        }
        else
        {
            printf("1- Ingresar 1er operando (A=%f)\n", el_numero1);
        }

        if(flag_y==0)
        {
            printf("2- Ingresar 2do operando (B=y)\n");
        }
        else
        {
            printf("2- Ingresar 2do operando (B=%f)\n", el_numero2);
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                printf("Ingrese el primer numero");
                scanf("%f",&el_numero1);
                flag_x=1;
                system("cls");
                break;
            case 2:
                printf("Ingrese el segundo numero");
                scanf("%f",&el_numero2);
                flag_y=1;
                system("cls");
                break;
            case 3:
                resultado=suma(el_numero1,el_numero2);
                printf("El resultado de la suma es %f", resultado);
                system("pause");
                system("cls");
                break;
            case 4:
                resultado=resta(el_numero1,el_numero2);
                printf("El resultado de la resta es %f", resultado);
                system("pause");
                system("cls");
                break;
            case 5:
                resultado=division(el_numero1,el_numero2);
                if(el_numero2!=0)
                {
                    printf("El resultado de la division es %f", resultado);
                }
                else
                {
                    printf("El resultado de la division no existe");
                }
                system("pause");
                system("cls");
                break;
            case 6:
                resultado=multiplicacion(el_numero1,el_numero2);
                printf("El resultado de la multiplicacion es %f", resultado);
                system("pause");
                system("cls");
                break;
            case 7:
                if(validarElFactorial(el_numero1)==1)
                {
                    break;
                }
                else
                {
                    printf("El factorial del numero ingresado es: %lld",factorial(el_numero1));
                }
                system("pause");
                system("cls");
                break;
            case 8:
                resultado=suma(el_numero1,el_numero2);
                printf("\nEl resultado de la suma es %f", resultado);
                resultado=resta(el_numero1,el_numero2);
                printf("\nEl resultado de la resta es %f", resultado);
                resultado=division(el_numero1,el_numero2);
                if(el_numero2!=0)
                {
                    printf("\nEl resultado de la division es %f", resultado);
                }
                else
                {
                    printf("\nEl resultado de la division no existe");
                }
                resultado=multiplicacion(el_numero1,el_numero2);
                printf("\nEl resultado de la multiplicacion es %f", resultado);
                printf("\nEl factorial del numero ingresado es: %lld",factorial(el_numero1));
                system("pause");
                system("cls");
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }
    return 0;
}
