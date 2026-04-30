int cut_rectangle_into_squares(int side_A, int side_B) {
    while (side_A != side_B) {
        if (side_A > side_B) {
            side_A -= side_B;
        }
        else {
            side_B -= side_A;
        }
    }
    return side_A;
}