class MyQueue {
public:
    stack<int>official,extra;
    MyQueue() {
        
    }
    
    void push(int x) {
        official.push(x);
    }
    
    int pop() {
        if(official.empty() and extra.empty())
        {
            cout<<"Stack is Empty";
            return -1;
        
        }
        else
        {
          if(extra.empty())
          {
             while(!official.empty())
             {
               extra.push(official.top());
                 official.pop();
             }
          }
        int poped= extra.top();
         extra.pop();
            return poped;
        }
    }
    
    int peek() {
       if(official.empty() and extra.empty())
        {
            cout<<"Stack is Empty";
            return -1;
        
        }
        else
        {
          if(extra.empty())
          {
             while(!official.empty())
             {
               extra.push(official.top());
                 official.pop();
             }
          }
           return extra.top();
        }
    }
    
    bool empty()
    {       
     return (official.empty() and extra.empty() );
    
    }
};
