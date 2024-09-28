#include <iostream>
using namespace std;
#include <vector>

class MyCircularDeque {
public:
    int capacity;
    int rear;
    int front;
    int size;
    vector<int>v;
    MyCircularDeque(int k) {
        capacity=k;
        rear=k-1;
        front=0;
        size=0;
        v=vector<int>(k,0);
    }
    
    bool insertFront(int value) {
        if(isFull())return false;
        front=(front-1+capacity)%capacity;
        v[front]=value;
        size++;

        return true;
        
    }
    
    bool insertLast(int value) {
        if(isFull())return false;
        rear=(rear+1)%capacity;
        v[rear]=value;
        size++;


        return true;
        
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        front=(front+1)%capacity;
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty())return false;
        rear=(rear-1+capacity)%capacity;
        size--;

        return true;
    }
    
    int getFront() {
        if(isEmpty()){
            return -1;
        }
        return v[front];
    }
    
    int getRear() {
        if(isEmpty()){
            return -1;
        }
        return v[rear];
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */