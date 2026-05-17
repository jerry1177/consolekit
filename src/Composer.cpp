#include "consolekit/Composer.hpp"

namespace consolekit {

    Composer::Composer(std::size_t initial_capacity) {
        m_text.reserve(initial_capacity);
    }

    Composer& Composer::text(std::string_view value) {
        m_text += value;
        return *this;
    }

    Composer& Composer::color(Color color) {
        m_text += toAnsi(color);
        return *this;
    }

    Composer& Composer::resetColor() {
        return color(Color::Default);
    }

    Composer& Composer::clear() {
        m_text.clear();
        return *this;
    }

    std::string_view Composer::view() const {
        return m_text;
    }

    bool Composer::empty() const {
        return m_text.empty();
    }

    std::size_t Composer::size() const {
        return m_text.size();
    }

}
