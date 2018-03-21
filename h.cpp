#include<bits/stdc++.h>
using namespace std;
#define 

void SOE(int n,int ){
	bool prime[n+1];
	int 
	memset(prime,true,sizeof(prime));
	for( p=2;p<=sqrt(n);p++){
		if(prime[p]==true){
			for(int i=p*2;i<=n;i+=p){
				prime[i]=false;
			}
		}
	}
	num[0]==2;
	for(i=3;i<=n;i++){
		if(prime[i])
			num[k++]=i;
	}
	
	
}

int main(){
	SOE();
	long long int t;
	cin>>t;
	while(t--){
		
		long long int x;
		cin>>x;
		
		
	}
}