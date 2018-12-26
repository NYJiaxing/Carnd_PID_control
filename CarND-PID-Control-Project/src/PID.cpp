#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() 
{

}

PID::~PID() {}

void PID::Init(double tau_p, double tau_i, double tau_d) {
	this->Kp = tau_p;
	this->Ki = tau_i;
	this->Kd = tau_d;
	p_error = 0;
	i_error = 0;
	d_error = 0;
}

void PID::UpdateError(double cte) {
	double prev_error = p_error;	
  	p_error = cte;
	i_error += cte;
	d_error = cte - prev_error;

}

double PID::TotalError() {
	return -Kp * p_error - Ki * i_error - Kd * d_error;
}



