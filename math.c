#include "math.h"

pixpoint_t screen_to_pixel(float point_x, float point_y, int screen_width, int screen_height)
{
    pixpoint_t pix;

    pix.x = ((point_x * 2) / screen_width) - 1;
    pix.y = ((point_y * 2) / screen_height) - 1;

    return pix;
}