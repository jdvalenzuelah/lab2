#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    start = clock();
    int i;
    for(i = 0; i < 1000000; i++) {printf("%d\n",i);}
    for(i = 0; i < 1000000; i++) {printf("%d\n",i);}
    for(i = 0; i < 1000000; i++) {printf("%d\n",i);}
    end = clock();
    double diff = ((double) end - start) / CLOCKS_PER_SEC; printf("%f\n", diff);
}