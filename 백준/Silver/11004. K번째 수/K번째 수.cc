#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, K;
    cin >> N >> K;

    vector<int> numbers(N);
    for (int i = 0; i < N; ++i) {
        cin >> numbers[i];
    }

    nth_element(numbers.begin(), numbers.begin() + K - 1, numbers.end());
    cout << numbers[K - 1] << endl;

    return 0;
}