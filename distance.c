#include <stdio.h>
#include <math.h>

double degreesToRadians(double degrees)
{
    return degrees * 3.14 / 180.0;
}
double haversine(double lat1, double lon1, double lat2, double lon2)
{ 
     lat1 = degreesToRadians(lat1);
    lon1 = degreesToRadians(lon1);
    lat2 = degreesToRadians(lat2);
    lon2 = degreesToRadians(lon2);

    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;
    double a = sin(dlat / 2.0) * sin(dlat / 2.0) + cos(lat1) * cos(lat2) * sin(dlon / 2.0) * sin(dlon / 2.0);
    double c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));
}
   int main()
    {
        double lat1, lon1, lat2, lon2;

        printf("Enter the latitude and longitude of the first location (in degrees):\n");
        printf("Latitude 1 (-90 to 90): ");
        scanf("%lf", &lat1);
        printf("Longitude 1 (-180 to 180): ");
        scanf("%lf", &lon1);
