#include <random>

float random_number_normal(float mean, float sigma) {
    // Create a random number engine and seed it
    std::random_device rd; // Non-deterministic seed source
    std::mt19937 gen(rd()); // Mersenne Twister engine seeded with rd

    // Create a distribution
    std::normal_distribution<> distrib(mean, sigma);

    // Generate a random number
    float random_number = distrib(gen);

    return random_number;
}
