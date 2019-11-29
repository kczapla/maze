#pragma once

#include <ncurses.h>
#include <memory>
#include <functional>
#include "window_properties.hpp"

namespace maze::engine
{
    class NcursesWindow
    {
        public:
        NcursesWindow(const WindowProperties& window_properties);
        
        WindowProperties window_properties;
        std::unique_ptr<WINDOW, std::function<void(WINDOW *)>> window;
    };
}