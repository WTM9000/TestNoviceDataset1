int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
    int a = side_A;
    int b = side_B;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    int last_side = 0;
    while (1) {
        int s = 0;
        for (int candidate = b; candidate >= min_side; --candidate) {
            if (2 * candidate <= a) {
                s = candidate;
                break;
            }
        }
        if (s == 0) break;
        last_side = s;
        a = a - 2 * s;     
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
    }
    return last_side;
}