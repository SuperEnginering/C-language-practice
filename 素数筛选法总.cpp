#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
using namespace std;
const int maxn=10000000;
int primelist[maxn/10];
bool isprime[maxn+5];
void MakePrimeList()
{
    int cnt=0;
    memset(isprime,true,sizeof(isprime));
    int i;
	for( i=2;i<=maxn;i++)
    {
        if(isprime[i])
        primelist[++cnt]=i;
        int j;
        for( j=1;j<=cnt;j++)
        {
            if(i*primelist[j]>maxn)
            break;
            isprime[i*primelist[j]]=false;
            if(i%primelist[j]==0)
            break;
        }
    }
    return ;
}
int main()
{
    int n,t;
    int cas=0;
    cin>>t;
    MakePrimeList();
    while(t--)
    {
        int num=0,cnt=1;
        scanf("%d",&n);
        int i;
		for( i=1;primelist[i]<=n/2;i++)//从素数表中第一个数到大小为n/2是因为a<b
        {
            if(isprime[n-primelist[i]])
                num++;
        }
        printf("Case %d: %d\n",++cas,num);
    }
    return 0;
}
