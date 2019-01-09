typedef struct vec2
{
    float x;
    float y;

} vec2_t;

typedef struct pixpoint
{
    int x;
    int y;

} pixpoint_t;

pixpoint_t screen_to_pixel(float point_x, float point_y, int screen_width, int screen_height);