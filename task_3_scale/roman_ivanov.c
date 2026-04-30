int cut_rectangle_into_squares(const int side_A, const int side_B) {
    int last_Side = 0;
    int temp_Side1 = side_A;
    int temp_Side2 = side_B;

    while (temp_Side1 >= 1 && temp_Side2 >= 1) {
        int bigger = (temp_Side1 >= temp_Side2) ? 1 : 0;     
        if (bigger == 1) {
            temp_Side1 = temp_Side1 % temp_Side2;
            last_Side = temp_Side2;
        }
        else {
            temp_Side2 = temp_Side2 % temp_Side1;
            last_Side = temp_Side1;
        }
    }
    return last_Side;
}