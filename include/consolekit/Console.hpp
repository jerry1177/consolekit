#pragma once
#include <string>
#include <string_view>
#include "Composer.hpp"
#include "Color.hpp"
#include "ConsoleBuffer.hpp"

namespace consolekit{

class Console {
    public:
    explicit Console() {}
    void print(std::string_view text);
    void println(std::string_view text);
    void printError(std::string_view text);
    std::string getString(std::string_view prompt);
    int getInt(std::string_view prompt);
    float getFloat(std::string_view prompt);
    double getDouble(std::string_view prompt);
    bool getYesOrNo(std::string_view prompt);
    
    void print(Color color, std::string_view text);
    void println(Color color, std::string_view text);
    private:
    ConsoleBuffer m_buffer;
};
}
