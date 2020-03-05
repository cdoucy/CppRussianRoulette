#include <time.h>
#include <stdlib.h>
#include <iostream>
#include "Game.hpp"

Game::Game(const int &nbPlayer)
:   nbPlayer_(nbPlayer)
{
    srand(time(NULL));
    this->revolvers = std::vector<Revolver>(nbPlayer);
}

void Game::run()
{
    int currentPlayer = 0;

    while (true) {
        std::cout << "Player " << currentPlayer + 1 << " turn..." << std::endl;
        std::cout << "Press Enter to shot : ";
        std::cin.ignore();
        revolvers[currentPlayer].shot();
        std::cout << "Player " << currentPlayer + 1 << " got lucky, still alive" << std::endl;
        std::cout << revolvers[currentPlayer].getRemainBullets() << " remaining bullets." << std::endl << std::endl;
        currentPlayer = (currentPlayer + 1) % nbPlayer_;
    }
}