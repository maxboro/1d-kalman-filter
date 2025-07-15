# Description
Simple example of Kalman filter in C++. Based on [this](https://www.kaggle.com/code/max398434434/1d-kalman-filter) notebook.

# How to run

#### Simulation:
```bash
make           # Builds the project
./main     # Runs the executable
```

#### Clean:
```bash
make clean     # Cleans up build files
```

# Settings
In `main.cpp` you can modify simulation parameters.
- position_estimate (default 0) - What we believe about position now
- uncertainty (default 1) - How uncertain we are about that belief
- process_noise (default 0.01) - "Model error" – how much we think the position could change unpredictably between steps
- measurement_noise (default 0.5) - How noisy we believe our sensor is
- true_position (default 5) - True position
- n_measurements (default 20) - Number of measurements
- verbose (default true) - Flag to show intermediate calculations


# Example
Terminal:
```terminal
Measurement #0: 5.76442
Kalman, intermediate:
Innovation covariance: 1.51
Innovation: 5.76442
Kalman gain: 0.668874
Kalman:
Position estimate: 3.85567
Uncertainty: 0.334437

Measurement #1: 6.09022
Kalman, intermediate:
Innovation covariance: 0.844437
Innovation: 2.23455
Kalman gain: 0.40789
Kalman:
Position estimate: 4.76712
Uncertainty: 0.203945

Measurement #2: 5.16515
Kalman, intermediate:
Innovation covariance: 0.713945
Innovation: 0.39803
Kalman gain: 0.299666
Kalman:
Position estimate: 4.8864
Uncertainty: 0.149833

Measurement #3: 5.31474
Kalman, intermediate:
Innovation covariance: 0.659833
Innovation: 0.42834
Kalman gain: 0.242232
Kalman:
Position estimate: 4.99015
Uncertainty: 0.121116

Measurement #4: 4.44333
Kalman, intermediate:
Innovation covariance: 0.631116
Innovation: -0.546823
Kalman gain: 0.207753
Kalman:
Position estimate: 4.87655
Uncertainty: 0.103876

Measurement #5: 5.04061
Kalman, intermediate:
Innovation covariance: 0.613876
Innovation: 0.164057
Kalman gain: 0.185504
Kalman:
Position estimate: 4.90698
Uncertainty: 0.0927519

Measurement #6: 5.66026
Kalman, intermediate:
Innovation covariance: 0.602752
Innovation: 0.753279
Kalman gain: 0.170471
Kalman:
Position estimate: 5.0354
Uncertainty: 0.0852356

Measurement #7: 5.34006
Kalman, intermediate:
Innovation covariance: 0.595236
Innovation: 0.304668
Kalman gain: 0.159997
Kalman:
Position estimate: 5.08414
Uncertainty: 0.0799983

Measurement #8: 4.71266
Kalman, intermediate:
Innovation covariance: 0.589998
Innovation: -0.371481
Kalman gain: 0.15254
Kalman:
Position estimate: 5.02748
Uncertainty: 0.0762699

Measurement #9: 5.16255
Kalman, intermediate:
Innovation covariance: 0.58627
Innovation: 0.135071
Kalman gain: 0.147151
Kalman:
Position estimate: 5.04735
Uncertainty: 0.0735753

Measurement #10: 5.43181
Kalman, intermediate:
Innovation covariance: 0.583575
Innovation: 0.384462
Kalman gain: 0.143213
Kalman:
Position estimate: 5.10241
Uncertainty: 0.0716063

Measurement #11: 5.14567
Kalman, intermediate:
Innovation covariance: 0.581606
Innovation: 0.0432611
Kalman gain: 0.140312
Kalman:
Position estimate: 5.10848
Uncertainty: 0.0701559

Measurement #12: 6.18494
Kalman, intermediate:
Innovation covariance: 0.580156
Innovation: 1.07645
Kalman gain: 0.138163
Kalman:
Position estimate: 5.25721
Uncertainty: 0.0690814

Measurement #13: 5.71209
Kalman, intermediate:
Innovation covariance: 0.579081
Innovation: 0.454886
Kalman gain: 0.136563
Kalman:
Position estimate: 5.31933
Uncertainty: 0.0682817

Measurement #14: 4.55147
Kalman, intermediate:
Innovation covariance: 0.578282
Innovation: -0.767855
Kalman gain: 0.13537
Kalman:
Position estimate: 5.21538
Uncertainty: 0.0676848

Measurement #15: 4.94335
Kalman, intermediate:
Innovation covariance: 0.577685
Innovation: -0.272032
Kalman gain: 0.134476
Kalman:
Position estimate: 5.1788
Uncertainty: 0.067238

Measurement #16: 5.68595
Kalman, intermediate:
Innovation covariance: 0.577238
Innovation: 0.507152
Kalman gain: 0.133806
Kalman:
Position estimate: 5.24666
Uncertainty: 0.0669031

Measurement #17: 5.07317
Kalman, intermediate:
Innovation covariance: 0.576903
Innovation: -0.173487
Kalman gain: 0.133303
Kalman:
Position estimate: 5.22354
Uncertainty: 0.0666517

Measurement #18: 3.95586
Kalman, intermediate:
Innovation covariance: 0.576652
Innovation: -1.26768
Kalman gain: 0.132925
Kalman:
Position estimate: 5.05503
Uncertainty: 0.0664627

Measurement #19: 4.66216
Kalman, intermediate:
Innovation covariance: 0.576463
Innovation: -0.392871
Kalman gain: 0.132641
Kalman:
Position estimate: 5.00292
Uncertainty: 0.0663206
```
