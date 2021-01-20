#ifndef DEF_ZFRACTION
#define DEF_ZFRACTION

class ZFraction
{
    public:

    ZFraction();
    ZFraction(int numerator);
    ZFraction(int numerator, int denominator);
    //stream operators
    void showStream(std::ostream &stream) const;
    //Arithmetic operators
    ZFraction& operator+=(ZFraction const& a);
    ZFraction& operator*=(ZFraction const& a);
    //Comparison operator
    bool isEgal(ZFraction const& b) const;
    bool isBigger(ZFraction const& b) const;
    private:

    int m_numerator;
    int m_denominator;
};

// stream operators
std::ostream& operator<<(std::ostream &stream, ZFraction const& fraction);
//Arithmetic operators
ZFraction operator+(ZFraction const& a, ZFraction const& b);
ZFraction operator*(ZFraction const& a, ZFraction const& b);

// Comparison operators
bool operator>(ZFraction const& a, ZFraction const& b);
bool operator==(ZFraction const& a, ZFraction const& b);

#endif 