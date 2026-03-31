#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // Placeholder: no-op program. Reads input to EOF to avoid broken pipe.
    // If input format is unknown, safely consume without output.
    string s; long long dummy=0; 
    while (cin >> s) { dummy += s.size(); }
    if (dummy==LLONG_MIN) cout << ""; // never true; keeps cout referenced
    return 0;
}
