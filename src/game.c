#include <stdlib.h>
#include <stdio.h>

#include "game.h"

struct GObj * make_gobj(void *obj) {
    struct GObj x = { .obj = obj }; 
    struct GObj *gobj = malloc(sizeof(struct GObj));

    *gobj = x;
    return gobj;
}


void destroy_gobj(struct GObj *gobj) {
    free(gobj);
}
