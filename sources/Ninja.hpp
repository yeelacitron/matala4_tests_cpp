#pragma once
#include "Character.hpp"
#include "Point.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <string>

namespace ariel{
    class Ninja : public Character
    {
    private:
        int speed;
    public:
        Ninja(std::string name,Point point,int hit_points,int speed);
        virtual ~Ninja()=default;
        std::string print() override;
        void move(Character* enemy);
        void slash(Character* enemy);
        virtual int getSpeed() const=0;
    };
}



