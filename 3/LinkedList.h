#ifndef LinkedList_h
#define LinkedList_h

#include <iostream>

using namespace std;

class LinkedList {      
public:
    struct Link { 
		void* data;
		Link* next;
		
		void initialize(void* dat, Link* nxt) {
			data = dat;
			next = nxt;
		} 
	}* head ;
    
    Link *end;
    int size;

    void start(){
        head = NULL;
        size = 0;
        end = NULL;
        //head = new Link;
        //head->initialize(d, NULL);
    }
	
    void add(void* dat){   
        if (head == NULL) {
           head =(struct Link*)malloc(sizeof(struct Link));
           head -> data = dat;
           head -> next = NULL;
           end = head;
        }
        else {
           end -> next =(struct Link*)malloc(sizeof(struct Link));
           end = end -> next;
           end -> data = dat;
           end -> next = NULL;
        }
        size++;
    }
	
    void* grab( int location){
        Link *grabHead = head;
        while(location > 0){
            grabHead = grabHead -> next;
            location = location -1;
        }
        return grabHead -> data;
    }
	
    void cleanup() {
        
            std::cout << "Stack is not empty";
            Link* oldHead = head;
			while( oldHead != NULL){
		    head = head->next;
		    free(oldHead);
            oldHead = head;
            size = size - 1 ;
        }
		
		
    }
};
#endif
