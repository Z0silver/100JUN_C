#include <stdio.h>
#pragma warning(disable:4996)
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a > b) {
        printf(">");
    }
    else if (a == b) {
        printf("==");
    }
    else if(a<b){
        printf("<");
    }
    return 0;

}
