#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[]={1,4,7,5,97,118,324};
	int size=sizeof (arr)/sizeof(int);
	cout<<size;
	
	int key;
	cin>>key;
	auto *it =find(arr,arr+size,key);
	int index=it-arr;
	if (index==size)
	{
		cout<<key<<"IS NOT PRESENT";
		
	}
		else{
			
			cout<<index;
		}
		return 0;
		
		
	
}
