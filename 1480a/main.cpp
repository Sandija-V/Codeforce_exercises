#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        string s;
        cin >> s;

        for(int j=0; j<s.length(); j++){
            if(j==0 || j%2==0){
                if(s[j]=='a'){
                    s[j]='b';
                }else if(s[j]!='a'){
                    s[j]='a';
                }
            }else{
                if(s[j]=='z'){
                    s[j]='y';
                }else if(s[j]!='z'){
                    s[j]='z';
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
