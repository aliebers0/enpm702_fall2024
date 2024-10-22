#pragma once

#include <iostream>
#include <string>

#include "date.hpp"

namespace driving {
class Date;
class Vehicle;

class Driver {
    public:
        Driver(const std::string& name, driving::Date dob):
        name_{name}, date_of_birth_(dob) {

        }
        void drive_vehicle() const;
        driving::Date get_birthdate const {
            return date_of_birth_;
        }
        std::string get_name() const{
            return name_;
        }

        void set_vehicle(std::shared_ptr<driving::Vehicle> vehicle) {
            vehicle_=vehicle;
        }

    private:
        std::string name_;
        driving::Date date_of_birth_;
        std::weak_ptr<driving::Vehicle> vehicle_;
};  // class Driver
}  // namespace driving
