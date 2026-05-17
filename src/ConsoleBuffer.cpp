#include "consolekit/ConsoleBuffer.hpp"
namespace consolekit {
    ConsoleBuffer::ConsoleBuffer(std::size_t initial_capacity){
        m_buffer.reserve(initial_capacity);
    }
    void ConsoleBuffer::pushText(std::string_view text) {
        m_buffer += text;
    }
    void ConsoleBuffer::pushColor(Color color) {
        m_buffer += toAnsi(color);
    }
    void ConsoleBuffer::pushReset() {
        m_buffer += toAnsi(Color::Default);
    }
    void ConsoleBuffer::pushNewLine() {
        m_buffer += '\n';
    }

    void ConsoleBuffer::clear() {
        m_buffer.clear();
    }
    void ConsoleBuffer::flush(int fd) {
        write(fd, m_buffer.data(), m_buffer.size());
    }
}