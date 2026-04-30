int cut_rectangle_in_half(const int max_size, const int min_size) {
	int count = 1;
	int copMax_size = max_size;
	int copMin_size = min_size;
	while (copMax_size != 1 && copMin_size != 1) 
		{
		if (max_size % 2 == 0 || min_size % 2 == 0) {
			if (copMax_size % 2 == 0) {
				copMax_size /= 2;
			}
			else {
				copMin_size /= 2;
			}
			if (copMax_size < copMin_size)
			{
				int x = 0;
				x = copMax_size;
				copMax_size = copMin_size;
				copMin_size = x;
			}
			count++;
		}
	}
	return count;
}
