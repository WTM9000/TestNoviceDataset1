int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) 
{
    int a = side_A;
    int b = side_B;
    int last_side = 0;
    while (1) 
    {
        int current_side = a < b ? a : b;
        if (current_side < min_side) 
        {
            break;
        }
        last_side = current_side;
        if (a < b) 
        {
            b -= 2 * current_side;
            if (b < 0) 
            {
                b += current_side;
            }
        } 
        else 
        {
            a -= 2 * current_side;
            if (a < 0) 
            {
                a += current_side;
            }
        }
    }
    return last_side;
}