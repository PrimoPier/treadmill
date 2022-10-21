#include <iostream>
using namespace std;

class Treadmill {
public:
	Treadmill(double, double, int);
	Treadmill(double, double);
	Treadmill();
	void setSpeed(double);
	double getSpeed();
	void setIncline(double);
	double getIncline();
	void setCalBurned(int);
	int getCalBurned();
	void printTreadmill(double, double, double);
private:
	double speed, incline;
	int calBurned;
};

int main() {
	// Treadmill T1, T2(3.5, 12.6), T3(4.1, 8.2, 150)

	// print values for each of the three treadMills

	// T1.setIncline(7.50);
	// T1.setCalBurned(240);
	// T1.setSpeed(6.2);
	// invoke print method for T1 (?)

	// T2.setIncline(T1.getIncline());
	// T2.setCalBurned(T3.getCalBurned());
	// T2.setSpeed(T1.getSpeed());
	// invoke print method for T2 (?)

	// output should include speed, incline, and calories burned

	// example output:
	// Treadmill with maximum speed of 7.5 mph and maximum incline of 12.5
	// Client has exercised for 25 minutes and has burned 100 calories
	return 0;
}

Treadmill::Treadmill(double S, double I, int C) {
	speed = S;
	incline = I;
	calBurned = C;
}

Treadmill::Treadmill(double S, double I) {
	speed = S;
	incline = I;
}

Treadmill::Treadmill() {
	speed = 0;
	incline = 0;
	calBurned = 0;
}

void Treadmill::setSpeed(double S) {
	speed = S;
}

double Treadmill::getSpeed() {
	return speed;
}

void Treadmill::setIncline(double I) {
	incline = I;
}

double Treadmill::getIncline() {
	return incline;
}

void Treadmill::setCalBurned(int C) {
	calBurned = C;
}

int Treadmill::getCalBurned() {
	return calBurned;
}

void Treadmill::printTreadmill(double S, double I, double C) {
	cout << "Treadmill is set with max speed of " << Treadmill::getSpeed() << " mph, & maximum incline of " << Treadmill::getIncline() << " degrees." << endl;
	cout << "Client has burned " << Treadmill::getCalBurned() << " calories.";
}
