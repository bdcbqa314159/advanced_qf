#include <iostream>
#include "equity1.hpp"

using namespace std;

int main()
{

    std::cout << "Hello from Advanced Quantitative Finance with C++" << std::endl;

    EQ1 eq1;

    double premium = eq1.get_premium();

    cout << "premium = " << premium << endl;
}
