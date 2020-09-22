using namespace std;
class Complex{
private:
 int m_real;
 float m_imag;

public:
    Complex();
    Complex(int, int);
    Complex(int);
    void operator+();
    void operator-();
    void operator*();
    void operator++();
    void operator++(int);
    void operator==(int);
    void display();

};
