#pragma once

#include <string>
#include <string_view>

#include "Color.hpp"

namespace consolekit {

class Composer {
    public:
    explicit Composer(std::size_t initial_capacity = 1024);

    Composer& text(std::string_view value);
    Composer& color(Color color);
    Composer& resetColor();
    Composer& clear();

    std::string_view view() const;
    bool empty() const;
    std::size_t size() const;

    private:
    std::string m_text;
};

}
