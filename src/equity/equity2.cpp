#include "equity2.hpp"
#include "random.hpp"
#include <vector>
#include <cmath>

double EQ2::find_premium() const{
    double sum_payoff = 0., premium = 0., dt = T/N;
    std::vector<double> S_1(N+1);
    std::vector<double> S_2(N + 1);

    SampleBoxMuller normal;

    for (int j = 0; j<M; ++j){
        S_1[0] = S1;
        S_2[0] = S2;

        for (int i = 0; i<N; ++i){
            double epsilon1 = normal();
            double epsilon2 = normal();

            S_1[i+1] = S_1[i]*(1+ r*dt+sigma1*std::sqrt(dt)*epsilon1);
            S_2[i + 1] = S_1[i] * (1 + r * dt + sigma1 * std::sqrt(dt) * (epsilon1*rho+std::sqrt(1-rho*rho)*epsilon2));
        }

        sum_payoff+=std::max(S_1[N], S_2[N]);
    }

    premium = std::exp(-r*T)*(sum_payoff/M);

    return premium;
}
