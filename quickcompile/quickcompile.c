/* This here is quickcompile, a nifty little program that saves you typing time when compiling Virtux... or even Linux for that matter!
Just tell it how many threads ya got and away you go, less typing required! 
It'll save you time, because when it comes to compiling something on the scale of the Linux or Virtux kernel, time is precious.*/

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
    snprintf(command, sizeof(command), "sudo make -j%d && sudo make modules_install -j%d", threads, threads);

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
