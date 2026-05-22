#include <stdio.h>

float suma(float a, float b)
{
    return (a + b);
};
float resta(float a, float b)
{
    return (a - b);
};
float multiplicacion(float a, float b)
{
    return (a * b);
};
float division(float a, float b)
{
    return (a / b);
};
int main()
{
    int opcion;
    float num1, num2;
    printf("lesiando un poco jejelol\n");
    do
    {
        printf("calculadorabasica\n");
        printf("presione 1 para sumar\n");
        printf("presione 2 para restar\n");
        printf("presione 3 para multiplicar\n");
        printf("presione 4 para dividir\n");
        printf("presione 5 para salir\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            printf("escriba el numero 1\n");
            scanf("%f", &num1);
            printf("escribe el segundo\n");
            scanf("%f", &num2);
            printf("el resultado es: %.2f\n", suma(num1, num2));
            break;
        case 2:
            printf("escribe el numero 1\n");
            scanf("%f", &num1);
            printf("escribe numero 2\n");
            scanf("%f", &num2);
            printf("el resultado de la resta es %2.f\n", resta(num1, num2));
            break;
        case 3:
            printf("escribe el numero1\n");
            scanf("%f", &num1);
            printf("escribe unawea\n");
            scanf("%f", &num2);
            printf("el resultado es %.2f\n", multiplicacion(num1, num2));
        case 4:
            printf("escribe el numero1\n");
            scanf("%f", &num1);
            printf("escribe unawea\n");
            scanf("%f", &num2);
            if (num2 == 0)
            {
                printf("error\n");
            }
            else
            {
                printf("el resultado es %2.f\n", division(num1, num2));
            };
            break;
        case 5:
            printf("saliste\n");
            break;
        default:
            printf("mal manito \n");
        }
    } while (opcion != 5);
    return 0;
}
