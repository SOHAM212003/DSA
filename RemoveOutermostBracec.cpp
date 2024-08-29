#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string S) {
        string ans;
        int cnt = 0;
        for (char c : S) {
            if (c == '(' && cnt++ > 0) ans += c;
            if (c == ')' && cnt-- > 1) ans += c;
        }
        return ans;
    }

int main(){
    string str= "(()())(())";
    cout<<str<<endl;
    cout<<removeOuterParentheses(str)<<endl;
    return 0;
}