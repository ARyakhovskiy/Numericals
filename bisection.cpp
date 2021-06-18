#include <cmath>
#include <iostream>
#include <iomanip>

double f(const double& x)
{
    return x*x*x-4;
}

double bisection_method(double xmin, double xmax, const double& eps, double(*f)(const double&))
{
    double a = xmin;
    double b = xmax;
    if (f(a)*f(b) > 0)
    {
        std::cout << "Interval may not contain the root. Enter another interval" << std::endl;
        return MAXFLOAT;
    }
    while ((b-a) > eps)
    {
        double t = 0.5*(a+b);
        if (f(a)*f(t) < 0)
        {
            b = t;
        }
        else
        {
            a = t;
        }
    }
    return 0.5*(a+b);
}

int main()
{
    std::cout.precision(5);
    double x = 0;
    double xmin = -0.5;
    double xmax = 4;
    double eps = 1e-05;
    x = bisection_method(xmin, xmax, eps, f);

    std::cout << x << std::endl;

    return 0;
}