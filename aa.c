#include <stdio.h>

int main()
{
    int a, b, c, area, perimetro, area triangulo, perimetro triangulo;
    printf("Ingresa base: ");
    scanf("%d", &a);
    printf("Ingresa altura: \n");
    scanf("%d", &b);
    if (a == b)
    {
        printf("Flaco es un cuadrado\n");
    }
    printf("Ingrese un lado del triangulo equilatero:\n");
    scanf("%d", &c);
    area = a * b;
    perimetro = 2 * (a + b);
    area triangulo = (c * c) / 2;
    perimetro triangulo = c * 3;
    printf("El area del rectangulo es: %d\n", area);
    printf("El perimetro del rectangulo es: %d\n", perimetro);
    printf("El area del triangulo EQUILATERO %d\n", area triangulo);
]   printf("El perimetro del triangulo EQUILATERO es: %d\n", perimetro triangulo);
return 0;
}
