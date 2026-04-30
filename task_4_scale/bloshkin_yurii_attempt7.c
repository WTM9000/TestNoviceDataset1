int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
	int a = side_A;
	int b = side_B;
	int last_side;
	while (a >= min_side && b > min_side) {
		if (a > b) {
			int sq = a / b;
			if (sq >= 2) {
				a -= b * 2;
				last_side = b;
			}
			else {
				int i = 1;
				int k = 0;
				int b1 = b;

				while (k != 1) {
					b1 -= i; 
					int sq = a / b1;
					if (sq >= 2) {
						a -= b1 * 2;
						b -= b1;
						k += 1;
					}
					else {
						i += 1;
					}
				}
				last_side = b1;
			}
		}
		else {
			int sq = b / a;
			if (sq >= 2) {
				b -= a * 2;
				last_side = a;
			}
			else {
				int i = 1;
				int k = 0;
				int a1 = a;

				while (k != 1) {
					a1 -= i;
					int sq = b / a1;
					if (sq >= 2) {
						b -= a1 * 2;
						a -= a1;
						k += 1;
					}
					else {
						i += 1;
					}
				}
				last_side = a1;
			}
		}
	}
return (last_side);
}