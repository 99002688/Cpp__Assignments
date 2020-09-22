
using namespace std;
class Complex{
private:
 int m_real;
 float m_imag;

public:
    Complex();
    Complex(int, int);
    Complex(int);
    Complex operator+();
    Complex operator-();
    Complex operator*();
    Complex operator++();
    Complex operator++(int);
    bool operator==(const Complex &);
    void display();

};

