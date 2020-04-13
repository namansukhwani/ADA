#include <iostream>
using namespace std;
struct TNode{
    int length;
    struct TNode* left;
    struct TNode* right;
};
struct List{
    TNode* root;
    struct List* next;
};
List* start = NULL;
List* end = NULL;
List* m;
List* temp;
void getNode(){
    m = new List();
    m->root = new TNode();
    cin>>m->root->length;
    m->root->left = NULL;
    m->root->right = NULL;
    m->next = NULL;
}
void Insert(){
    if(start == NULL){
        start = m;
        end = m;
    }
	else if(start->root->length >= m->root->length){
        m->next = start;
        start = m;
    }
	else if(end->root->length <= m->root->length){
        end->next = m;
        end = m;
    }
	else{
        temp = start;
        while(temp->next->root->length < m->root->length){
            temp = temp->next;
        }
        m->next = temp->next;
        temp->next = m;
    }
}
TNode* Least(TNode *tmp){
    if(start == end){
        start = NULL;
        end = NULL;
    }else{
        start = start->next;
    }
    return tmp;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){  
        getNode();
        Insert();
    }
	temp = start;	
    for(int i=0;i<n-1;i++){
		temp = temp->next;	
	}
	int total=0;
    for(int i=0;i<n-1;i++){
		m = new List();
        m->root = new TNode();
        m->root->left = Least(start->root);
        m->root->right = Least(start->root);
        m->root->length = m->root->left->length + m->root->right->length;
        total += m->root->length;
		Insert();
    }
    cout<<"ans::"<<total;
    return 0;
}
