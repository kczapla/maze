#include "dynamic_array.h"


void *array_make(void) {
    return malloc(sizeof(* void));
}


void array_remove(void *array) {
    free(array);
}


void array_head_add(void *array, void *new_item) {
    _array_resize(array, new_item);
}


void _array_resize(void *array, int from, int to) {

}
