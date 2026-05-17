#pragma once
namespace consolekit {
    enum class Color {
        Default,
        Black,
        Red,
        Green,
        Yellow,
        Blue,
        Magenta,
        Cyan,
        White,

        BrightBlack,
        BrightRed,
        BrightGreen,
        BrightYellow,
        BrightBlue,
        BrightMagenta,
        BrightCyan,
        BrightWhite
    };

    static std::string_view toAnsi(consolekit::Color color) {
    switch (color) {
        case consolekit::Color::Black:
            return "\033[30m";

        case consolekit::Color::Red:
            return "\033[31m";

        case consolekit::Color::Green:
            return "\033[32m";

        case consolekit::Color::Yellow:
            return "\033[33m";

        case consolekit::Color::Blue:
            return "\033[34m";

        case consolekit::Color::Magenta:
            return "\033[35m";

        case consolekit::Color::Cyan:
            return "\033[36m";

        case consolekit::Color::White:
            return "\033[37m";

        // True-color bright variants

        case consolekit::Color::BrightBlack:
            return "\033[38;2;128;128;128m";

        case consolekit::Color::BrightRed:
            return "\033[38;2;255;80;80m";

        case consolekit::Color::BrightGreen:
            return "\033[38;2;80;255;80m";

        case consolekit::Color::BrightYellow:
            return "\033[38;2;255;255;80m";

        case consolekit::Color::BrightBlue:
            return "\033[38;2;100;160;255m";

        case consolekit::Color::BrightMagenta:
            return "\033[38;2;255;80;255m";

        case consolekit::Color::BrightCyan:
            return "\033[38;2;80;255;255m";

        case consolekit::Color::BrightWhite:
            return "\033[38;2;255;255;255m";

        default:
            return "\033[0m";
    }
}
}