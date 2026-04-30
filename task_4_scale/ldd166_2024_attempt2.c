int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
	int last_side = 0;
	int A = side_A;
	int B = side_B;
	while (A >= min_side && B >= min_side) {
		int square_size;
		if (A < B) {
			square_size = A;

		}
		else{
			square_size = B;
		}
		if (square_size < min_side) {
			break;
		}
		if (A <= B) {
			if (B >= 2 * square_size) {
				B -= 2 * square_size;
			}
			else {
				break;
			}
		}
		else{
			if (A >= 2 * square_size) {
				A -= 2 * square_size;
			}
			else {
				break;
			}

		};
		last_side = square_size;
	}
	return last_side;
}