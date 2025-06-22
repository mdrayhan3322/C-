

    // #include<bits/stdc++.h>
    // using namespace std;
    // int main(){
    //     vector <int> v = {1,3,4,3,56,4,3,65,5};
    //     sort(v.begin(),v.end());
    //     for(auto a:v)
    //     cout<< a <<" "<<endl;
        
    //     return 0;
      
    // }
    // ----------------------------------------
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        vector<int>v= {1,3,2,4,5,3,6,4,4};
        
        sort(v.begin()-1,v.end()-2);
         
        for(auto  singel_valu : v){
           
            cout<<singel_valu<<"    ";

        }
        return 0;
    }
