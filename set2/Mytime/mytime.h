#include <iostream>
using namespace std;

class MyTime{
int m_hours, m_minutes, m_seconds;
public:
    MyTime();
    MyTime(int, int, int);
    MyTime(int, int);
    MyTime operator+(const MyTime &);
    MyTime operator-(const MyTime &);
    MyTime operator+(int);
    MyTime operator-(int);
    MyTime operator++();
    MyTime operator++(int);
    MyTime operator+=(int);
    bool operator==(const MyTime &ref);
    bool operator<(const MyTime &ref);
    bool operator>(const MyTime &ref);
    void display();
};
