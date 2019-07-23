#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t,i,j,k,l,countt;
    cin>>t;
    string s1;
    for(i=0;i<t;i++){
        cin>>s1;
        l=s1.length();
        sort(s1.begin() , s1.end());
        countt = distance(s1.begin() , unique(s1.begin(),s1.begin()+l) );
        if(countt%2 == 0){
            cout<<"Player2";
        }
        else{
            cout<<"Player1";
        }
    }
    return 0;
}
