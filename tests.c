#include <aiv_unit_test.h>
#include "math.h"

TEST(conversion_screen_to_pixel)
{
    pixpoint_t pixpos = screen_to_pixel(0, 0, 600, 600);

    ASSERT_THAT(pixpos.x == 300);
    ASSERT_THAT(pixpos.y == 300);
}

int main(int argc, char **argv)
{
    RUN_TEST(conversion_screen_to_pixel);

    PRINT_TEST_RESULTS();
    return 0;
}