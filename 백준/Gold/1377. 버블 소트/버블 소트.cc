#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	//value, index
	vector<pair<int, int>> A(N);

	for (int i = 0; i < N; i++)
	{
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());

	int Max = 0;
	for (int i = 0; i < N; i++)
	{
		//정렬 전 index - 정렬 후 index
		if (Max < A[i].second - i)
			Max = A[i].second - i;
	}

	cout << Max + 1;
}
