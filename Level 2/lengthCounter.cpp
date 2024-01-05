#include <iostream>
#include <vector>
#include <sstream>

int main() {
    std::string sentence;
    
    // Input sentence
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    // Use a stringstream to split the sentence into words
    std::istringstream iss(sentence);
    std::vector<int> wordLengths;

    // Iterate through each word and store its length
    std::string word;
    while (iss >> word) {
        wordLengths.push_back(word.length());
    }

    // Output word lengths
    std::cout << "Word lengths: [";
    for (size_t i = 0; i < wordLengths.size(); ++i) {
        std::cout << wordLengths[i];
        if (i < wordLengths.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
