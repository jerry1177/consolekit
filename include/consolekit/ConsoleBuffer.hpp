#pragma once
#include <string>
#include <string_view>
#include "Color.hpp"
#include <unistd.h>
#include <sys/types.h>

namespace consolekit{

class ConsoleBuffer {
    public:
    explicit ConsoleBuffer(std::size_t initial_capacity = 4096);
    void pushText(std::string_view text);
    void pushColor(Color color);
    void pushReset();
    void pushNewLine();
    void clear();
    void flush(int fd);
    private:
    std::string m_buffer;
};
}
