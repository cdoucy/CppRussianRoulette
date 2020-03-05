#include <iostream>
#include <string>
#include "Game.hpp"

static int getNbPlayer(int ac, char ** av)
{
    int nbPlayer = 0;

    if (ac != 2) {
        std::cerr << "Error: please specify player number in first argument." << std::endl;
        return -1;
    }
    try {
        nbPlayer = std::stoi(std::string(av[1]));
    } catch (std::invalid_argument const &err) {
        std::cerr << "Error: player number must be a positive integer." << std::endl;
        return -1;
    }
    if (nbPlayer <= 0) {
        std::cerr << "Error: player number must be a positive integer." << std::endl;
        return -1;
    }
    return nbPlayer;
}

int main(int ac, char **av)
{
    int nbPlayer = getNbPlayer(ac, av);

    if (nbPlayer == -1)
        return 1;

    Game(nbPlayer).run();
    return 0;
}