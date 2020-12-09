#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int allvisited;

int TSP(int mask,int position,int dist[][1000],int dp[][1000],int n)
{
	
	if(mask==allvisited)
	{
		return dist[position][0];
	}
	if(dp[mask][position]!=-1)
	{
	   return dp[mask][position];
	}

	int ans = INT_MAX;

	for(int city=0;city<n;city++)
	{

		if((mask&(1<<city))==0){

			int newAns = dist[position][city] + TSP( mask|(1<<city), city,dist,dp,n);
			ans = min(ans, newAns);
		}

	}
	
	return dp[mask][position] = ans;
} 

int main()
{
	int n;
	cout<<"Enter number of cities"<<endl;
	cin>>n;

	cout<<"Enter the distance cost matrix"<<endl;
	int dist[1000][1000];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>dist[i][j];
		}
	}
	allvisited=(1<<n)-1;

	int dp[1000][1000];

    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            dp[i][j] = -1;
        }
    }
	cout<<"Travelling Saleman Distance is "<<TSP(1,0,dist,dp,n)<<endl;
	return 0;
}
