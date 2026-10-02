#include <bits/stdc++.h>
using namespace std;

const double eps = 1e-2;

double LinearFunction(double x) {
    double k = 2.0;
    double b = 1.0;
    return k * x + b;
}

double QuadraticFunction(double x) {
    double a = 1.0;
    double b = -2.0;
    double c = 1.0;
    return a * x * x + b * x + c;
}

double InverseProportionalFunction(double x) {
    double r = 3.0;
    return r / x;
}

double (*functions[])(double) = {LinearFunction, QuadraticFunction, InverseProportionalFunction};

int main() {

    int id, T;
    double x;
    cin >> id >> x >> T;
    for(int i = 1; i <= T; i++) {
        double Ly = functions[id](x - eps);
        double Ry = functions[id](x + eps);
        printf("%.1lf, %.2lf %.2lf\n",x,Ly,Ry);
        x += 10 * (Ly - Ry);
    }

    cout << x << endl;
    

    return 0;
}
