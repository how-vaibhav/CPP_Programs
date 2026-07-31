 void pop_back(){
            if(head ==  NULL){ cout<<"List is Empty";
                                return ; }
                cout<<endl<<tail->val<<" is deleted. \n ";
                 Node *ptr = head;
                while(ptr-> next!= tail){
                     ptr = ptr->next;
                }
                ptr -> next = NULL;
                tail = ptr ;
                
        }