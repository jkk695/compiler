#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <string>

class Token {

};

Token token;

std::string get_token(std::string text );

int main() {


    std::string text = {"main() "};
    std::map<std::string, int> keywords ;
    std::string output;

    std::cout << get_token(text) << std::endl;
    return 0;
}

std::string get_token(std::string text) {
    char c;
    int i = 0;
    std::string token_buffer;

    while (!iswspace(c = text[i])) {
        token_buffer[i] = c;
        //std::cout << c << std::endl;
        i++;
    }

    return &token_buffer[0];
}

