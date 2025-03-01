#ifndef TRANSPORT_H
#define TRANSPORT_H
#include<iostream>
using namespace std;

class Vehicle {
private:
    string brand;
    int year;

public:
    Vehicle(string b, int y): brand(b),year(y){}

    void displayInfo() {
        cout<<"Brand: "<<brand<<", Year: "<<year<<endl;
    }
    string getBrand(){
      return brand;
    }
    void setBrand(string b){
      brand = b;
    }

    int getYear(){
      return year;
    }
    void setYear(int y){
      year = y;
    }

    int getVehicleAge(){
      return 2025 - year;
    }

};

class Car : public Vehicle {
private:
  int seats;

public:
  Car(string b, int y, int s):Vehicle(b, y),seats(s){}

  void showCarDetails() {
    displayInfo();
    cout << "Seats: " << seats << endl;
  }

  int getSeats(){
    return seats;
  }
  void setSeats(int s){
    seats = s;
  }

  void modifySeats(int newSeats){
    if (newSeats > 0){
      seats = newSeats;
      cout << "Seats updated to: " << seats << endl;
    } else
      cout << "Invalid seat count!" << endl;
  }
};

class Bike : public Vehicle {
private:
  bool hasGear;

public:
  Bike(string b, int y, bool g) : Vehicle(b, y), hasGear(g) {}

  void showBikeDetails() {
    displayInfo();
    cout << "Has Gear: " << (hasGear ? "Yes" : "No") << endl;
  }

  bool getHasGear() {
 return hasGear;
}
  void setHasGear(bool g) {
hasGear = g;
}
  bool isGearBike() {
return hasGear;
 }
};


class SportsCar : public Car {
private:
  double topSpeed;

public:
  SportsCar(string b, int y, int s, double ts) : Car(b, y, s), topSpeed(ts) {}

  void showSportsCarDetails() {
    showCarDetails();
    cout << "Top Speed: " << topSpeed << " km/h" << endl;
  }

  double getTopSpeed() {
return topSpeed;
}
  void setTopSpeed(double ts) {
topSpeed = ts;
 }

  void upgradeSpeed(double increase) {
    if (increase > 0) {
      topSpeed += increase;
      cout << "Top Speed increased to: " << topSpeed << " km/h" << endl;
    } else {
      cout << "Invalid speed increase!" << endl;
    }
  }
};


#endif //TRANSPORT_H
