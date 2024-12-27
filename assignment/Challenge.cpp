#include <iostream>
using namespace std;

int PartitionAscend(int board[], int low, int high)
{
	int pivot = board[high];
	int i = low - 1;
	for (int j = low; j < high; ++j)
	{
		if (board[j] < pivot)
		{
			i += 1;
			swap(board[i], board[j]);
		}
	}
	swap(board[i + 1], board[high]);
	return i + 1;	
}

int PartitionDescend(int board[], int low, int high)
{
	int pivot = board[high];
	int i = low - 1;
	for (int j = low; j < high; ++j)
	{
		if (board[j] > pivot)
		{
			i += 1;
			swap(board[i], board[j]);
		}
	}
	swap(board[i + 1], board[high]);
	return i + 1;
}

void QuickSortA(int board[], int low, int high)
{
	if (low < high)
	{		
		int pos = PartitionAscend(board, low, high);		

		QuickSortA(board, low, pos - 1);
		QuickSortA(board, pos + 1, high);
	}
}

void QuickSortD(int board[], int low, int high)
{
	if (low < high)
	{		
		int pos = PartitionDescend(board, low, high);

		QuickSortD(board, low, pos - 1);
		QuickSortD(board, pos + 1, high);
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
	if (num == 1)
	{
		QuickSortA(board, 0, 9);
		Print(board, 10);
	}
	else if(num == 2)
	{
		QuickSortD(board, 0, 9);
		Print(board, 10);
	}
	else
	{
		cout << "input 1 or 2\n";
		cin >> num;
	}
}