#include "equity1.hpp"
#include "random.hpp"
#include <vector>
#include <cmath>

double EQ1::find_premium() const{
    double sum_payoff = 0., premium = 0., dt = T/N;
    std::vector<double> S(N+1);

    SampleBoxMuller normal;

    for (int j = 0; j<M; ++j){
        S[0] = S0;

        for (int i = 0; i<N; ++i){
            double epsilon = normal();

            S[i+1] = S[i]*(1+ r*dt+sigma*std::sqrt(dt)*epsilon);
        }

        static double diff = 0.;
        diff = S[N]-K;
        sum_payoff+=std::max(diff, 0.);
    }

    premium = std::exp(-r*T)*(sum_payoff/M);

    return premium;
}
