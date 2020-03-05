#include <vector>
#include "Revolver.hpp"

class Game
{
    public:
        Game(const int &nbPlayer);
        ~Game() = default;

        void run();

    private:
        int nbPlayer_;
        std::vector<Revolver> revolvers;
};