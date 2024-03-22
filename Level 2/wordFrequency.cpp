#include <iostream>
#include <string>

int const MAX_WORDS = 25;

// assuming all values are in grammatical order

int main(){
    std::string sentence = "";
    std::string word;
    std::string checkword[MAX_WORDS] = {};
    int j = 0;
    int num = 0;

    std::cout << "Word Frequency Counter..." << "\n";
    // Get the input sentence from user;
    std::cout << "Enter a sentence: ";
    getline(std::cin , sentence);
    std::cout << "Sentence entered -> " << sentence << "\n";

    for(int i = 0; i <= sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        }else{
            checkword[j] = word;
            word = "";
            j++;
        }
    }

    while(num < sizeof(checkword)/sizeof(checkword[0])){
        std::cout << checkword[num] << " ";
        num++;
    }

    
} 