//sort range [left; right)
template <typename T>
void quicksort(T *array, int left, int right)
{
	T middle = array[(left + right) >> 1], tmp;
	int i = left, j = right;
	
	while (i <= j)
	{
		while (array[i] < middle) i++;
		while (array[j] > middle) j--;

		if (i <= j)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			i++, j--;
		}
	}

	if (left < j) quicksort(array, left, j);
	if (i < right) quicksort(array, i, right);
}
