#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int N;
        cin>>N;
        vector <int> height(N,0);
        for(int i=0;i<N;i++)
        cin>>height[i];
        vector <int> minimcost(N+1);
        minimcost[2]=abs(height[2]-height[1]);
        minimcost[i]=min(minimcost[i-1]+abs(height[i-1]-height[i]),minimcost[i-2]+abs(height[i-2]+height[i])):
        cout<<minimcost[N];
        
    }
    
};