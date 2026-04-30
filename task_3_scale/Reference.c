int cut_rectangle_into_squares(const int side_A, const int side_B)
{
    int width = side_A, height = side_B;
    while (width != height)
    {
        if (width > height) 
        {
            int reminder_width = width % height;
            width = (reminder_width > 0) ? reminder_width : height;
        }
        else
        {
            int reminder_height = height % width;
            height = (reminder_height > 0) ? reminder_height : width;
        }
    }
    int square_side = width;
    return square_side;
}