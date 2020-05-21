/**
    @file h05.h
    @author Stephen Gilbert
    @version CS 150
*/
#ifndef H05_H
#define H05_H
/**
 * Calculates the focal length of a lens.
 * @param d thickness of the lens
 * @param r1 radii r1
 * @param r2 radii r2
 * @param n the refractive index
 * @return the focal length
 */


double focalLength(double d, double r1, double r2, double n)
{
    double result = 0.0;
    double x = (1 / r1) - (1 / r2);
    double y = ((n - 1) * d);
    double z = y / (n * r1 * r2);

    result = (n - 1) * (x + z);

    return 1 / result;


}

#endif
