#include <iostream>

void PlayTheGame() {

}

int main() {
// Print game instructions
    std::cout<<"You are a secret agent breaking into a secure server room...";
    std::cout<<std::endl;
    std::cout<<"Enter the correct code to continue...";
    std::cout<<std::endl;

    const int CodeA = 1;
    const int CodeB = 0;
    const int CodeC = 0;

    const int CodeSum =    CodeA+CodeB+CodeC;
    const int CodeProduct =CodeA*CodeB*CodeC;

// print CodeSum and CodeProduct to the terminal;
    std::cout<<std::endl<< "+ There are 3 numbers in the code" << std::endl;
    std::cout<< "+ The codes add-up to: " << CodeSum<<std::endl;
    std::cout<< "+ The codes multiply to give: " <<CodeProduct<< std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout<< "You entered: "<<GuessA<<" " <<GuessB<< " "<<GuessC<<std::endl;

    int GuessSum = GuessA+ GuessB+ GuessC;
    int GuessProduct = GuessA* GuessB* GuessC;
    
    if (CodeSum == GuessSum && CodeProduct == GuessProduct){
        std::cout<<"winner winner chicken dinner";
    }
    else {
        std::cout<<"you lose!";

    }
    return 0;
}