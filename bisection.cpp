#include <cmath>
#include <iostream>
#include <iomanip>

double f(const double& x)
{
    return x*x-4;
}

double bisection_method(double xmin, double xmax, const double& eps, double(*f)(const double&))
{
    double a = xmin;
    double b = xmax;
    while ( (b-a) > eps)
    {
        if (f(a)*f(b) < 0)
        {
               
        }
        else
        {
         
        }
    }
}

int main()
{
    std::cout.precision(5);

    return 0;
}