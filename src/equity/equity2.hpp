#pragma once

class EQ2{

public:
    EQ2(){}
    EQ2(double T, double K, double S1, double S2, double sigma1, double sigma2,double rho, double r, int N, int M):
        T(T), K(K), S1(S1), S2(S2), sigma1(sigma1),sigma2(sigma2),rho(rho),r(r), N(N), M(M){}
     double get_premium() const{
        return find_premium();
     }
private:
    double T{1}, K{100}, S1{120}, S2{100}, sigma1{0.1}, sigma2{0.15},rho{0.5}, r{0.05};
    int N{300}, M{1000};

    double find_premium() const;

};
