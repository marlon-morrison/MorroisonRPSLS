#include <iostream>
#include <stdlib.h>
#include<ctime>

int main() {
    srand(time(0));
    int computer = rand() % (5 - 1 + 1) + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizard\n";
    std::cout << "5) Spock\n";

    std::cout << "shoot! ";

    std::cin >> user;

    if (user == 1) {
        std::cout << "you choose: Rock\n";
    } else if (user == 2) {
        std::cout << "you choose: Paper\n";
    } else if (user == 3) {
        std::cout << "you choose: Scissors\n";
    } else if (user == 4) {
        std::cout << "you choose: Lizard\n";
    } else if (user == 5) {
        std::cout << "you choose: Spock\n";
    }

    if (computer == 1) {
        std::cout << "cpu choose: Rock\n";
    } else if (computer == 2) {
        std::cout << "cpu choose: Paper\n";
    } else if (computer == 3) {
        std::cout << "cpu choose: Scissors\n";
    } else if (computer == 4) {
        std::cout << "cpu choose: Lizard\n";
    } else if (computer == 5) {
        std::cout << "cpu choose: Spock\n";
    }
    

    if (user == computer) {
        std::cout << "it's a tie!\n";
    }

    // rock
    else if (user == 1) {
        if (computer == 3 || 4) {
            std::cout << "you won! woohoo!\n";
        } else if (computer == 2 || 5) {
            std::cout << "you lost! booooo!\n";
        }
    }
    // paper
    else if (user == 2) {
        if (computer == 1 || 5) {
            std::cout << "you won! woohoo!\n";
        } else if (computer == 3 || 4) {
            std::cout << "you lost! boo!\n";
        }
    }
    // scissors
    else if (user == 3) {
        if (computer == 2 || 4) {
            std::cout << "you won! woohoo!\n";
        } else if (computer == 1 || 5) {
            std::cout << "you lost! booooo!\n";
        }
    }
    // lizard
    else if (user == 4) {
        if (computer == 5 || 2) {
            std::cout << "you won! woohoo!\n";
        } else if (computer == 1 || 3) {
            std::cout << "you lost! booooo!\n";
        }
    }
    // spock 
    else if (user == 5) {
        if (computer == 3 || 1) {
            std::cout << "you won! woohoo!\n";
        } else if (computer == 4 || 2) {
            std::cout << "you lost! booooo!\n";
        }
    }
    return 0;
}