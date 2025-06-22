
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    
    
   int  even = 0, odd = 0, positive = 0, nag = 0;
    for(int i=0; i<=n; i++){
        cin>>a;
        if(a %2 == 0 ){
            even++;
        }
        else{
            odd++;
        }
    
        if(a>0){
            positive++;
        }
        else if(a<0){
            nag++;
        }
        
    }
    cout<<"even number = "<<even<<endl;
    cout<<"odd nubmer = "<<odd<<endl;
    cout<<"positive number = "<<positive<<endl;
    cout<<"nag number  = "<<nag;

    return 0;

}