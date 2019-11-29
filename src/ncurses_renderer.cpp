#include <ncurses.h>
#include "ncurses_renderer.hpp"

namespace maze::engine
{
    void NcursesRenderer::update_buffer(const std::vector<std::vector<char>>& content)
    {
        framebuffer = content;
    }

    void NcursesRenderer::draw(void)
    {
        move(0, 0);
        for (const auto& row : framebuffer) {
            for (const auto& col : row) {
                addch(col);
            }
        }
        refresh();
    }
}