#include "consolekit/Console.hpp"


namespace consolekit {
    
    void Console::print(Color color, std::string_view text) {
        m_buffer.clear();
        m_buffer.pushColor(color);
        m_buffer.pushText(text);
        m_buffer.pushReset();
        m_buffer.flush(STDOUT_FILENO);
    }
    void Console::println(Color color, std::string_view text) {
        m_buffer.clear();

        m_buffer.pushColor(color);
        m_buffer.pushText(text);
        m_buffer.pushReset();
        m_buffer.pushNewLine();
        m_buffer.flush(STDOUT_FILENO);
    }

    void Console::print(std::string_view text) {
        m_buffer.clear();
        m_buffer.pushText(text);
        m_buffer.flush(STDOUT_FILENO);
    }
    void Console::println(std::string_view text) {
        m_buffer.clear();
        m_buffer.pushText(text);
        m_buffer.pushNewLine();
        m_buffer.flush(STDOUT_FILENO);
    }

    void Console::printError(std::string_view text) {
        m_buffer.clear();

        m_buffer.pushColor(Color::Red);
        m_buffer.pushText("Error: ");
        m_buffer.pushText(text);
        m_buffer.pushReset();
        m_buffer.pushNewLine();
        m_buffer.flush(STDERR_FILENO);
    }

    std::string Console::getString(std::string_view prompt){
        return "";
    }
    int Console::getInt(std::string_view prompt) {
        return 1;
    }
    float Console::getFloat(std::string_view prompt) {
        return 0.25f;
    }
    double Console::getDouble(std::string_view prompt){
        return 2.25;
    }
    bool Console::getYesOrNo(std::string_view prompt) {
        return false;
    }
}