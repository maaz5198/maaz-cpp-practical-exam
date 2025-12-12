#include <iostream>
#include <string>
using namespace std;


class Vehicle {
private:
    string model;
    double speed; 

public:
    
    void setModel(string m) {
        model = m;
    }

    
    void setSpeed(double s) {
        if (s > 0) {
            speed = s;
        } else {
            cout << "Invalid speed!" << endl;
        }
    }


    string getModel() const {
        return model;
    }

    double getSpeed() const {
        return speed;
    }

    virtual double calculateTime(double distance) const = 0; 
};

class Car : public Vehicle {
public:
    double calculateTime(double distance) const override {
        return distance / getSpeed(); 
    }
};


class Bike : public Vehicle {
public:
    double calculateTime(double distance) const override {
        return distance / getSpeed();   
    }
};


int main() {
    Car car;
    Bike bike;

    car.setModel("Toyota Supra");
    car.setSpeed(180); 

    bike.setModel("Yamaha MT-15");
    bike.setSpeed(90);

    double distance = 360; 

    cout << "------------ Vehicle Time Calculation (Abstraction Demo) ------------" << endl;

    cout << "\nCar Model: " << car.getModel() << endl;
    cout << "Time to travel " << distance << " km: "
         << car.calculateTime(distance) << " hours" << endl;

    cout << "\nBike Model: " << bike.getModel() << endl;
    cout << "Time to travel " << distance << " km: "
         << bike.calculateTime(distance) << " hours" << endl;

    return 0;
}