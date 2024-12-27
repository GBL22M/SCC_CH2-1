#include <iostream>
using namespace std;

int Sum(int board[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += board[i];
	}

	return sum;
}

float Avg(int sum, int size)
{
	return (float)sum / size;
}

int main()
{
	int N;

	cout << "총 갯수: ";
	cin >> N;

	int* board = new int[N];

	cout << "원하는 N개의 숫자를 입력하세요\n";
	for (int i = 0; i < N; ++i)
	{
		cin >> board[i];
	}
	int sum = Sum(board, N);
	float avg = Avg(sum, N);

	cout << "sum: " << sum << "\n" << "avg: " << avg << "\n";
}