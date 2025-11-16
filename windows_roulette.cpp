#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secretNumber = (std::rand() % 6) + 1; // random 1–6
    int guess;

    std::cout << "=== Windows Roulette ===\n";
    std::cout << "Pick a number between 1 and 6.\n";
    std::cout << "If you guess wrong, we will 'remove' C:/Windows/System32.\n\n";

    std::cout << "Your guess: ";
    std::cin >> guess;

    std::cout << "\nYou chose: " << guess << "\n";
    std::cout << "The secret number was: " << secretNumber << "\n\n";

    if (guess == secretNumber) {
        std::cout << "Congratulations! You survived Windows Roulette! :D\n";
    } else {
        std::cout << "Oh no... wrong guess!\n";
        std::cout << "Deleting C:/Windows/System32...\n";
        std::cout << "Progress: [##########] 100%\n";
        std::cout << "Just kidding! Your system is completely safe. :)\n";
    }

    std::cout << "\nThanks for playing -Pasha\n";
    return 0;
}
