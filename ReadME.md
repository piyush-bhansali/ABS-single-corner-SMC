Anti-lock Braking System (ABS) with continuous dynamics
In this folder you can find the Matlab and Simulink files for the simulation of a braking manoeuvre with ABS control, considering actuators with continuous dynamics.

The project is written with Matlab and Simulink, version r2024b.

The folder contains

ABS_contDyn_model.slx: Simulink file containing the vehicle model (non-linear single corner model) and the ABS controller (Sliding mode control).
burckhardt.m: Matlab function implementing Burckhardt friction model. It takes in input longitudinal wheel slip and the road condition and returns the value of the longitudinal friction coefficient. This model is an approximate form of the Pacejka Magic Formula.
mainABS.m: Matlab script that defines general parameters for the Simulation, runs the Simulink model ABS_contDyn_model.slx and processes simulation results.
figures: contains some images to use as icons for the block masks.
functions: contains some functions (e.g., burckhardt.m).
To simulate the braking manoeuvre, run mainABS.m script.