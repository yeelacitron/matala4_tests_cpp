#include "Character.hpp"



using namespace std;
namespace ariel{
    Character::Character(std::string name,Point point,int hit_points):name(name),point(point),hit_points(hit_points){

    }

    bool Character::isAlive() const{
        return true;
    }
    double Character::distance(const Character &other) const{
        return 1.0;
    }
    void Character::hit(int hit_point){

    }
    string Character::getName() const{
        return "";
    }
    Point Character::getLocation() const{
        return Point(0,0);
    }
    int Character::getHitPoints() const{
        return 1;
    }
}