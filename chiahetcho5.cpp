#include<bits/stdc++.h>

using namespace std;
int snp(long long k)
{
	if (k==0) return 1;
	k%=4;
	if (k==1) return 2;
	if (k==2) return 4;
	if (k==3) return 8;
	if (k==0) return 6;
}

int main ()
{
	long long t;
	cin>>t;
	cin.ignore();
	while (t--)
	{
		string a;
		getline(cin,a);
		long long s=0;
		for (long long i=0;i<a.length();i++)
		{
			if (a[i]=='1') s+=snp(a.length()-1-i);
		}
		if (s%5==0) cout<<"Yes"<<endl; else cout<<"No"<<endl;
	}
	return 0;
}


