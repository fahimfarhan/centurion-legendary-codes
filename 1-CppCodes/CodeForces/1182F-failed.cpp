#include <bits/stdc++.h>
using namespace std;

#define PI 2*acos(0)

typedef long long int ll;
// #define ll long long int
// other popular ones=> int64_t, uint64_t => use for 10^18
ll MODULO = 1e9+7;

bool myAssert(bool b);
void testDrivenDevelopment();
int start(int argc=0, char const *argv[] = NULL);


// int n,m;s
vector<int> *g;
bool *isvisited;

int main(int argc, char const *argv[])
{
    /* code */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    /*
    cout << setprecision(8);
    cout << num1 << endl;
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, a,b,p,q,n,x,y;
    double z;
    cin>>t;
    while(t--){
        cin>>a>>b>>p>>q;
        n = ceil( (1.0*p/q)/a - 0.5 );

        x = (int)((1.0*q/p)*(2*n+1)/2);

        cout<<x<<"\n";
    }

    return 0;
}
