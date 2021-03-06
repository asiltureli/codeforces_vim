//  Codeforces_cpp
//
//  Created by Mert Asil Türeli
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <bitset>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <algorithm>
#include <sstream>
#include <stack>
#include <iomanip>
#include <assert.h>
#include <cstdio>
#include <cmath>
#include <iterator>
#include <cstring>
using namespace std;

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
 
#define ford(x,n) for(int x = 0; x < n; ++x)
#define fors(x,k,n) for(int x=k; x < n; ++x)
#define forsm(x,k,n) for(int x=k; x > n; --x)
typedef long long ll;
typedef pair<int, int> pii;
 
const int INF = 1e9;
const double EPS = 1e-9;
const double PI = acos(-1.);

int main(int argc, const char * argv[]) {
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); 
        freopen("output.txt", "w", stdout); 
    #endif     
    int cases, temp, a, b, c, d;
    cin >> cases;
    ford(x,cases)
    {
        cin >> a >> b >> c >> d;
        bool flag = 0;
        forsm(aa, b, a-1)
        {
            forsm(bb, c, b-1)
            {
                fors(cc, c, d+1)
                {
                    if(cc < aa + bb)
                    {
                        cout << aa << " " << bb << " " << cc << endl;
                        flag = 1;
                    }
                    if (flag){break;}
                }
                if (flag){break;}
            }
            if (flag){break;}
        }        
    }
    
    return 0;

}