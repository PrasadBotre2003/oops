#include <iostream>
#include <string>

int main() {
    std::string str = "    Hello, World!    ";

    // Remove leading spaces
    str.erase(0, str.find_first_not_of(" "));

    // Remove trailing spaces
    str.erase(str.find_last_not_of(" ") + 1);

    std::cout << '"' << str << '"' << std::endl;  // Output: "Hello, World!"
    
    return 0;
}
