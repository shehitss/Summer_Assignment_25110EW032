#include <iostream>

int main() {
    char str[] = "Hello World";
    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    std::cout << length << std::endl;
    return 0;
}
