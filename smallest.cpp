#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int array[] = {14, 51, 0, -16, 100};

    int small = INT_MAX;
    int large = INT_MIN;

    int size = sizeof(array) / sizeof(array[0]);

	int indS;
	
	int indL;
	
    for(int i = 0; i < size; i++)
    {
        if(array[i] < small)
        {
            small = array[i];
            indS=i;
        }

        {
        	large = max(array[i], large);
        	indL=i;
		}
    }

    cout << "The smallest value in the array is " << small << endl;
    cout << "The smallest value is on the index " << indS << endl;
    cout << "The largest value in the array is " << large << endl;
    cout << "The largest value is on the index " << indL << endl;

    return 0;
}