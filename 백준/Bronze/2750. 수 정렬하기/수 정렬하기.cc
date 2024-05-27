#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int>& A)
{
	int n = A.size();
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (A[j] < A[min])
				min = j;
		}

		swap(A[min], A[i]);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	SelectionSort(A);

	for (const int& num : A)
	{
		cout << num << endl;
	}
}