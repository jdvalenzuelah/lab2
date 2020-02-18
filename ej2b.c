#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t first, second, third;
    clock_t start, end;
    start = clock(); first = fork();
    if(first > 0 && first == 0) { second = fork(); }
    }
}