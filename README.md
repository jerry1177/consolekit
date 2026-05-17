# consolekit

`consolekit` is a small C++20 library for writing simple console output with
buffered printing, ANSI colors, and reusable message composition.

## Build

Configure and build with CMake:

```bash
cmake -S . -B build
cmake --build build
```

This builds the `consolekit` library and the `basic` example program.

Run the example:

```bash
./build/basic
```

## Static or Shared Library

By default, `consolekit` builds as a static library.

Static build:

```bash
cmake -S . -B build-static -DBUILD_SHARED_LIBS=OFF
cmake --build build-static
```

Shared library build:

```bash
cmake -S . -B build-shared -DBUILD_SHARED_LIBS=ON
cmake --build build-shared
```

On Linux, the shared library is built as `libconsolekit.so`. On Windows, it is
typically built as a `.dll`.

## Basic Usage

```cpp
#include "consolekit/Console.hpp"

int main() {
    consolekit::Console console;

    console.println("Hello World!");
    console.print("Status: ");
    console.println(consolekit::Color::Green, "Connected");

    console.printError("Something went wrong");

    return 0;
}
```

## Composing Messages

Use `Composer` when you want to build a reusable or styled message before
printing it.

```cpp
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
```

## Available Colors

`consolekit::Color` includes:

- `Default`
- `Black`, `Red`, `Green`, `Yellow`, `Blue`, `Magenta`, `Cyan`, `White`
- `BrightBlack`, `BrightRed`, `BrightGreen`, `BrightYellow`
- `BrightBlue`, `BrightMagenta`, `BrightCyan`, `BrightWhite`

