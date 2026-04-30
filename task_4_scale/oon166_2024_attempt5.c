int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side)
{
    int a = side_A;
    int b = side_B;
    int last_side = 0;
    while (1) {
        int current_side = (a < b) ? a : b;
        if (current_side < min_side) {
            break;
        }
        last_side = current_side;
        if (a > b) {
            a -= 2 * b;
            if (a < 0) {
                break;
            }
        }
        else {
            b -= 2 * a;
            if (b < 0) {
                break;
            }
        }
    }
    return last_side;
}