#include <stdio.h>
#include <math.h>

int main(void) {
int a,b,c;
int a_sq, b_sq, c_sq;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);

a_sq=pow(a,2);
b_sq=pow(b,2);
c_sq=pow(c,2);

if (a_sq + b_sq == c_sq || b_sq + c_sq==a_sq || a_sq + c_sq == b_sq){

     printf("Da si stworzy trojkat\n");
}
else {
printf("Nie da sie stworzyc trojkata\n");
}

return 0;
}
