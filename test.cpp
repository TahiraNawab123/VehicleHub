#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Transport.h"

TEST_CASE("Vehicle Age Calculation") {
    Vehicle v("Toyota", 2015);
    REQUIRE(v.getVehicleAge() == 10);
}

TEST_CASE("Car Seat Modification") {
    Car c("Honda", 2020, 5);
    c.modifySeats(7);
    REQUIRE(c.getSeats() == 7);
}

TEST_CASE("Bike Gear Check") {
    Bike b("Yamaha", 2022, true);
    REQUIRE(b.isGearBike() == true);
}

TEST_CASE("Sports Car Speed Upgrade") {
    SportsCar sc("Ferrari", 2021, 2, 300.0);
    sc.upgradeSpeed(20.0);
    REQUIRE(sc.getTopSpeed() == 320.0);
}

TEST_CASE("Vehicle Getter and Setter") {
    Vehicle v("Ford", 2018);
    v.setBrand("BMW");
    v.setYear(2020);
    REQUIRE(v.getBrand() == "BMW");
    REQUIRE(v.getYear() == 2020);
}

TEST_CASE("Car Getter and Setter") {
    Car c("Audi", 2019, 4);
    c.setSeats(5);
    REQUIRE(c.getSeats() == 5);
}

TEST_CASE("Bike Getter and Setter") {
    Bike b("Suzuki", 2021, false);
    b.setHasGear(true);
    REQUIRE(b.getHasGear() == true);
}

TEST_CASE("SportsCar Getter and Setter") {
    SportsCar sc("Lamborghini", 2022, 2, 350.0);
    sc.setTopSpeed(380.0);
    REQUIRE(sc.getTopSpeed() == 380.0);
}
