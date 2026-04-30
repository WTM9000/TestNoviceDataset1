int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
    int a = side_A;
    int b = side_B;
    int last_side = 0;
    int max_s = 0;
    int max_possible_side;
    int cut_along_a;
    if (a > b) {
        max_possible_side = a;
    }
    else {
        max_possible_side = b;
    }
    for (int s = max_possible_side; s >= 1; s--) {
        if ((2 * s <= a) && (s <= b)) {
            if (s > max_s) {
                max_s = s;
                cut_along_a = 1;
            }
        }
        if ((2 * s <= b) && (s <= a)) {
            if (s > max_s) {
                max_s = s;
                cut_along_a = 0;
            }
        }
    }
    while ((max_s >= min_side) && (max_s > 0)) {
        last_side = max_s;
        if (cut_along_a) {
            a = a - 2 * max_s;
        }
        else {
            b = b - 2 * max_s;
        }
        if (a > b) {
            max_possible_side = a;
        }
        else {
            max_possible_side = b;
        }
        max_s = 0;
        for (int s = max_possible_side; s >= 1; s--) {
            if ((2 * s <= a) && (s <= b)) {
                if (s > max_s) {
                    max_s = s;
                    cut_along_a = 1;
                }
            }
            if ((2 * s <= b) && (s <= a)) {
                if (s > max_s) {
                    max_s = s;
                    cut_along_a = 0;
                }
            }
        }
    }
    return last_side;
}