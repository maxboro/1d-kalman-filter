#include <random>

class Random{
public:
    Random()
      : _gen(std::random_device{}())    // seed mt19937 with non‑deterministic rd
    {}

    float get_normal(float mean, float sigma) {
        // Create a distribution
        std::normal_distribution<> distrib(mean, sigma);

        // Generate a random number
        float random_number = distrib(_gen);

        return random_number;
    }

private:
    std::mt19937 _gen; // Mersenne Twister engine seeded with rd
};
