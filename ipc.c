#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <fcntl.h>

#define SHM_NAME "SHARED_MEMORY"
#define SHM_SIZE 4096

int main(int argc, char *argv[]){
    if(argc < 3) { printf("Not enough args passed!"); exit(1); }
    char* n = argv[1];
    char* x = argv[2];

    shm_unlink(SHM_NAME);
    int shm = shm_open(SHM_NAME, O_RDWR | O_CREAT | O_EXCL, 0666);

    if(shm < 0) {
        printf("%s Already created!", x);
        int fd = shm_open(SHM_NAME, O_RDWR, 0666);
    } else {
        printf("%s Not created yet", x);
        ftruncate(shm, SHM_SIZE);
    }

    void * maddr = mmap(0, SHM_SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, shm, 0);

    printf("%s", maddr);

    if(fork()) {
        int i;
        for(i = 0; i < SHM_SIZE; i++);
    }

}