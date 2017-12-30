#include <stdio.h>
#include <unistd.h>

#include "game.h"
#include "graphics_controler.h"


int main() {
    while (1) {
        struct GraphicsControler * gcp = make_graphics_controler();
        destroy_graphics_controler(gcp);
    }
    struct GraphicsControler * gcp = make_graphics_controler();
    destroy_graphics_controler(gcp);
    printf("gcp->gpc=%d\n", gcp->gpc);
    return 0;
}
