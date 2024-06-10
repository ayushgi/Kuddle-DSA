#include<bits/stdc++.h>
using namespace std;




int main(){

int k;
cout<<"Enter the number of test cases you have "<<endl;
cin>>k;
while(k--){
    int n,k;
    cout<<"Enter the number of dishes and number of distinct category "<<endl;
    cin>>n>>k;

    map<int,int >mp;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>v[i].second;
    }


    for(int i=0;i<n;i++){
        int a = v[i].first,b=v[i].second;
        if(mp.find(a)!=mp.end()){
            mp[a]=min(mp[a],b);
        }
        else{
            mp[a]=b;
        }
    }

vector<int>ans;
for(auto it:mp){
    ans.push_back(it.second);
}


sort(ans.begin(),ans.end());
if(ans.size()<k){
    cout<<"-1"<<endl;
}
else{
    int i=0;
    int sum=0;
    while(k--){
        sum+=ans[i];
        i++;
    }
    cout<<sum<<endl;
}











}



return 0;
}