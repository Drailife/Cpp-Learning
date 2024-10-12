#include <iostream>
using namespace std;
using namespace std;
class Fraction
{
  public:
    Fraction(int num, int den = 1) : m_numerator(num), m_denominator(den) {}
    Fraction operator+(const Fraction &other)
    {
        return Fraction(m_numerator * other.m_denominator + m_denominator * other.m_numerator,
                        m_denominator * other.m_denominator);
    }
    friend ostream &operator<<(ostream &os, const Fraction &f);

  private:
    int m_numerator;   // 分子
    int m_denominator; // 分母
};

/*重载 << 运算符*/
ostream &operator<<(ostream &os, const Fraction &f)
{
    os << f.m_numerator << "/" << f.m_denominator;
    return os;
}

int main()
{
    Fraction f1(1, 2);
    /* 调用 non-explicit constructor 将 4 转换为 Fraction 对象*/
    /* 然后调用 Fraction::operator+ 进行加法运算 */
    Fraction f2 = f1 + 4;
    cout << f2 << endl;
    return 0;
}
