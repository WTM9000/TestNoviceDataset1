int find_last_square(const int side_A, const int side_B) 
{
	int a = side_A;
	int b = side_B;
	int last_side;
	while (a != 0 && b != 0)
	{
		if (a > b) {
			a %= b;
			
			}
		else
		{
			b %= a;
		}
			}
			last_side = a + b;
			return last_side;
		}