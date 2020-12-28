#include<bits/stdc++.h>
using namespace std;

vector<int>plusOne(vector<int> &A) {
   int n=A.size(),carry=0;
   cout<<n;
    vector<int>ans;
    cout<<ans.size();
    ans.push_back((1+A[n-1])%10);
    carry=(1+A[n-1])/10;
    for(int i=n-2;i>=0;i--){
        ans.push_back((carry+A[i])%10);
        carry=(carry+A[i])/10;
    }
    if(carry)
     ans.push_back(carry);

    int x=ans.size();

   for(int i=0;i<x/2;i++)
      swap(ans[i],ans[x-i-1]);

   while(ans[0]==0){
       ans.erase(ans.begin());
    }

   return ans;
} 


int main(){
	vector<int> A={0,0,0,0,1,2 ,4,5,6,7};
	vector<int > v=plusOne(A);
	for(int i=0;i<v.size();i++){

		cout<<v[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}
