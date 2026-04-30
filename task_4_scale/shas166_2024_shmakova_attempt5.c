int cut_out_paired_squares_from_rectangle(const int side_A, const int side_B, const int min_side) {
	int last_side1;
	int last_side;
	int buf;
	int buf2;
	int peremen;
	if (side_A >= side_B) {
		last_side = side_A;
		buf = side_B;
	}
	else {
		last_side = side_B;
		buf = side_A;
	}
	buf2 = last_side;
	last_side = last_side / 2;
	while (min_side < last_side) {
		peremen = buf2 - last_side * 2;
		if (last_side == buf) {
			break;
		}
		if (last_side < buf) {
			buf = buf - last_side;
			last_side1 = buf;
			if (last_side1 < min_side){
				break;
			}
			else {
				last_side = buf;
				buf = buf2;
				buf2 = last_side;
			}
		}
		if (last_side > buf) {
			last_side = buf;
		}
		if (peremen >= min_side) {
			last_side = peremen;
		}
	}
	return last_side;
}