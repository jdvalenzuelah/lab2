#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

// Receives n x
int main(int argc, char *argv[]){
    if(argc < 3) { printf("Not enough args passed!"); exit(1); }
    printf("%d", argc);
}