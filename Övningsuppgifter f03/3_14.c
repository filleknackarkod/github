#include <stdio.h>
int main(void) {
int x1 = 8;
int x2 = 3;
int x3 = x1 % x2;
while (x1 >= x2) {
x1--;
x3 += x1;
}
printf("x1 = %d, x2 = %d, x3 = %d\n", x1, x2, x3);
return 0;
}