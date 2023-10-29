#include<iostream>
using namespace::std;

class count{
    public:
        void setX(int value){
            x=value;
        }
        void print(){
            cout<<x<<endl;
        }
    private:
        int x;
};

int main(){
    count counter;
    count *counterP=&counter;
    count &counterR=counter;

    cout<<"set x to 1"<<endl;
}