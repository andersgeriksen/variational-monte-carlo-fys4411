#pragma once
#include "hamiltonian.h"
#include <vector>

class HarmonicOscillator : public Hamiltonian {
public:
    HarmonicOscillator(class System* system, double omega);
    double computeLocalEnergy(std::vector<class Particle*> particles);

private:
    double m_omega = 0;
};

