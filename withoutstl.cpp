#include<iostream>
using namespace std;

class stack{
    public:
    int *arr;
    int size;
    int top;

    stack(int size){
        this ->size =size;
        arr= new int[size];
        top = -1;
    }
    void push(int element ){
        if(size-top >1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overFlow "<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underFlow "<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty "<<endl;
            return -1;
        }
    }
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack st(5);
    st.push(22);
    st.push(45);
    st.push(66);

    cout<<"The top element of the stack is "<<st.peek()<<endl;
    st.pop();
    cout<<"The top element of the stack is "<<st.peek()<<endl;
    st.pop();
    cout<<"The top element of the stack is "<<st.peek()<<endl;
    st.pop();
    cout<<"The top element of the stack is "<<st.peek()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }
}