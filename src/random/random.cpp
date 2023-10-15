#include "random.hpp"
#include <iostream>
#include <cmath>

double SampleBoxMuller::operator()(){
    do{
        x = 2.*rand() / static_cast<double>(RAND_MAX) -1;
        y = 2. * rand() / static_cast<double>(RAND_MAX) - 1;
        xysquare = x*x+y*y;
    }while(xysquare >= 1.);

    result = x*std::sqrt(-2*std::log(xysquare)/xysquare);
    return result;
}
