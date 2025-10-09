// ================================================================
// 1. Include directives MUST come first, at the top of the file.
// ================================================================
#include "raindrops.h" // Include the header to connect declaration and definition
#include <string>      // Include for std::string and std::to_string

// ================================================================
// 2. The rest of your code (definitions) comes after the includes.
// ================================================================
namespace raindrops {

// This is the function DEFINITION. Its code lives here.
std::string convert(int number) {
    std::string result = "";

    if (number % 3 == 0) {
        result += "Pling";
    }
    if (number % 5 == 0) {
        result += "Plang";
    }
    if (number % 7 == 0) {
        result += "Plong";
    }

    if (result.empty()) {
        return std::to_string(number);
    }

    return result;
}

} // namespace raindrops