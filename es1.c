#include <stdio.h>
#define Cubo(i) (i)*(i)*(i)

int main(void){
    int a = 2;
    int b = cubo(1+2);
    printf("%d * %d * %d", a,a,b);
    return 0;