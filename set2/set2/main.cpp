#include <iostream>
#include "complex.h"
#include "mytime.h"


MyTime::MyTime():
    m_hours(0),m_minutes(0), m_seconds(0){
}

MyTime::MyTime(int h, int m , int s) :
    m_hours(h), m_minutes(m), m_seconds(s){
}

MyTime::MyTime(int h1, int m1 ) :
    m_hours(h1), m_minutes(m1){
}

MyTime MyTime::operator+(const MyTime &ref) {

    int thrs = m_hours + ref.m_hours;
    int tmins = m_minutes + ref.m_minutes;
    int tsec= m_seconds + ref.m_seconds;
    //return tmp;
    std::cout<<thrs<<":"<<tmins<<":"<<tsec;
}

MyTime MyTime::operator-(const MyTime &ref) {

    int thrs = m_hours - ref.m_hours;
    int tmins = m_minutes - ref.m_minutes;
    int tsec= m_seconds - ref.m_seconds;
    //return tmp;
    std::cout<<thrs<<":"<<tmins<<":"<<tsec;
}

 MyTime MyTime::operator+(int ns) {

  if(ns>=60)
  {
   m_minutes= m_minutes+(ns)/60;
   m_seconds=m_seconds%60;
  }
  if(m_minutes>=60)
  {
   m_hours=m_hours+(m_minutes)/60;
   m_minutes=m_minutes%60;
  }



  std::cout<<m_hours<<":"<<m_minutes<<":"<<m_seconds;
  }

  MyTime MyTime::operator-(int ns) {

  if(ns>=60)
  {
      m_minutes=m_minutes-(ns)/60;
      m_seconds=m_seconds

  }


  }





int main(){

    return 0;
}
