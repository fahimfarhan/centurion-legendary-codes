#include <bits/stdc++.h>
using namespace std;

#define si(x) scanf("%d",&x)
#define sf(x) scanf("%f",&x)

#define pi(x) printf("%d\n",x)
#define pf(x) printf("%.4f\n",x)

#define ll long long int

#define sll(x) scanf("%I64d",&x);
#define pll(x) printf("%-I64d\n",x);

int main(int argc, char const *argv[])
{
	/* code */
  /* Soln soln */
  // freopen("input.txt","r",stdin);
  // freopen("output.txt","w",stdout);

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

	int n,a,k, b, maximus;
    maximus = 0;
    a = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b;
        maximus = max(b,maximus);
        a+=b;
    }

    while(n*maximus<=2*a){
        maximus++;
    }
    k = maximus;
    cout<<k<<"\n";



	return 0;
}
