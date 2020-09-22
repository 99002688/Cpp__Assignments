#include<math.h>
#include "point.h"
Point::Point():
    m_x(0), m_y(0) {
}
Point::Point(int a, int b):
    m_x(a),m_y(b) {
}
Point::Point(const Point& ref) :
    m_x(ref.m_x), m_y(ref.m_y) {
}
void Point::distanceFromOrigin() {
    int d =sqrt(m_x*m_x + m_y*m_y);
    std::cout << "distance from Origin is " << d <<" unit\n";
}
void Point::quadrant(Quadrant x) {
    switch(x)
    {
        case q1:
            cout<<"First Quadrant";
            break;
        case q2:
            cout<<"Second Quadrant";
            break;
        case q3:
            cout<<"Third Quadrant";
            break;
        default:
            cout<<"Fourth Quadrant";
            break;
    }

}

void Point::isOrigin() {
    if(m_x==0 && m_y==0)
        std::cout << "Point is on the Origin";
    else
        std::cout<<"Point is not on the Origin";
}

void Point::isOnXAxis() {
    if(m_y==0)
        std::cout << "Point lies on X axis";
    else
        std::cout<<"Point is not on X axis";
}

void Point::isOnYAxis() {
    if(m_x==0)
        std::cout << "Point lies on Y axis";
    else
        std::cout << "Point is not on Y axis";

}

void Point::display() {
    std::cout << m_x << "," << m_y << "\n";
}

