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
- estimate_covariance (default 1) - How uncertain we are about that belief
- process_variance (default 0.01) - "Model error" – how much we think the position could change unpredictably between steps
- measurement_variance (default 0.5) - How noisy we believe our sensor is
- true_position (default 5) - True position
- n_measurements (default 20) - Number of measurements
- verbose (default true) - Flag to show intermediate calculations


# Example
Terminal:
```terminal

Measurement #0: 5.41973
Kalman, intermediate:
Innovation covariance: 1.51
Innovation: 5.41973
Kalman gain: 0.668874
Kalman:
Position estimate: 3.62512
Estimate covariance: 0.334437

Measurement #1: 4.38854
Kalman, intermediate:
Innovation covariance: 0.844437
Innovation: 0.763426
Kalman gain: 0.40789
Kalman:
Position estimate: 3.93651
Estimate covariance: 0.203945

Measurement #2: 5.25779
Kalman, intermediate:
Innovation covariance: 0.713945
Innovation: 1.32128
Kalman gain: 0.299666
Kalman:
Position estimate: 4.33245
Estimate covariance: 0.149833

Measurement #3: 5.98914
Kalman, intermediate:
Innovation covariance: 0.659833
Innovation: 1.65669
Kalman gain: 0.242232
Kalman:
Position estimate: 4.73376
Estimate covariance: 0.121116

Measurement #4: 4.01315
Kalman, intermediate:
Innovation covariance: 0.631116
Innovation: -0.720611
Kalman gain: 0.207753
Kalman:
Position estimate: 4.58405
Estimate covariance: 0.103876

Measurement #5: 4.55635
Kalman, intermediate:
Innovation covariance: 0.613876
Innovation: -0.0277004
Kalman gain: 0.185504
Kalman:
Position estimate: 4.57891
Estimate covariance: 0.0927519

Measurement #6: 4.27425
Kalman, intermediate:
Innovation covariance: 0.602752
Innovation: -0.304664
Kalman gain: 0.170471
Kalman:
Position estimate: 4.52697
Estimate covariance: 0.0852356

Measurement #7: 5.78704
Kalman, intermediate:
Innovation covariance: 0.595236
Innovation: 1.26006
Kalman gain: 0.159997
Kalman:
Position estimate: 4.72858
Estimate covariance: 0.0799983

Measurement #8: 4.61193
Kalman, intermediate:
Innovation covariance: 0.589998
Innovation: -0.116652
Kalman gain: 0.15254
Kalman:
Position estimate: 4.71078
Estimate covariance: 0.0762699

Measurement #9: 6.08642
Kalman, intermediate:
Innovation covariance: 0.58627
Innovation: 1.37563
Kalman gain: 0.147151
Kalman:
Position estimate: 4.91321
Estimate covariance: 0.0735753

Measurement #10: 6.2746
Kalman, intermediate:
Innovation covariance: 0.583575
Innovation: 1.36139
Kalman gain: 0.143213
Kalman:
Position estimate: 5.10818
Estimate covariance: 0.0716063

Measurement #11: 5.23476
Kalman, intermediate:
Innovation covariance: 0.581606
Innovation: 0.126582
Kalman gain: 0.140312
Kalman:
Position estimate: 5.12594
Estimate covariance: 0.0701559

Measurement #12: 4.21051
Kalman, intermediate:
Innovation covariance: 0.580156
Innovation: -0.91543
Kalman gain: 0.138163
Kalman:
Position estimate: 4.99946
Estimate covariance: 0.0690814

Measurement #13: 4.10904
Kalman, intermediate:
Innovation covariance: 0.579081
Innovation: -0.890419
Kalman gain: 0.136563
Kalman:
Position estimate: 4.87786
Estimate covariance: 0.0682817

Measurement #14: 5.34344
Kalman, intermediate:
Innovation covariance: 0.578282
Innovation: 0.465581
Kalman gain: 0.13537
Kalman:
Position estimate: 4.94089
Estimate covariance: 0.0676848

Measurement #15: 6.44991
Kalman, intermediate:
Innovation covariance: 0.577685
Innovation: 1.50902
Kalman gain: 0.134476
Kalman:
Position estimate: 5.14382
Estimate covariance: 0.067238

Measurement #16: 5.61334
Kalman, intermediate:
Innovation covariance: 0.577238
Innovation: 0.469529
Kalman gain: 0.133806
Kalman:
Position estimate: 5.20664
Estimate covariance: 0.0669031

Measurement #17: 4.98199
Kalman, intermediate:
Innovation covariance: 0.576903
Innovation: -0.224648
Kalman gain: 0.133303
Kalman:
Position estimate: 5.17669
Estimate covariance: 0.0666517

Measurement #18: 4.34841
Kalman, intermediate:
Innovation covariance: 0.576652
Innovation: -0.828285
Kalman gain: 0.132925
Kalman:
Position estimate: 5.06659
Estimate covariance: 0.0664627

Measurement #19: 4.57596
Kalman, intermediate:
Innovation covariance: 0.576463
Innovation: -0.490639
Kalman gain: 0.132641
Kalman:
Position estimate: 5.00152
Estimate covariance: 0.0663206
```
