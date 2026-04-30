int cut_rectangle_into_squares(const int side_A, const int side_B) {
	int a = side_A;
	int b = side_B;
	int last_size;

	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
		if (a == b) {
			last_size = a;
			return last_size;
		}
		if (a < 1 || b < 1) {
			last_size = a;
			break;
		}
	}
	if (a > b) {
		last_size = b;
	}
	else {
		last_size = a;
		return last_size;
	}
}
