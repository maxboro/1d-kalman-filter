// #include "./include/main.cpp"
#include <iostream>

// settings
constexpr float position_estimate = 0; // What we believe about position now (starts at 0)
constexpr float uncertainty = 1;       // How uncertain we are about that belief (starts high)
constexpr float process_noise = 0.01;  // "Model error" – how much we think the position could change unpredictably between steps
constexpr float measurement_noise = 0.5; // How noisy we believe our sensor is
constexpr float true_position = 5.0;
constexpr int n_measurements = 20;
constexpr bool verbose = true;


int main(){
    std::cout << "Test" << std::endl;
    return 0;
}
