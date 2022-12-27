#include <iostream>     // Preprocessor directives
// Executed before getting compiled 

// A custom namespace

namespace test {
    int cout = 1;
}


int main () {
    std::cout << test::cout << std::endl;

    return 0;
}