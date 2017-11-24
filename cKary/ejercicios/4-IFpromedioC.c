#include<stdio.h>
#include<stdlib.h>

main()
{
    int a,b,c;
    float promedio;
    printf("Ingrese un numero: ");
    scanf("%d",&a);
    printf("Ingrese otro numero: ");
    scanf("%d",&b);
    promedio=(a+b)/2;
    if (promedio>=7)
        printf("Promociono con %f",promedio);
    else
        if (promedio<4)
            printf("Recursa");
        else
            printf("Regularizó con %f",promedio);
}
