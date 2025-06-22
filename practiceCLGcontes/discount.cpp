
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a = 5000){
        cout<<(a*20/100);
    }
    else if(a>=2000 && a<=5000){
        cout<<(a*10/100);
    }
    else if(a<200){
        cout<<"no discount";
    }

    return 0;
}