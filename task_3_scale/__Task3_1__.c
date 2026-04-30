int cut_rectangle_into_squares(const int side_A, const int side_B)
{
    int width = side_A, height = side_B;
	
    while (width > 0 && height > 0)
    {
        if (width > height) 
        {
            width %= height;
        }
        else
        {
            height %= width;
        }
    }
	
    int square_side = width + height;
    return square_side;
}