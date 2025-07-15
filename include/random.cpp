#include <random>

class Random{
public:
    Random()
      : gen(std::random_device{}())    // seed mt19937 with non‑deterministic rd
    {}

    float get_normal(float mean, float sigma) {
        // Create a distribution
        std::normal_distribution<> distrib(mean, sigma);

        // Generate a random number
        float random_number = distrib(gen);

        return random_number;
    }

private:
    std::mt19937 gen; // Mersenne Twister engine seeded with rd
};
