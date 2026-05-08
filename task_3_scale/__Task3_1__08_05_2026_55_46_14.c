int cut_rectangle_into_squares(const int side_A, const int side_B)
{
    int width = side_A, mutated_a = side_B;
	
    while (width > 0 && mutated_a > 0)
    {
        if (width > mutated_a) 
        {
            width %= mutated_a;
        }
        else
        {
            mutated_a %= width;
        }
    }
	
    int square_side = width + mutated_a;
    return square_side;
}
