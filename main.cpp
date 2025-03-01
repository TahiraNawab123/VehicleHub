#include<iostream>
#include"Transport.h"
using namespace std;

int main() {
    Vehicle v("Toyota", 2018);
    v.displayInfo();
    cout << "Vehicle Age: " << v.getVehicleAge() << " years" << endl;

    Car c("Honda", 2020, 5);
    c.showCarDetails();
    c.modifySeats(4);

    Bike b("Yamaha", 2022, true);
    b.showBikeDetails();
    cout << "Is Gear Bike: " << (b.isGearBike() ? "Yes" : "No") << endl;

    SportsCar sc("Ferrari", 2021, 2, 320.5);
    sc.showSportsCarDetails();
    sc.upgradeSpeed(30.5);

    return 0;
}
