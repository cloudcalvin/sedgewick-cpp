#ifndef POINT_H
#define POINT_H

#include <ostream>

struct Point {
    float x;
    float y;

    friend std::ostream& operator<<(std::ostream&, const Point&);
};

float Distance(Point a, Point b);

bool IsCollinear(Point p1, Point p2, Point p3, float epsilon);

#endif /* POINT_H */
