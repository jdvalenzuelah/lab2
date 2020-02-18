#include <stdio.h>
#include <unistd.h>
int main() {
	printf("PID ");
	fork(); fork(); fork(); fork();
}
