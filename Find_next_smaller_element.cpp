#include <iostream>
#include<stack>
#include<vector>
using namespace std;

void findSmallerElemnent(vector<int>& input , vector<int>& ans , int n){
    stack<int> st;
    // default value in stack
    st.push(-1);

    for(int i =n-1 ; i>=0 ; i-- ){
        int element = input[i];
    
    while(st.top() >= element){
       st.pop();
    }
    ans[i] = st.top();
    st.push(element);
    }

}

int main(){
vector<int>input;
input.push_back(2);
input.push_back(1);
input.push_back(4);
input.push_back(3);

int n = input.size();
vector<int>ans(n);
cout<< " printing 1"<< endl;
findSmallerElemnent(input , ans ,n);
cout<< " printing"<< endl;
// printing the vector
for( int i = 0 ; i<ans.size(); i++){
    cout<< ans[i] << " ";
}


    return 0;
}