#include <iostream>
#include "../headers/ZFraction.h"
using namespace std;

ZFraction::ZFraction() : m_numerator(0), m_denominator(0)
{
}

ZFraction::ZFraction(int numerator) : m_numerator(numerator), m_denominator(1)
{
}

ZFraction::ZFraction(int numerator ,int denominator) : m_numerator(numerator) ,m_denominator(denominator)
{
}

 //stream operators
ostream& operator<<(ostream &stream, ZFraction const& fraction)
{
    fraction.showStream(stream);
    return stream;
}

void ZFraction::showStream(ostream &stream) const
{
    stream << m_numerator << "/" << m_denominator;
}

//Arithmetic operators
ZFraction operator+(ZFraction const& a, ZFraction const& b)
{
    ZFraction copyA(a);
    copyA += b;
    return copyA;
}
 ZFraction& ZFraction::operator+=(ZFraction const& other)
 {
    m_numerator = other.m_denominator * m_numerator + m_denominator * other.m_numerator;
    m_denominator = m_denominator * other.m_denominator;
    
    return *this;
 }

 ZFraction operator*(ZFraction const& a, ZFraction const& b)
{
    ZFraction copyA(a);
    copyA *= b;
    return copyA;
}
 ZFraction& ZFraction::operator*=(ZFraction const& other)
 {
     m_numerator = other.m_numerator * m_numerator;
     m_denominator = other.m_denominator * m_denominator;
    
    return *this;
 }

 // Comparison operator
bool operator>(ZFraction const& a, ZFraction const& b)
{
    a.isBigger(b);
}
bool ZFraction::isBigger(ZFraction const& b) const
{
    if(m_numerator > b.m_numerator && m_denominator > b.m_denominator)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

bool operator==(ZFraction const& a, ZFraction const& b)
{
    a.isEgal(b);
}
bool ZFraction::isEgal(ZFraction const& b) const
{
    if(m_numerator == b.m_numerator && m_denominator == b.m_denominator)
    {
        return true;
    }
    else
    {
        return false;
    }
}