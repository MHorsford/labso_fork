#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);
    for (int i = 0; i < n; i++) {
        pid_t pid = fork();
        if (pid == -1) {
            perror("fork");
            return 1;
        } else if (pid == 0) {
            execlp("./helloWorld", "./helloWorld", NULL);
            perror("execlp");
            return 1;
        }
    }
    for (int i = 0; i < n; i++) {
        wait(NULL);
    }

    return 0;
}
