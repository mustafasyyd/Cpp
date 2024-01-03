    /*
    CreateNode
    InsertNode
    DeleteNode
    Append
    Traverse
*/
#include<iostream>

using namespace std;

struct Record
{   
    string name 
        , address;  
};

struct Node
{
    Record record;
    Node* next;
};


void Traverse ( Node* headNode , void (*callback) (Node*) )
{
    while(headNode)
    {
        callback(headNode);
        headNode = headNode->next;
    }
}

void Traverse ( Node* headNode , void (*callback) (Node* , string& , string&) , string key , string& result )
{
    while(headNode)
    {
        callback( headNode , key , result );
        headNode = headNode->next;
    }
}

void Search( Node* node , string& key , string& result )
{
    if( node->record.name == key )
        result = node->record.address;
        //cout<< "Address: " << node->record.address << endl;
}

void Searching ( Node* node , string key ,string& result  )
{
    Traverse(node , Search , key ,result );   
}



void Print(Node *headNode)
{
    cout << headNode->record.address << endl;        
    headNode = headNode->next;
    
}

int main()
{

    Node *headNode = new Node;
    Node *firstNode = new Node;
    Node *secondNode = new Node;

    headNode->record.name = "mustafa";
    headNode->record.address = "luxor";
    
    headNode->next = firstNode;
    firstNode->record.name = "Robotics";
    firstNode->record.address = "maadi";
    
    
    firstNode->next = secondNode;
    secondNode->record.name = "Robotics";
    secondNode->record.address = "maadi";
    
    secondNode->next = nullptr;
    

    return 0;
}