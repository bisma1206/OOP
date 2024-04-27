
// HOMEWORK # 04
// BITF21M549

#include "iostream"
using namespace std;
class RationalNumbers
{
private:
    int numenator;
    int denumenator;

public:
    // Mutators
    void setN(int N)
    {
        numenator = N;
    }

    void setD(int D)
    {
        if (D > 0)
            denumenator = D;
        else
            denumenator = 1;
    }

    void setRationalNumbers(int n, int d)
    {
        setN(n);
        setD(d);
    }

    // Accessors
    int getN() const
    {
        return numenator;
    }

    int getD() const
    {
        return denumenator;
    }

    // Constructors
    RationalNumbers(int num, int deno)
    {
        setN(num);
        setD(deno);
    }
    RationalNumbers(int N)
    {
        setN(N);
    }

    // overload stream-insertion operator

    friend ostream &operator<<(ostream &print, const RationalNumbers &o1);

    // overload stream-insertion operator

    friend istream &operator>>(istream &input, RationalNumbers &o1);

    // Plus(+)binary operator

    RationalNumbers operator+(const RationalNumbers &o1) const
    {
        RationalNumbers temp(0, 0);

        temp.numenator = (this->numenator) * o1.denumenator + (this->denumenator) * o1.numenator;

        temp.denumenator = this->denumenator * o1.denumenator;

        return temp;
    }

    // Minus (-)binary operator

    RationalNumbers operator-(const RationalNumbers &o1) const
    {
        RationalNumbers temp(0, 0);

        temp.numenator = (this->numenator) * o1.denumenator - (this->denumenator) * o1.numenator;

        temp.denumenator = this->denumenator * o1.denumenator;

        return temp;
    }

    // Multiply(*)binary operator

    RationalNumbers operator*(const RationalNumbers &o1) const
    {
        RationalNumbers temp(0, 0);

        temp.numenator = this->numenator * o1.numenator;

        temp.denumenator = this->denumenator * o1.denumenator;

        return temp;
    }

    // Divide(/)binary operator

    RationalNumbers operator/(const RationalNumbers &o1) const
    {
        RationalNumbers temp(0, 0);

        temp.numenator = this->numenator * o1.denumenator;

        temp.denumenator = this->denumenator * o1.numenator;

        return temp;
    }

    // Less than(<)binary operator  comaparison of two rational numbers

    bool operator<(const RationalNumbers &o1) const
    {
        return (this->numenator * o1.denumenator) < (this->denumenator * o1.numenator);
    }

    // Equal(==)binary operator  comaparison of two rational numbers

    bool operator==(const RationalNumbers &o1) const
    {
        return ((this->numenator) * o1.denumenator == (this->denumenator) * o1.numenator);
    }

    // Minus(-) unary operator

    RationalNumbers operator-() const
    {
        if (numenator > 0)
        {
            return RationalNumbers((-numenator), (denumenator));
        }
        else
        {
            return RationalNumbers((numenator), (denumenator));
        }
    }

    // Logical not ! unary operator

    bool operator!()
    {
        return (numenator < 0 || denumenator < 0);
    }
};
// overload stream-insertion operator

ostream &operator<<(ostream &print, const RationalNumbers &o1)
{
    print << o1.numenator << "/" << o1.denumenator << endl;

    return print;
}

// overload stream-insertion operator

istream &operator>>(istream &input, RationalNumbers &o1)
{
    cout << "Numenator:";

    input >> o1.numenator;

    cout << "Denumenator:";

    input >> o1.denumenator;

    o1.setD(o1.denumenator);

    return input;
}

int main()
{
    RationalNumbers N1(4, 9), N2(8, 7);
    cout << N1 << N2;
    cout << N1 / N2;
    cout << N1 + N2;
    cout << N1 - N2;
    cout << N1 * N2;

    return 0;
}
