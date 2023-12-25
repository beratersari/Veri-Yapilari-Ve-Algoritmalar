#include <iostream>

using namespace std;
class Stack{

private:
    int* array;
    int kapasite;
    int top;
public:

    Stack(int size){
        kapasite = size;
        array = new int[kapasite];
        top = -1;
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == kapasite-1;
    }

    void resizeStack(){
        int yeniKapasite = kapasite * 2;

        int* newArray = new int[yeniKapasite];

        for(int i=0; i<kapasite;i++){
            newArray[i] = array[i];
        }
        delete[] array;

        array = newArray;
        kapasite = yeniKapasite;
    }

    void push(int data){
        if(isFull()){
            cout<<"Stack dolu, stack genisletiliyor..."<<endl;
            resizeStack();
        }
        array[top+1] = data;
        top++;
    }

    int pop(){
        if(isEmpty()){
            cout<<"Liste bos, cikarma islemi yapilamiyor.."<<endl;
            return -1;
        }
        return array[top--];
    }

    int peek(){
        if(isEmpty()){
            cout<<"Liste bos"<<endl;
            return -1;
        }
        return array[top];
    }

    void printStack(){
        if(isEmpty()){
            cout<<"Liste bos"<<endl;
            return;
        }
        cout<<"Stack: ";
        for(int i=0;i<=top;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;

    }
};
int main() {
    Stack s(8);
    s.push(1);
    s.push(10);
    s.push(23);
    s.push(43);
    s.push(21);
    s.printStack();
    s.pop();
    s.printStack();
    s.pop();
    s.printStack();
    s.pop();
    s.printStack();
    s.pop();
    s.printStack();
    s.pop();
    s.printStack();
    s.pop();

}