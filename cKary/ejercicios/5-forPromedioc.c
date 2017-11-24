#include<stdio.h>
#include<stdlib.h>

main()
{
    int a,n,i;
    float promedio;
    int suma=0;
    printf("Indique cuantas notas quiere ingresar: ");
    scanf("%d",&n);
    for (i=0;i<n;++i)
    {
        printf("Ingrese otro numero: ");
        scanf("%d",&a);
        suma=suma + a;
    }
    promedio=suma/n;

    if (promedio>=7)
        printf("Promociono con %f",promedio);
    else
        if (promedio<4)
            printf("Recursa");
        else
            printf("Regulariza con %f",promedio);
}
