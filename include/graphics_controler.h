#ifndef GRAPHICS_CONTROLER_H
#define GRAPHICS_CONTROLER_H

#include <stdlib.h>
#include <stdio.h>
#include "game.h"

struct GraphicsControler;
struct GraphicsConverter;
struct GraphicsComposer;
struct GraphicsRenderer;
struct GraphicsPipeline;

struct RenderTarget;

struct graphics_operations;
struct converter_operations;
struct controler_operations;
struct renderer_operations;


// GRAPHICS CONTROLER


struct GraphicsControler {
    struct GraphicsPipeline *gp;
    struct graphics_operations *go;
    struct RenderTarget *MainRenderTarget;
    struct Game *game;
    struct GObj *gobj;
    int gpc;  //  GraphicsPipeline counter
};


// GRAPHICS CONTROLER FUNCTIONS
struct GraphicsControler * make_graphics_controler(void);
void destroy_graphics_controler(struct GraphicsControler *gc);

void register_graphics_pipeline(struct GraphicsControler gc, struct GraphicsPipeline *gp);
void unregister_graphics_pipeline(struct GraphicsControler gc, struct GraphicsPipeline *gp);

void init_graphics_renderer(struct Game *game, struct GraphicsControler *gc);
void destroy_graphics_renderer(struct Game *game, struct GraphicsControler *gc);

void init_render_target(struct RenderTarget *rt);
void destroy_render_target(struct RenderTarget *rt);


// GRAPHICS PIPELINE

struct GraphicsPipeline {
    struct GraphicsComposer *gc;
    struct GraphicsConverter *gcon;
    struct GraphicsRenderer *gr;
    struct RenderTarget *rt;
    struct GObj *gobj;
    int id;
};

// GRAPHICS COMPOSER STRUCTURES


// From the game data structer compose content that will be understand by GraphicsRenderer functions
struct GraphicsComposer {
    struct composer_operations *co;
    struct GraphicsControler *gc;
    struct GObj *obj;
};


struct composer_operations {
    struct GObj (*compose) (struct GObj gobj);
};


// GRAPHICS CONVERTER STRCUTURES
struct GraphicsConverter {
    struct converter_operations *co;
    struct GraphicsControler *gc;
    struct GObj *obj;
};


struct converter_operations {
    struct GObj (*converter) (struct RenderTarget *rt, struct GObj gobj);
};

// GRAPHICS RENDERER


// It has no information about Game data. It only implements the render method
struct GraphicsRenderer {
    struct renderer_operations *ro;
    struct GraphicsControler gc;
    struct GObj *gobj;
};


struct renderer_operations {
   void (*render) (struct RenderTarget *rt, struct GObj gobj); 
};

#endif
