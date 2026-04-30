int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
    int a = side_A;
    int b = side_B;
    int last_side = 0;
    while (1) {
        int square_side = (a < b) ? a : b;
        if (square_side < min_side) {
            break;
        }
        last_side = square_side;
        if (a < b) {
            b -= 2 * square_side;
        }
        else {
            a -= 2 * square_side;
        }
        if (a <= 0 || b <= 0) {
        }
    }
    return last_side;
}