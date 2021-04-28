#include<bits/stdc++.h>
using namespace std;
 
void pairedElements(int arr[],
                    int sum, int n)
{
  int low = 0;
  int high = n - 1;
 
  while (low < high)
  {
    if (arr[low] + arr[high] == sum)
    {
      cout << "The pair is : (" <<
               arr[low] << ", " <<
               arr[high] << ")" << endl;
    }
    if (arr[low] + arr[high] > sum)
    {
      high--;
    }
    else
    {
      low++;
    }
  }
}
 
// Driver code
int  main()
{
  int n,k;
  cin>>n>>k;
 int arr[n];
 
 for(int i=0;i<n;i++){
 	cin>>arr[i];
 
  pairedElements(arr, k, n);
}
}
