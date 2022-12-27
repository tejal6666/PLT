#include <iostream>
using namespace std;

int main()
{
	int i, count = 1;
	for (i = 1;; i++)
	{
		// lcm of 2,3,4,5 and 6 =60.
		if (60 * i % 7 == 0)
		{
			if (count == 1 || count == 2 || count == 4)
			{
				cout << 60 * i << endl;
				count++;
			}

			if (count > 4)
			{

				break;
			}
		}
	}
	return 0;
}