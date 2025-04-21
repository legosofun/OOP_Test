# ifndef CYLINDER_CPP
# define CYLINDER_CPP


# include "Cylinder.h"
#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;

double PI = M_PI;


double Cylinder :: SurfaceArea(){

    double ans;
    ans = PI*radius*radius*2+PI*2*radius*height;    
    return ans;
}

double Cylinder :: Volume(){
    double ans;
    ans = PI*radius*radius*height;
    return ans;
}

double Cylinder :: Circumference(){
    double ans;
    ans = PI*2*radius;
    return ans;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    double ans1, ans2, ans3;
    ans1 = cldr.Circumference();
    ans2 = cldr.SurfaceArea();
    ans3 = cldr.Volume();
    out << "Circumference: " << fixed << std::setprecision(3) << ans1 << endl;
    out << "SurfaceArea: " << fixed << std::setprecision(3) << ans2 << endl;
    out << "Volume: " << fixed << std::setprecision(3) << ans3 << endl;
    return out;
}

# endif
