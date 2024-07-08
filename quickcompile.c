#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int threads;
    char command[256];

    // this will asky asky the user for the number of threads they have
    printf("Enter the number of threads your CPU has: ");
    if (scanf("%d", &threads) != 1) {
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // this does the makey makey
    snprintf(command, sizeof(command), "make -j%d && make modules_install -j%d", threads, threads);

    // this does the wakey wakey
    int result = system(command);
    if (result != 0) {
        fprintf(stderr, "Command execution failed\n");
        return 1;
    }
    // this will tell you if it worky workied 
    printf("Command executed successfully\n");
    return 0;
}
