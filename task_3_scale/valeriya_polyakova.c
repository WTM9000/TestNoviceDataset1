int cut_rectangle_into_squares(const int side_A, const int side_B) {
	int a = side_A;
	int b = side_B;
	int last_size;
	if (a == b) {
		last_size = a;
		return last_size;
	}
	while (a > 1 && b > 1) {
		if (a == b) {
			last_size = a;
			break;
		}
		if (a > b) {
			a = a - b;
		}
		if (b > a) {
			b = b - a;
		}
	}
	if (a > b) {
		last_size = b;
	}
	else last_size = a;
	return last_size;
}