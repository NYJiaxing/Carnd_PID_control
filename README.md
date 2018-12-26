# Carnd_PID_control
## Reflection
1. Describe the effect each of the P, I, D components had in your implementation.
* P - Proportional Control
   The proportional control output is the error, the difference between the target steering angle and the actual steering angle, multiplied by the Kp, the proportional gian. If the Kp is too large, the steering angle will rapidly approach the setpoint, overshoot then oscillate around it. If the Kp is too small, the steering angle will approach the setpoint slowly and never reach it, the vehicle will "keep" making a turing and never turn back
* I - Integral Control
   The intergral control fix the the steering drift error, even though the steering angle stop oscillating, there is a tiny small bias between the steady state angle and the target angle. The output of integral control is using Ki, the integral gain multiple the sum of the previous error.
* D - Differential Control
   The differential control encure the steering angle turning to the targer angle smoothly rather than rapidly and cuase the oscillate. It calculate by derivative error multiply by the differential gain Kd. The delta t is calculate by t minus t-1. The larger the Kd, the faster the steering angle decrease.
   
2. Describe how the final hyperparameters were chosen
*  a. Start with Kp = 0, Ki = 0, Kd= 0. 
*  b. Tune P term - System should be at full power unless near the setpoint.
*  c. Tune Ki until steady-state error is removed.
*  d. Tune Kd to dampen overshoot and improve responsiveness to outside influences
