#include<stdio.h>
#include<stdlib.h>

int sumaLista(int lista[], int n)
{
    int i;
    int suma=0;
    for (i=0;i< n;++i)
        suma=suma + lista[i];
    return suma;
}

main()
{
    int a,n,i;
    float promedio;
    int suma=0;
    printf("Indique cuantas notas quiere ingresar: (menos de 10)");
    scanf("%d",&n);
    int lista[10];
    for (i=0;i<n;++i)
    {
        printf("Ingrese otro numero: ");
        scanf("%d",&a);
        lista[i]=a;
    }

    promedio=sumaLista(lista,n)/n;
    if (promedio>=7)
        printf("\nPromociono con %f",promedio);
    else
        if (promedio<4)
            printf("\nRecursa");
        else
            printf("\nRegulariza con %f",promedio);
}
