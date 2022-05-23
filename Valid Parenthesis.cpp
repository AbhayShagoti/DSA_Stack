 bool isValid(string s) {
   
    stack<char> parseStack;
    for(char elem: s)
    {
        if(elem =='('||elem =='['||elem =='{')
        {
            parseStack.push(elem);
        }
        else
        {
            if(parseStack.empty())
            {
              return false;
            }
            else
            {
                auto parseStackTop = parseStack.top();
                if((elem==']'&&parseStackTop=='[')|| 
                   (elem==')'&&parseStackTop=='(')||
                   (elem =='}'&& parseStackTop=='{'))
                {
                    parseStack.pop();
                }
                else
                {
                    return false;
                }
            }
        }           
    }   
        return parseStack.empty();
    
    }
};
