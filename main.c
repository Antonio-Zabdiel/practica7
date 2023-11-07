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
    printf("ingrese dos valores de tipo entero en forma x y: \n");
    scanf("%d %d", &n1, &n2);
    printf("ingrese dos valores de tipo flotante en forma x y: \n");
    scanf("%f %f", &f1, &f2);

    ptr_c = &c1;
    ptr_n = &n1;
    ptr_f = &f1;

    //variable       | direccion de aountador       | conteniodo del apuntador       
    printf("variable\t| direccion de aountador\t| contenido del apuntador\t| contenido indirecto\t\n");
    printf("==============================================================================================================================================================");
    printf("c1 \t| %p \t| %p \t| %p \t| %c \t|", &c1, &ptr_c, ptr_c, *ptr_c);
    printf("n1 \t| %p \t| %p \t| %p \t| %d \t|", &n1, &ptr_n, ptr_n, *ptr_n);
    printf("f1 \t| %p \t| %p \t| %p \t| %0.2f \t|", &f1, &ptr_f, ptr_f, *ptr_f);
    
    ptr_c = &c2;
    ptr_n = &n2;
    ptr_f = &f2;

    printf("c2 \t| %p \t| %p \t| %p \t| %c \t|", &c2, &ptr_c, ptr_c, *ptr_c);
    printf("n2 \t| %p \t| %p \t| %p \t| %d \t|", &n2, &ptr_n, ptr_n, *ptr_n);
    printf("f2 \t| %p \t| %p \t| %p \t| %0.2f \t|", &f2, &ptr_f, ptr_f, *ptr_f);

    return 0;
}
