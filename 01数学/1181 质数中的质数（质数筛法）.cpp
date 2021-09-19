#include <bits/stdc++.h>
using namespace std;
const int N = 1e7;
int nums[N];
bool st[N];
int primes[N];
int k = 1;
void getPrimes(){
	for(int i = 2; i < N; i++){
		if(!st[i]) primes[k++] = i;
		for(int j = 1; primes[j] < N/i; j++){
			st[primes[j]*i] = true;
			if(i % primes[j] == 0) break;
		}
	}
}
int main(){
	int n;
	cin>>n;
	st[0] = 1;
	st[1] = 1;
	getPrimes();
	int t = lower_bound(primes+1, primes+k, n) - primes;
	for(int i = t; i < k; i++){
		if(!st[i]) {
			cout<<primes[i]<<endl;
			break;
		}
	}
	return 0;
} 
