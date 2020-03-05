#include <vector>

#define NB_BULLETS 6

class Revolver
{
    public:
        Revolver();
        ~Revolver() = default;

        void shot();

        int getRemainBullets() const;

    private:
        int remain;
        char **bullets;
};