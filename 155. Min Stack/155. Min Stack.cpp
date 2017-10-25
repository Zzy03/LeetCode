class MinStack {
private:
    std::stack<int> stack;
    std::stack<int> min_stack; 
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        stack.push(x);
        if(min_stack.empty() || ((!min_stack.empty()) && (x<=min_stack.top()))){
            min_stack.push(x);
        }
    }
    
    void pop() {
        if(!stack.empty()){
            if(stack.top()==min_stack.top()){
                min_stack.pop();
            }
            stack.pop();
        }
    }
    
    int top() {
        if(!stack.empty())
            return stack.top();
    }
    
    int getMin() {
        if(!min_stack.empty())
            return min_stack.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */