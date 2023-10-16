#include <iostream>
#include "equity1.hpp"
#include "equity2.hpp"

using namespace std;

int main()
{

    EQ1 eq1;

    double premium = eq1.get_premium();

    cout << "premium = " << premium <<std::endl;

    EQ2 eq2;

    double premium_basket = eq2.get_premium();

    cout << "premium = " << premium_basket << std::endl;
}
