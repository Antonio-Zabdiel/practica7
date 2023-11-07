#include <stdio.h>

int main()
{
    char c1, c2;
    int n1, n2;
    float f1, f2;

    char *ptr_c;
    int *ptr_n;
    float *ptr_f;

    printf("ingrese dos valores de tipo caracter en forma x y: \n");
    scanf("%c %c", &c1, &c2);
    //printf("ingrese dos valores de tipo entero en forma x y: \n");
    //scanf("%d %d", &n1, &n2);
    //printf("ingrese dos valores de tipo flotante en forma x y: \n");
    //scanf("%f %f", &f1, &f2);

    ptr_c = &c1;
    ptr_n = &n1;
    ptr_f = &f1;

    printf("direccion de variable: %c\n", &c1);
    printf("direccion de apuntador: %c\n", &ptr_c);
    printf("coneniudo de auntador: %c\n", ptr_c);
    printf("contenido indirecto: %c\n", *ptr_c);

    return 0;
}
