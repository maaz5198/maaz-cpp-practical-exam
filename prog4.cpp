#include <iostream>
using namespace std;


class Vehicle {
public:
    virtual void displayDetails() {
        cout << "This is a generic vehicle." << endl;
    }

    virtual ~Vehicle() { }
};

class Car : public Vehicle {
private:
    string brand;
    int doors;

public:
    Car(string b, int d) : brand(b), doors(d) { }

    void displayDetails() override {
        cout << "Car Details:" << endl;
        cout << "Brand: " << brand << endl;
        cout << "Number of doors: " << doors << endl;
    }
};


class Bike : public Vehicle {
private:
    string type;
    bool hasGear;

public:
    Bike(string t, bool g) : type(t), hasGear(g) { }

    void displayDetails() override {
        cout << "Bike Details:" << endl;
        cout << "Type: " << type << endl;
        cout << "Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

class Truck : public Vehicle {
private:
    int loadCapacity;

public:
    Truck(int capacity) : loadCapacity(capacity) { }

    void displayDetails() override {
        cout << "Truck Details:" << endl;
        cout << "Load Capacity: " << loadCapacity << " tons" << endl;
    }
};

int main() {
    Vehicle* vehicles[3];

    vehicles[0] = new Car("Toyota", 4);
    vehicles[1] = new Bike("Sports Bike", true);
    vehicles[2] = new Truck(12);

    cout << "=== Vehicle Details ===" << endl;
    for (int i = 0; i < 3; i++) {
        vehicles[i]->displayDetails();
        cout << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete vehicles[i];
    }

    return 0;
}