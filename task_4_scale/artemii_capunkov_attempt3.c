int сut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
	int last_side = 0;
	int a = side_A;
	int b = side_B;
	while (a >= min_side && b >= min_side) {
		if (a > b) {
			int squares = a/b;
			if (squares >= 2) {
				a -= 2 * b;
				last_side = b;
			}
			else {
				last_side = b;
				a -= b;
			}
		}
		else {
			int squares=b/a;
			if (squares >= 2) {
				b -= 2 * a;
				last_side = a;
			}
			else {
				last_side = a;
				b -= a;
			}
		}
	}
	return last_side;		
}