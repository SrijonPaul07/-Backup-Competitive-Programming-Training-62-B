#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    
    
    for(int i = 0; i < n / 2; i++) {
        swap(v[i],v[n-1-i]);
        
    }
		 for (int i=0;i < n;i++)
    {
			    cout << v[i] << " ";
    }
    cout<<"\n";
    
    
    return 0;
}
