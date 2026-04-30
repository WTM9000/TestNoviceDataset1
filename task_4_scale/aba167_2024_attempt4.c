int cut_out_paired_squares_from_rectangle(int a, int b, int m) {
    int last_side = 0;
    while (a >= m && b >= m) {
        int side = (a < b) ? a : b;
        int max_pairs;
        if (a > b) {
            max_pairs = a / side;
        }
        else {
            max_pairs = b / side;
        }
        max_pairs = (max_pairs > 2) ? 2 : max_pairs;
        if (max_pairs == 0) {
            max_pairs = 1;
        }
        last_side = side;
        if (a > b) {
            a -= max_pairs * side;
        }
        else {
            b -= max_pairs * side;
        }
        if (a < m || b < m) {
            break;
        }
    }
    return last_side;
}