#include <iostream>
#include <cstdio>
#include <map>
#include <vector>
#include <string>
#include <algorithm>

enum Symbol {
    variable,
    function,
    hash_define
};

const  std::vector<std::string> reserved_words = {"auto", "break","case","char","const","continue","default","do","double","else","enum","extern","float","for","goto","if","int","long","register","return","short","signed","sizeof","static","struct","switch","typedef","union","unsigned","void","volatile","while"};

class Tokenizer {
    private:

        enum Token_type {
            kConstant,
            kIdentifier,
            kOperator,
            kSeparator,
            kReserved_word
        };
        std::string token = "0";
        std::string token_buffer;
        int index = 0;

    public:
        Tokenizer() = default;
        std::string get_token() {
            return nullptr;
        };

        std::string get_token(std::string text) {
            char c;
            while (!iswspace(c = text[index])) {
                token_buffer[index] = c;
                //std::cout << c << std::endl;
                index++;
            }
            //index++;

        return &token_buffer[0];
        }

        void analyze_token() {
            // in this method we class the current token as a particular Token_type
        };

        bool find_keyword(std::string text) {
            return std::find(reserved_words.begin(), reserved_words.end(), text) !=reserved_words.end();
        }

};

class Token: Tokenizer {
};

Tokenizer token;

std::string get_token(std::string text );

int main() {

    std::string text = {"continue main() continue {int i = 0;}"};
    //std::map<std::string, int> keywords ;

    std::string operators[] = {"+","-","/","*","{","}","(",")",";","?","%" };
    std::string output;

    output = token.get_token(text);
    if (token.find_keyword(output))
        std::cout << "Found token " << output;
    else
        std::cout << "No token found " ;

    return 0;
}



