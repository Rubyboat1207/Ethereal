#include <dirent.h>
#include <stdio.h>
// #include <kernel/gfx/term.h>

typedef struct UserConfig {
    int username_length;
    char* username;
    int computer_name_length;
    char* computer_name;
} UserConfig_t;

char cwd[512];

int main(int argc, char **argv) {
    char *path = (argc > 1) ? argv[1] : ".";

    chdir(path);

    // DIR *dirp = opendir(path);

    getcwd(cwd, sizeof(cwd));

    char* hello_msg = " Welcome to RBShell! ";
    int terminal_width = 64;

    for(int i = 0; i < terminal_width - (int) sizeof(&hello_msg); i++) {
        printf("-");
        if(i == terminal_width / 2 - (int) sizeof(&hello_msg) / 2) {
            printf("%s", hello_msg);
        }
    }

    printf("\nuser@pc:%s$ ", cwd);
    putchar('\030'); fflush(stdout);

    // main loop
    while(1) {
        
    }
}