int cut_rectangle_into_squares(const int side_A, const int side_B) {
    int a = side_A;
    int b = side_B;
    int mutated_a = 1;
    while (b != 0) {
        mutated_a = b;
        int temp = b;
        b = a % b;
        a = temp;
    }
    return mutated_a;
}
