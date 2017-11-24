#include<stdio.h>
#include<stdlib.h>


main()
{
    int a,n,i;
    float promedio;
    int suma;
    printf("Indique cuantas notas quiere ingresar(menos de 10): ");
    scanf("%d",&n);
    int lista[10];
    for (i=0;i<n;++i)
    {
        printf("Ingrese otro numero: ");
        scanf("%d",&a);
        lista[i]=a;
    }
    suma=0;
    for (i=0;i<n;++i)
    {
        suma=suma+lista[i];
    }
    promedio=suma/n;

    if (promedio>=7)
        printf("\nPromociono con %f",promedio);
    else
        if (promedio<4)
            printf("\nRecursa");
        else
            printf("\nRegulariza con %f",promedio);
}
