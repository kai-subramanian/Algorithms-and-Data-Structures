// Program to demonstrate use of vector
/*
 Difference between a vector and array:
 Vectors can be used dynamically, as opposed to
 arrays that are fixed in size. Vectors are very 
 useful for some DSA problems, as oftentimes
 we face problems where the size / quantity of 
 something is not known beforehand. Hence, vector
 becomes the natural choice.
*/

#include<iostream>
#include<vector>

using namespace std;

int main(){
    // vector<T> variable_name;
    vector<int> nums;
    nums.push_back(11);
    nums.push_back(22);
    nums.push_back(33);
    nums.push_back(44);
    nums.push_back(55);
    nums.push_back(66);

    for(auto i:nums){
        cout<<i<<" ";
    }
    cout<<endl;
    // Access using at() method 

    for(int i=0;i<nums.size();i++){
        cout<<nums.at(i)<<" ";
    }
    cout<<endl;
    nums.at(3)=199;

    for(int i=0;i<nums.size();i++){
        cout<<nums.at(i)<<" ";
    }
    cout<<endl;
    cout<<"First number "<<nums.front()<<endl;
    cout<<"Last number "<<nums.back()<<endl;

    // Iterators are powerful tools to, you know, iterate through the vector
    vector<int>::iterator itr;
    itr=nums.begin();   // Initialize
    cout<<"What iterator points to : "<<*itr<<endl;
    itr+=3;
    cout<<"What next iterator points to : "<<*itr<<endl;
    cout<<"Complete iteration"<<endl;
    for(itr=nums.begin();itr!=nums.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;

}