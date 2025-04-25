#ifndef HEXA_Terminal_INTERFACE_H

#define HEXA_Terminal_INTERFACE_H
#include <stdint.h>

#define TERM_USERINTERFACE_MOUNT_PATH "/device/term"

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"

static const uint8_t TERM_USERINTERFACE_GETWIDTH = 1;
static const uint8_t TERM_USERINTERFACE_GETHEIGHT = 2;
static const uint8_t TERM_USERINTERFACE_CLEAR = 3;

#pragma GCC diagnostic pop

#endif