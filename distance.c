#include <stdio.h>
#include <math.h>

double degreesToRadians(double degrees)
{
    return degrees * 3.14 / 180.0;
}
double haversine(double lat1, double lon1, double lat2, double lon2)
{