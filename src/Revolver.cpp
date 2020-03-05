#include <stdlib.h>
#include "Revolver.hpp"
#include <iostream>
Revolver::Revolver()
:   remain(NB_BULLETS)
{
    size_t nullPtrIdx = rand() % NB_BULLETS;
    this->bullets = new char *[NB_BULLETS];
    for (size_t i = 0; i < NB_BULLETS; i++)
        if (i == nullPtrIdx)
            this->bullets[i] = nullptr;
        else
            this->bullets[i] = new char;
}

void Revolver::shot()
{
    **this->bullets = '\0';
    this->bullets++;
    this->remain--;
}
int Revolver::getRemainBullets() const
{
    return this->remain;
};