#include <stdio.h>
#include <unistd.h>

int main() {
    if(fork()) {
        while(1);
    } else {
        printf("Child process");
    }
}