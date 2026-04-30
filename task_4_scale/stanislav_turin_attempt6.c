int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side)
{
    int a = side_A;
    int b = side_B;
    int last_side = 0;
    while ((a >= min_side) && (b >= min_side)) {
        if (a > b) {
            last_side = b;
            a = a - 2 * b;
            if (a < 0) a = 0;
        }
        else if (a < b) {
            last_side = a;
            b = b - 2 * a;
            if (b < 0) b = 0;
        }
        else {
            last_side = a/2;
            b = b - a;
            if (b < 0) b = 0;
        }
    }
    return last_side;
}