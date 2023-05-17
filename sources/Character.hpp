#pragma once
#include "Point.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>
namespace ariel{
    class Character{
        private:
        Point point;
        int hit_points;
        std::string name;
        public:
        Character(std::string name,Point point,int hit_points);
        virtual ~Character() = default;
        bool isAlive() const;
        double distance(const Character &other) const;
        void hit(int hit_point);
        std::string getName() const;
        Point getLocation() const;
        virtual std::string print()=0;
        int getHitPoints() const;
    };
}