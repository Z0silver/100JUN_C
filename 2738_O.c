#include <stdio.h>
#pragma warning (disable:4996)
int main() {
    int a,i;
    scanf("%d", &a);
    for (i = 1; i <= 9; i++) {
        printf("%d * %d = %d\n",a,i,a*i);
    }
}
