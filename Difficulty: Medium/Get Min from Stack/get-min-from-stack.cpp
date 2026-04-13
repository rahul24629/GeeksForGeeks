class SpecialStack {
    stack<int> s;
    stack<int>minStack;
  public:
    SpecialStack() {
        // Define Stack
    }

    void push(int x) {
        // Add an element to the top of Stack
        s.push(x);
        if(minStack.empty() || x<=minStack.top()){
            minStack.push(x);
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if(s.empty()) return;
        
        if(minStack.top()==s.top()){
            minStack.pop();
        }
        s.pop();
    }

    int peek() {
        // Returns top element of the Stack
        if(s.empty()) return -1;
        return s.top();
    }

    bool isEmpty() {
        // Check if stack is empty
        return s.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(minStack.empty()) return -1;
        
        return minStack.top();
    }
};