#include<iostream>
#include "image.h"
Image::Image() :
    m_x(0), m_y(0), m_width(0), m_height(0) {

}
Image::Image(int xx, int yy, int ww, int hh) :
  m_x(xx), m_y(yy), m_width(ww), m_height(hh) {

}
Image::Image(const Image& ref) :
        m_x(ref.m_x), m_y(ref.m_y),m_width(ref.m_width), m_height(ref.m_height) {

}
void Image::move(int Quad, int pos1, int pos2) {
  if(Quad==1){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to first quadrant and now the position is " << m_x <<","<< m_y ;
    }
    else if(Quad==2){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to second quadrant and now the position is " << m_x<<"," << m_y ;
    }
    if(Quad==3){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to third quadrant and now the position is " << m_x <<"," << m_y ;
    }
    if(Quad==4){
    m_x=pos1;
    m_y=pos2;
    std::cout<< "Image has been moved to forth quadrant and now the position is " << m_x<< "," << m_y ;
    }

}
void Image::scale(int wwww, int hhhh) {
  m_width=wwww;
  m_height=hhhh;
  std::cout <<m_width<<","<<m_height;
}
int Image::resize(int num1, int num2) {
  m_x=m_x+num1;
  m_y=m_y+num2;
  std::cout<< m_x <<"," << m_y;
}

void Image::display() {
    std::cout << m_x << "," << m_y << "," << m_width << ","<< m_height<<"\n";
}


