#include "consolekit/Console.hpp"

int main() {
	consolekit::Console console;
	console.println("Hello World!");
	console.print("Hello! ");
	console.println("My name is Jerry!");
	console.printError("you should not have done that!");

    consolekit::Composer msg;
    msg.text("Hello");
    console.println(msg.view());

    msg.clear();

    msg.color(consolekit::Color::Green)
       .text("Connected")
       .resetColor();

    console.println(msg.view());

	// colors example
	console.println(consolekit::Color::Default, "Default");

    console.println(consolekit::Color::Black, "Black");
    console.println(consolekit::Color::Red, "Red");
    console.println(consolekit::Color::Green, "Green");
    console.println(consolekit::Color::Yellow, "Yellow");
    console.println(consolekit::Color::Blue, "Blue");
    console.println(consolekit::Color::Magenta, "Magenta");
    console.println(consolekit::Color::Cyan, "Cyan");
    console.println(consolekit::Color::White, "White");

    console.println(consolekit::Color::BrightBlack, "Bright Black");
    console.println(consolekit::Color::BrightRed, "Bright Red");
    console.println(consolekit::Color::BrightGreen, "Bright Green");
    console.println(consolekit::Color::BrightYellow, "Bright Yellow");
    console.println(consolekit::Color::BrightBlue, "Bright Blue");
    console.println(consolekit::Color::BrightMagenta, "Bright Magenta");
    console.println(consolekit::Color::BrightCyan, "Bright Cyan");
    console.println(consolekit::Color::BrightWhite, "Bright White");

	return 0;
}
