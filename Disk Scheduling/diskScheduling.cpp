#include<bits/stdc++.h>
using namespace std;




class Diskscheduling 
{
	public :
		float FCFS ( int arr[] , int n , int init)
		{
			float ans = abs (init - arr[0]);
			for(int i=1;i<n;i++)
			{
				ans = ans + abs(arr[i]-arr[i-1]);
			}
		
			return (ans/n);

        
		}
};
int main()
{
	int n;
		cout<<"Enter the No. of disk"<<endl;
			cin>>n;
		int disk[n];
			cout<<"Enter the disk sequence"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>disk[i];
			}
			
			cout<<"Enter the Position of Head"<<endl;
			int init;
			cin>>init;
			
			Diskscheduling obj;
			
			cout<<endl<<"Average :- "<<obj.FCFS(disk,n,init);
	
}