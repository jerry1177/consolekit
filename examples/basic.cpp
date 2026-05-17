#include "consolekit/Console.hpp"

int main() {
    consolekit::Console console;
    consolekit::Composer msg;

    msg.text("Hello");
    console.println(msg.view());

    msg.clear();

    msg.color(consolekit::Color::Green)
       .text("Connected")
       .resetColor();

    console.println(msg.view());

    return 0;
}