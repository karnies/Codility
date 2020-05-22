

// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

bool compare(int a, int b)
{
	return a < b;
}
int solution(vector<int> &A) {
	// write your code in C++14 (g++ 6.2.0)

	// sort and find diff between A[i+1] and A[i] is greater than 1
	int N = A.size();
	int smallest_int = 0;
	sort(A.begin(), A.end(), compare);
	for (int i = 0; i < N; i++)
	{
		if (A[i] > 0)
			break;
	}

	// All elements are 0 or minus
	if (i == N)
		return 1;

	// first plus element  gt 1
	if (A[i] > 1)
		return 1;

	// there is only one element
	if (N - i == 1)
		return 2;

	for (; i < N - 1; i++)
	{
		if (A[i + 1] - [A[i] > 1)
			return A[i] + 1;
	}

	return A[i] + 1;
}
