#include <iostream>
using namespace std;
class Fraction
{
  public:
    Fraction(int num, int den = 1) : m_numerator(num), m_denominator(den) {}
    /*const：这个关键字表示该运算符函数不会修改 Fraction 实例的任何成员变量。这确保了你可以在 const
     * 类型的 Fraction 实例上调用这个函数。*/
    operator double() const { return (double)m_numerator / m_denominator; }

  private:
    int m_numerator;   // 分子
    int m_denominator; // 分母
};

int main()
{
    Fraction f(1, 2);
    // 因为 Fraction 重载了 operator double() const，所以可以直接转换为 double 类型
    double d = f;
    cout << d << endl;  // 输出 0.5
    double a = d + 0.1; // 加 0.1
    cout << a << endl;  // 输出 0.6
    return 0;
}
