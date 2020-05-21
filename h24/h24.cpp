/**
 *  @author brian porter
 *  @date 10/31/2019
 *  @file h24.cpp
 */
#include <string>
#include <iostream>
using namespace std;

string STUDENT = "bporter11"; // Add your Canvas/occ-email ID

#include "h24.h"

// Add your code here
void translate(unsigned char * const img, int width, int height, int dx, int dy)
{
    Pixel * pixel = reinterpret_cast<Pixel *>(img);
    for (int row = 0; row < height ; row++)
    {
        if(dx < 0) dx = width - abs(dx) % width;
        else dx = dx % width;
        for (int j = 0; j < dx; j++)
        {
            auto r = pixel + (row * width);
            auto temp = r[width-1];
            for (int i = width - 1 ; i > 0; i--)
            {
                r[i] = r[i-1];
            }
            r[0] = temp;
        }
    }
        if (dy < 0) dy = height-abs(dy) % height;
        else dy = dy % height;
        for (int i = 0; i < dy; i++)
        {
            for (int col = 0; col < width; col++)
            {
                auto r = pixel + width * (height -1);
                auto lastRow = r[col];
                for (int row = height - 1; row > 0; row--)
                pixel[(row * width) + col] = pixel[(row - 1) * width + col];
                pixel[col] = lastRow;
            }
        }
}



/////////////// STUDENT TESTING ////////////////////
int run()
{
    // Just some samples for class
    cout << "Try some code on your own" << endl;

    return 0;
}
