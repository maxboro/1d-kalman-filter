#include <iostream>
#include "./include/random.cpp"
#include "./include/kalman.cpp"


// settings
constexpr float position_estimate = 0; // What we believe about position now
constexpr float uncertainty = 1;       // How uncertain we are about that belief
constexpr float process_noise = 0.01;  // "Model error" – how much we think the position could change unpredictably between steps
constexpr float measurement_noise = 0.5; // How noisy we believe our sensor is
constexpr float true_position = 5.0;
constexpr int n_measurements = 20;
constexpr bool verbose = true;


int main(){
    Random random;
    KalmanFilter kalman(position_estimate, uncertainty, process_noise, measurement_noise, verbose); 
    for (int n_measurement = 0; n_measurement < n_measurements; n_measurement++){
        float measurement = random.get_normal(true_position, std::sqrt(measurement_noise));
        std::cout <<  "\nMeasurement #" << n_measurement << ": " << measurement << std::endl;
        kalman.update(measurement);
        kalman.report();
    }
    
    return 0;
}
