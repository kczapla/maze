void *array_make(void);
void array_remove(void *array);

void array_head_add(void *array, void *new_item);
void array_head_delete(void *array);
void array_tail_add(void *array, void *new_item);
void array_tail_delete(void *array);
void array_delete_item(*array, int i);
void *array_pop_item(void *array, int i);
void *array_get_item(void *array, int i);

void _resize_array(void *type, void *array);
