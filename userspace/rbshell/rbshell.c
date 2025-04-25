#include <dirent.h>
#include <stdio.h>
#include <term.h>
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
    int terminal_width = term_interface_getWidth();
    printf("Terminal width: %d\n", terminal_width);
    term_interface_clear();

    char* hello_msg = " Welcome to RBShell! ";
    int message_length = 22;

    for(int i = 0; i < terminal_width - message_length; i++) {
        printf("-");
        if(i == terminal_width / 2 - message_length / 2) {
            printf("%s", hello_msg);
        }
    }

    printf("\nuser@pc:%s$ ", cwd);
    putchar('\030'); fflush(stdout);

    // main loop
    while(1) {
        
    }
}