#include<bits/stdc++.h>
using namespace std;
// int findseven(int arr[][3],int n,int m){
//     int sum=0;
     
//     for(int i=0;i<n;i++){
//            for(int j=0;j<m;j++){
    
//          }
//         }
//     }
//     return sum;
// vector<vector<int>> tarsportmat(vector<vector<int>>&mat){
//     int m=mat.size();
//     int n=mat[0].size();
//     vector<vector<int>>result(n,vector<int>(m));
//     for(int i=0;i<m;i++){
//     for(int j=i;j<n;j++){
//         // result[j][i]=mat[i][j];
//         swap(mat[j][i],mat[i][j]);
//     }
// }
// for(int i=0;i<m;i++){
//     reverse(mat[i].begin(),mat[i].end());

// }
// return mat;


// }
// int main(){
//     vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
//     vector<vector<int>>ans=tarsportmat(mat);
//   for(int i=0;i<ans.size();i++){
//     for(int j=0;j<ans[0].size();j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//   }
// }



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cout<<"enter";
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
