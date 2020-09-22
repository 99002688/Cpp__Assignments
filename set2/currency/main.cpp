#include<iostream>
#include "Currency.h"
using namespace std;

Currency::Currency():
    m_rupees(0),m_paise(0) {}
Currency::Currency(int r, int p) : m_rupees(r), m_paise(p) {}
    Currency::Currency(int r) : m_rupees(r),m_paise(0) {}
    Currency Currency::operator+(const Currency &ref) {
        int tpaise = m_paise + ref.m_paise;
        int trupees = m_rupees + ref.m_rupees;
        return Currency(trupees,tpaise);
    }
    Currency Currency::operator-(const Currency &ref) {
        int tpaise = m_paise - ref.m_paise;
        int trupees = m_rupees - ref.m_rupees;
        return Currency(trupees,tpaise);
    }
    Currency Currency::operator+(int npaise) {
        int tpaise = m_paise + npaise;
        int trupees = m_rupees;
        return Currency(trupees,tpaise);
    }
    Currency Currency::operator-(int npaise) {
        int tpaise = m_paise - npaise;
        int trupees = m_rupees;
        return Currency(trupees,tpaise);
    }
    Currency Currency:: operator++() {
        ++m_paise; // TODO: mm > 60
        cout<<m_paise<<endl;
    }
    Currency Currency:: operator++(int dummy) {
        for(int i=0;i<dummy;i++)
        {
           ++m_paise;
        }

        cout<<m_paise<<endl;
    }
    bool Currency:: operator==(const Currency &ref) {
        return m_rupees == ref.m_rupees && m_paise == ref.m_paise;
    }
    bool Currency::operator< (const Currency &ref) {
        if(m_rupees<ref.m_rupees)
        {
            cout<<"Rupees is less than referral Rupees.\n";
        }
        else if (m_paise<ref.m_paise)
        {
            cout<<"Paise is less than referral Paise.\n";
        }
        //TODO : your logic here
    }
    bool Currency::operator> (const Currency &ref) {
        if(m_rupees>ref.m_rupees)
            {
            cout<<"Rupees is Greater than referral Rupees.\n";
        }
        else if (m_paise>ref.m_paise)
        {
            cout<<"Paise is Greater than referral Paise.\n";
        }
   }
    void Currency:: display() {
        std::cout << m_rupees << ":" << m_paise << "\n";
    }
int main() {

    return 0;
}
