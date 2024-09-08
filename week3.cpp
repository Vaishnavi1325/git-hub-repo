//question 1
#include <iostream>
#include <string>

int stringLength(const std::string &str) {
    return str.length();
}

int main() {
    std::string str1 = "Hello, World!";
    std::cout << stringLength(str1) << std::endl;
    return 0;
}
//question 2
#include <iostream>
#include <string>

int countCharacter(const std::string &str, char ch) {
    int count = 0;
    for (char c : str) {
        if (c == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    std::string str = "Hello, World!";
    char ch = 'l';
    std::cout << countCharacter(str, ch) << std::endl;
    return 0;
}
//question 3
#include <iostream>
#include <string>

std::string concatenateStrings(const std::string &str1, const std::string &str2) {
    return str1 + str2;
}

int main() {
    std::string str1 = "Hello, ";
    std::string str2 = "World!";
    std::cout << concatenateStrings(str1, str2) << std::endl;
    return 0;
}
