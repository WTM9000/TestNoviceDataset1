int unzip_arr(int arr[], const int length) {

	int arr_len = length;
	int new_length = arr_len;
	for (int i = 0; i < new_length-1; i++)
	{

		if (arr[i + 1] < 0)
		{
			int shift = -1 * arr[i + 1] - 2;
			for (int j = new_length + shift - 1; j > i + shift + 1; j--)
				arr[j] = arr[j - shift];

			new_length += shift;

			for (int j = i + 1; j < i + shift + 2; j++)
				arr[j] = arr[i];

		}

	}
	for (int i = 0; i < new_length; i++)
		printf("%d ", arr[i]);

	return new_length;
}