#include<iostream>
using namespace std;
int main()
{
	int n,at[20],p[20],bt[20],wt[20],tat[20],i,temp;
	cout<<"Enter the no. of processes: ";
	cin>>n;
	for(i=0;i<n;i++){
		p[i]=i;
		cout<<"Enter the Arrival and Burst Time for process "<<i<<" ";
		cin>>at[i]>>bt[i];
		at[i]=0;
	}
	for(i=0;i<n;i++){
		for(int k=i+1;k<n;k++){
			if(bt[i]>bt[k]){
				temp=bt[i];
				bt[i]=bt[k];
				bt[k]=temp;
				
				temp=p[i];
				p[i]=p[k];
				p[k]=temp;
			}
		}
	}
	float wtavg,tatavg;
	wt[0]=wtavg=0;
	tat[0]=tatavg=bt[0];
	for(i=0;i<n;i++){
		wt[i]=wt[i-1]+bt[i-1]-at[i];
		tat[i]=tat[i-1]+bt[i]-at[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	
	for( i=0;i<n;i++){
		cout<<p[i]<<" | "<<at[i]<<" | "<<bt[i]<<" | "<<wt[i]<<" | "<<tat[i];
		cout<<endl;
	}
	cout<<"avg waiting time: "<<wtavg<<endl;
	cout<<"avg turn around time: "<<tatavg<<endl;
	return 0;
}
