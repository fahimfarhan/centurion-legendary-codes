/* Author : Qazi Fahim Farhan (@fahimfarhan) */
/* May the CodeForces be with you! */

#include <iostream>
// #include <sstream>
// #include <cstdio>
// #include <cmath>
// #include <cstring>
// #include <cctype>
// #include <string>
#include <vector>
// #include <list>
// #include <set>
// #include <map>
// #include <queue>
// #include <stack>
// #include <algorithm>
// #include <functional>
#include <iomanip>      // std::setprecision


using namespace std;

#define PI 2*acos(0)

//typedef long long int ll;
 #define ll long long int
// other popular ones=> int64_t, uint64_t => use for 10^18
ll MOD = 1e9+7;

// int n,m;
vector<int> *g;
bool *isvisited;

int main(int argc, char const *argv[])
{
    /* code */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    /*
    std::cout << std::fixed;
    std::cout << std::setprecision(10);
    cout << num1 << endl;
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T, oddKount, evenKount, n, x, a;
    bool b;

    cin>>T;
    while(T--) {
        cin>>n>>x;


        evenKount = 0; oddKount = 0;

        for(int i=0; i<n; i++) {    
            cin>>a;
            if( (a&1) == 1 ) { oddKount++; }
            else{   evenKount++;    }
        }

        b = false;
        for(int i=1; (i<=oddKount) && (i<=x) ; i+=2) {
            int currOddKount = i;
            int neededEvenKount = x - i;
            if(neededEvenKount <= evenKount ) {     b = true; break;   }    
        }

        if(b){  cout<<"Yes\n";  }
        else{   cout<<"No\n";   }

    }


    return 0;
}

