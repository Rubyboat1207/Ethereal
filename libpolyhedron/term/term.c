#include <term.h>
#include <stdint.h>
#include <stdio.h>
#include <kernel/gfx/interface/term.h>

int term_interface_getWidth() {
    int width;
    
    int term_fd = open(TERM_USERINTERFACE_MOUNT_PATH, O_RDWR);
    write(term_fd, &TERM_USERINTERFACE_GETWIDTH, sizeof(uint8_t));
    read(term_fd, &width, sizeof(int));
    close(term_fd);

    return width;
}

int term_interface_getHeight() {
    int height;
    
    int term_fd = open(TERM_USERINTERFACE_MOUNT_PATH, O_RDWR);
    write(term_fd, &TERM_USERINTERFACE_GETHEIGHT, sizeof(uint8_t));
    read(term_fd, &height, sizeof(int));
    close(term_fd);

    return height;
}

void term_interface_clear() {
    int term_fd = open(TERM_USERINTERFACE_MOUNT_PATH, O_RDWR);
    write(term_fd, &TERM_USERINTERFACE_CLEAR, sizeof(uint8_t)); // load command
    read(term_fd, NULL, 0); // execute command
    close(term_fd);
}