#include <bits/stdc++.h>
using namespace std;
using LL = long long;
LL exgcd(LL a, LL b, LL& x, LL &y){
	if(b){
		x = 1;
		y = 0;
		return a;
	}else{
		int d = exgcd(b, a%b, y, x);
		y -= a/b*x;
		return d;
	}
}
int main(){
	LL m, n, x, y;
	cin>>m>>n;
	exgcd(m, n, x, y);
	cout<<(x+n)%n<<endl;
	return 0;
}
