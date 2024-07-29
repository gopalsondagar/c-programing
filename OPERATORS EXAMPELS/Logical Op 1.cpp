#include<stdio.h>

int main(){
    int a = 7;
    int b = 5;
    int c = 10;

    if (a > b && a < c) {
        printf("true");
    }
    else if (a > b || a > c) {
        printf("not");
    }
    else {
        printf("false");
    }

    return 0;
}
