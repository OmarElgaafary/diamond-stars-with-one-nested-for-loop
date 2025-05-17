#include <iostream>
using namespace std;
int main()
{
	int low = 3, high =  4;
	
	for (int i = 0; i < 7; ++i)
	{
		for (int j = 0; j < 7; ++j)
		{
			if (j >= low && j < high )
			{
				cout << "*";
			
			} else {
				std::cout << " ";
			}
		}
	
		cout << endl;
		if (i < 3)
		{
			low--;
			high++;	
		} else {
			low++;
			high--;
		}
	}
}
