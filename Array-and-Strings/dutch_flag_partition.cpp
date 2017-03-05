template <typename T>
void dutch_flag_partition(vector<T> &A, const int &pivot_index)
{
	T pivot = A[pivot_index];

	int smaller = 0;
	int index = 0;
	int larger = A.size() - 1;

	while (index <= larger)
	{
		if (A[index] < pivot)
			swap(A[smaller++], A[index++]);
		else if (A[index] == pivot)
			++index;
		else // A[index] > pivot
			swap(A[index], A[larger--]);
	}
}
