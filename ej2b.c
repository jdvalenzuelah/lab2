#include <stdio.h>
#include <time.h>
#include <sys/wait.h>

int main() {
    pid_t son, grandson, grandgrandson;
    clock_t start, finish;

    start = clock();
    son = fork();

    if(son == 0 ) {
        grandson = fork();
        if(grandson == 0) {
            grandgrandson = fork();
            if(grandgrandson == 0) {
                for(int i = 0; i < 1000000; i++) {printf("%d\n",i);}
            } else {
                for(int i = 0; i < 1000000; i++) {printf("%d\n",i);}
                wait(NULL);
            }
        } else {
            for(int i = 0; i < 1000000; i++) {printf("%d\n",i);}
            wait(NULL);
        }
    } else {
        wait(NULL);
        finish = clock();
        double diff = ((double) finish - start ) / CLOCKS_PER_SEC; printf("%f\n", diff);
    }
}