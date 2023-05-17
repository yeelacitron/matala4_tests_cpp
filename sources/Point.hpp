#pragma once

namespace ariel{
    class Point{
        private:
            double x_coordinate;
            double y_coordinate;
        public:
            Point(double x_coordinate,double y_coordinate);
            ~Point()=default;
            double distance(const Point &other) const;
            static Point moveTowards(Point &src,Point &dst, double distance);
            double getX() const;
            double getY() const;
            friend bool operator==(const Point& point_2, const Point& point_1);

    };
}