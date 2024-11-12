#include <iostream>
#include <cstring>

int main(int argc, char** argv) {
    char buffer[10];
    std::cout << "Hello World" << std::endl;
    
    if (argc > 1) {
        strcpy(buffer, argv[1]);  // Potential buffer overflow if argv[1] is longer than 10 characters
    }

    return 0;
}