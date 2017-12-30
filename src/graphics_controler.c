#include <stdio.h>
#include <stdlib.h>

#include "game.h"
#include "graphics_controler.h"


struct GraphicsControler * make_graphics_controler(void) {
    struct GraphicsControler *gcp = malloc(sizeof(struct GraphicsControler));

    struct GraphicsControler gc = { .gpc = 0, .gobj = make_gobj(gcp)};
    *gcp = gc;

    return gcp;
}   

void destroy_graphics_controler(struct GraphicsControler *gcp) {
    // Use carefully. You can loose reference to structures pointed by this structure
    destroy_gobj(gcp->gobj);
    free(gcp);
    /** printf("sizeof=%d\n", (int) sizeof(gcp)); */
}
