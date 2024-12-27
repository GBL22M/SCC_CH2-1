#include <iostream>
using namespace std;

int Partition(int board[], int low, int high, int num)
{
	int pivot = board[high];
	int i = low - 1;
	for (int j = low; j < high; ++j)
	{
		if (num == 1)
		{
			if (board[j] < pivot)
			{
				i += 1;
				swap(board[i], board[j]);
			}
		}
		else if (num == 2)
		{
			if (board[j] > pivot)
			{
				i += 1;
				swap(board[i], board[j]);
			}
		}
	}
	swap(board[i + 1], board[high]);
	return i + 1;
}

void QuickSort(int board[], int low, int high, int num)
{
	if (low < high)
	{
		int pos = Partition(board, low, high, num);

		QuickSort(board, low, pos - 1, num);
		QuickSort(board, pos + 1, high, num);
	}
}

void Print(int board[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		cout << board[i] << " ";
	}
	cout << "\n";
}

int main()
{
	int num;
	int board[10];

	cout << "Input 10 nums\n";
	for (int i = 0; i < 10; ++i)
	{
		cin >> board[i];
	}

	cout << "input 1(ascending order) or 2(descending order)\n";

	cin >> num;

	while (num != 1 && num != 2)
	{
		cout << "input 1 or 2\n";
		cin >> num;
	}
	
	QuickSort(board, 0, 9, num);
	

	Print(board, 10);
}