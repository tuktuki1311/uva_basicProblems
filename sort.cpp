
#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long int i=0,n,m,x,l;
    int a[100000];

    while(scanf("%lld",&n)!=EOF)
       {
           a[i]=n;
           l=i+1;
        sort(a,a+l);

        if(l%2==0){
            x=a[i/2]+a[(i/2)+1];
            m=x/2;
        printf("%lld\n",m);
        }

        else{
            x=i/2;
            m=a[x];
            printf("%lld\n",m);
        }
      i++;
    }

    return 0;
}
