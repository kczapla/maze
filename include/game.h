#ifndef GAME_H
#define GAME_H

struct GObj;
struct Game;

// It is going to start whole game. Called in main. It will display game menu at the very begining, parse cmd line arguments if any (map files, save files etc.)
void start_game(void);

// This on is going to do clean up. Don't know what will be there
void stop_game(void);

// exit process
void quit_game(void);
void alloc_game(struct Game *game);
void dealloc_game(struct Game *game);
void game_loop(void);

// return empty gobj
struct GObj * _init_gobj(void);
// register obj in the data structure gobj data structure
void _register_obj(struct GObj *gobj, void *obj);
// clinet code
struct GObj * make_gobj(void *obj);
// calling destructor function on every object in the gobject chain
void destroy_gobj(struct GObj *gobj);


struct Game {
    struct Menu *menu;
    struct GraphicsControler *gc;
    struct InputControler *ic;
    struct Player *player;
    struct Board *bord;
    struct game_operations *go;
    struct GObj *gobj;
};


struct GObj {
    void *obj;
};


struct game_operations {
    void (*start) (void);
    void (*stop) (void);
    void (*quit) (void);
};

#endif
