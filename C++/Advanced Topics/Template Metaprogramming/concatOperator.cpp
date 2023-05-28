#include<iostream>
using namespace std;

template <typename C>
void concatenator(C x, C y){
    if(is_same_v<C,char>){
        string ans;
        ans+=x;
        ans+=y;
        cout<<ans<<endl;
    } else{
        cout<<x+y<<endl;
    }
}
int main(){
    concatenator<int>(1,4);
    concatenator<int>(39,0);

    concatenator<float>(3.14,6.28);

    concatenator<char>('a','t');
}