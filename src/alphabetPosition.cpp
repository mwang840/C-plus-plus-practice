#include <string>
#include <iostream>

std::string alphabet_position(const std::string &text);
const int num = 31;

int main(){
    std::cout<< alphabet_position("The sunset sets at twelve o' clock.");
    return 0;
}

std::string alphabet_position(const std:: string &text){
    //init alphabet value is zero
    //will be reset each iteration
    int alphaValue = 0;
    std::string alpha = "";
    //loops over the text (const string &str)
    for(std::string::size_type i = 0; i < text.size(); i++){
        //If the name is uppercase
        if(text[i]>= 'A' && text[i] <= 'Z'){
            alphaValue = (int(text[i]) - 'A') + 1;
            alpha += std::to_string(alphaValue) + " ";
        }
        else if(text[i]>='a' && text[i] <= 'z'){
            alphaValue = (int(text[i]) - 'a') + 1;
            alpha += std::to_string(alphaValue) + " ";
        }
    }
    return alpha;
}