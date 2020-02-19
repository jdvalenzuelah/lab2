#include <stdio.h>
#include <unistd.h>

int main() {
    if(fork()) {
        while(1);
    } else {
        int i;
        for(i = 0; i < 4000000; i++) { printf("%d\n", i);}
    }
}