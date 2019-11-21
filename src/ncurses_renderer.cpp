#include <ncurses.h>
#include "ncurses_renderer.hpp"

namespace maze::engine
{
    char NcursesRenderer::get_keyboard_input(void)
    {
        return getch();
    }

    void NcursesRenderer::update_buffer(const std::vector<std::vector<char>>& content)
    {
        framebuffer = content;
    }

    void NcursesRenderer::draw(void)
    {
        for (const auto& row : framebuffer) {
            for (const auto& col : row) {
                addch(col);
            }
        }
        refresh();
    }
}