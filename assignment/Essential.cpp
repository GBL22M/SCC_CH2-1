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
	int board[5];

	for (int i = 0; i < 5; ++i)
	{
		cin >> board[i];
	}
	int sum = Sum(board, 5);
	float avg = Avg(sum, 5);

	cout << "sum: " << sum << "\n" << "avg: " << avg << "\n";
}