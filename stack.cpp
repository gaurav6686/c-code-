#include<iostream>
#include<bits/stdc++.h>
#include<stack>
using namespace std;

class Stack{ 
public:
    int *arr;
    int top;
    int size;

Stack(int size){
    this->size = size;
    arr = new int(size);
    top = -1;
}
void push(int element){
    if(size - top > 1) {top++; arr[top] = element;}
    else {cout<<"stack overflow"<<endl;}
}
void pop(){
    if(top>=0){
        top--;
    }else{
        cout<<"stack underflow"<<endl;
    }
}
void peek(){
    if(top>=0) 
    return arr[top];
    else {
    cout<<"stck is empty"<<endl;
    return -1;
    }
}
bool empty(){
    if(top == -1) return true;
    else return false;
}
};

int main(){
    /*stack<int> s;
    s.push(2);
    s.push(3);
    s.push(6);
    s.pop();
    cout<<"top element is "<<s.top()<<endl;;
    if(s.empty()) cout<<"stack is empty"<<endl;
    else cout<<"stack is not empty"<<endl;

    cout<<"Size of Stack is "<<s.size()<<endl;*/
    Stack st(5);
    st.push(22);
    st.push(42);
    st.push(46);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;


return 0;
}