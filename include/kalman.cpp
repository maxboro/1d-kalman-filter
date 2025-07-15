#include <iostream>

class KalmanFilter{
public:
    KalmanFilter(float position_estimate, float uncertainty, float process_variance, 
            float measurement_variance, bool verbose):
        _position_estimate(position_estimate),
        _uncertainty(uncertainty),
        _process_variance(process_variance),
        _measurement_variance(measurement_variance),
        _verbose(verbose)
        {}

    void update(float measurement){
        // Predict
        _uncertainty = _uncertainty + _process_variance;

        // Innovation covariance S_k = P_{k|k-1} + R
        // how “big” we expect those residuals to be, on average
        const float innovation_covariance = _uncertainty + _measurement_variance;

        // Innovation (measurement residual)
        const float innovation = measurement - _position_estimate;
        
        // Update
        const float kalman_gain = _uncertainty / innovation_covariance;
        _position_estimate = _position_estimate + kalman_gain * innovation;
        _uncertainty = (1 - kalman_gain) * _uncertainty;

        if (_verbose){
            std::cout << "Kalman, intermediate: \n"
                << "Innovation covariance: " << innovation_covariance << "\n"
                << "Innovation: " << innovation << "\n"
                << "Kalman gain: " << kalman_gain
                << std::endl; 
        }
    }

    void report(){
        std::cout << "Kalman:\n"
            << "Position estimate: " << _position_estimate << "\n"
            << "Uncertainty: " << _uncertainty 
            << std::endl;
    }

private:
    float _position_estimate;
    float _uncertainty;
    float _process_variance;
    float _measurement_variance;
    bool _verbose;
};
