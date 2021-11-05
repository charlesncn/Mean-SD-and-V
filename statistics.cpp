#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, i;
    float var, variance, sd;
    float num[100], sum=0.0, sumVar=0.0, average;

    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }
    average = sum / n;
    
    for(int j=0;j<n;j++){
    	
        sumVar+=((num[j] - average)*(num[j] - average));
        
    }
	variance=(sumVar/n);
	sd=sqrt(variance);
    
    cout << "Average = " << average<<"\nVariance is "<<variance<<"\nStandard deviation is "<<sd<<endl;

    return 0;
}
