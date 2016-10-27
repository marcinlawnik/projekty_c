#include <stdio.h>

int main(void) {

int a,b,h;
int area;
printf("Podstawa a\n");
scanf("%d", &a);
printf("Podstawa b\n");
scanf("%d", &b);
printf("Wysokosc h\n");
scanf("%d", &h);

area = ((a+b)*h)/2;

printf("%d\n", ((a+b)*h)/2);

return 0;
}
