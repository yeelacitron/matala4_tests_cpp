#include "Point.hpp"

namespace ariel{

    Point::Point(double x_coordinate,double y_coordinate):x_coordinate(x_coordinate),y_coordinate(y_coordinate){

    }
    
    double Point::distance(const Point &other) const{
        return 1.0;
           }
    Point Point::moveTowards(Point &src,Point &dst, double distance){
        return Point(0,0);
    }
    double Point::getX() const{
        return 1;
    }
    double Point::getY() const{
        return 2;
    }
    bool operator==(const Point& point_1, const Point& point_2){
        return true;
    }
    
}