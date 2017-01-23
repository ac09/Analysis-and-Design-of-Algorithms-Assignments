#include <bits/stdc++.h>

using namespace std;

//FIBONACCI BY DP

int main()
{
  
    //Pre Computation
	long long int dp[50],i;

	dp[0]=1;
    dp[1]=1;

    for(i=2;i<50;i++)
    	dp[i]=dp[i-1]+dp[i-2];


    int t;
    //cout<<"Enter the Number :";
    cin>>t;
    cout<<"Answer :";
    cout<<endl<<endl;
    cout<<dp[t-1];



    
        return 0;
}

    