#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
double sum=0;
vector<int>arr (n);
for(int i=0;i<n;i++){
 cin>>arr[i];
 sum +=arr[i];
}

cout<<"average"<<sum/n<<endl;
}
