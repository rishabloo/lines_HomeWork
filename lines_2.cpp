#include <iostream>
#include <string>

int main()
{
    std::string secretWord = "слово";
    std::string userGuess;

    do {
        std::cout << "Угадайте слово: ";
        std::cin >> userGuess;

        if (userGuess == secretWord) {
            std::cout << " Ты прав, загаданное слово — " << secretWord << std::endl;
        } else {
            std::cout << "нет" << std::endl;
        }

    } while (userGuess != secretWord);

    return 0;
}