#include <stdio.h>
#include <unistd.h>
int main() {
	for(int x = 0; x < 4; x++) { fork(); printf("%d ", x); }
}
