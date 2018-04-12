
/*La funcion suma es usada para sumar dos numeros.
  Recibe dos operando, es decir:el_numero1 y el_numero2;
  La funcion va a devolver el valor de la suma, es decir un flotante.
*/
float suma(float el_numero1, float el_numero2)
{
    float resultado;
    resultado=el_numero1+el_numero2;
    return resultado;
}
/*La funcion resta es usada para restar dos numeros.
  Recibe dos operando, es decir:el_numero1 y el_numero2;
  La funcion va a devolver el valor de la resta, es decir un flotante.
*/
float resta(float el_numero1, float el_numero2)
{
    float resultado;
    resultado=el_numero1-el_numero2;
    return resultado;
}
/*La funcion division es usada para dividir dos numeros.
  Recibe dos operando, es decir:el_numero1 y el_numero2
  el_numero2 tiene que ser distinto de cero porque si no la divicion no existe.
  La funcion va a devolver el valor de la division, es decir un flotante.
*/
float division(float el_numero1, float el_numero2)
{
    float resultado;
    resultado=el_numero1/el_numero2;
    return resultado;
}

/*La funcion multiplicacion es usada para multiplicar dos numeros.
  Recibe dos operando, es decir:el_numero1 y el_numero2;
  La funcion va a devolver el valor de la multiplicacion, es decir un flotante.
*/
float multiplicacion(float el_numero1, float el_numero2)
{
    float resultado;
    resultado=el_numero1*el_numero2;
    return resultado;
}
/*La funcion factorial es usada para factorizar  un numero.
  Recibe el primer operando, es decir:el_numero1.
  La funcion va a devolver el valor de la factorizacion, es decir un entero.
*/

long long int factorial(int el_numero1)
{
    long long int resultado;
    if(el_numero1==1)
    {
        return 1;
    }
    resultado=el_numero1*factorial(el_numero1-1);
    return(resultado);
}
/*
Esta funcion es usada para verificar el primer numero que ingreso el usuario.
Recibe el primer operando, es decir:el_numero1.
La funcion va a devolver 3 tipos de printf:
*Si el numero es igual a cero, devuelve: printf("El factorial de cero es 1");
*Si el numero es negativo y mayore igual a 21, devuelve:  printf("Ingrese un numero positivo y menor a 21");
*Si el numero es con coma, devuelve:  printf("No se puede calcular un numero con decimales");
*/
int validarElFactorial(float el_numero1)
{
    if(el_numero1==0)
    {
        printf("El factorial de cero es 1");
        system("pause");
        return 1;
    }
    else
    {
        if(el_numero1<0 || el_numero1>=21)
        {
            printf("Ingrese un numero positivo y menor a 21");
            system("pause");
            return 1;
        }
        else
        {
            if(el_numero1-(int)el_numero1>0)
            {
                printf("No se puede calcular un numero con decimales");
                system("pause");
                return 1;
            }
        }
    }
}

