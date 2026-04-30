int cut_rectangle_in_half(const int side_A, const int side_B)
{
	int count = 1;
	int a = side_A;
	while (a % 2 == 0)
	{
		count *= 2;
		a = a / 2;
	}
	int b = side_B;
	while (b % 2 == 0)
	{
		count *= 2;
		b = b / 2;
	}
	return count;
}