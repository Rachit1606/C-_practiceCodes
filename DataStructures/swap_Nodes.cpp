#include<bits/stdc++.h>
using namespace std;
int left_arr[1024];
int right_arr[1024];
void swapping(int root, int k){
	queue<int> q;
	q.push(root);
	int level =0;
	while(!q.empty()){
		level++;
		int count = q.size();
		while(count--){
			//first visit node, right, left , swapping;
			int p = q.front();
			q.pop();
			if(level%k==0){
				swap(left_arr[p],right_arr[p]);
			}
			if(left_arr[p] != -1){
				q.push(left_arr[p]);
			}
			if(right_arr[p] != -1){
				q.push(right_arr[p]);
			}
		}
	}
}
void inorder(int root){
	if(root == -1) return ;
	
	inorder(left_arr[root]);
	cout<<root<<" ";
	inorder(right_arr[root]);
}
int main(){
	//initializing and inputs
	int n,a,b,t,k;
	cin>>n;
	for(int i=	1; i<=n;i++){
		cin>>a>>b;
		left_arr[i]= a;
		right_arr[i]=b;
	}
	cin>>t;
	while(t--){
		cin>>k;//for multiple k swapping;
		//swapping function
		swapping(1,k);
		//printing inorder
		inorder(1);
		cout<<endl;
	}
	return 0;
}
