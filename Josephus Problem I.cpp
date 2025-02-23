
#include <bits/stdc++.h>
using namespace std;
class Node{
public:
    int data ;
    Node* next;
    Node* prev;
    Node(int val){
        data =val;
        next= nullptr;
        prev = nullptr;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    Node* temp=new Node(1);
    Node* first= temp;
    for(int i=2;i<=n;i++){
        Node* prev = temp;
        temp = new Node(i);
        temp->prev = prev;
        prev->next = temp;
    }
    temp->next= first;
    first->prev= temp;
    first=first->next;
    while(first->next->data!=first->data && first->prev->data != first->data){
        cout<<first->data<<" ";
        Node* prev = first->prev;
        prev->next = first->next;
        first->next->prev = prev;
        first= first->next->next;
    }
    cout<<first->data;
    return 0;
}