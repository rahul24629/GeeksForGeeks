class Solution {
    string doc="";
    stack<char> undoStack;
    stack<char> redoStack;
  public:
    void append(char x) {
        // append x into document
        doc.push_back(x);
        undoStack.push(x);
        
        while(!redoStack.empty()){
            redoStack.pop();
        }
    }

    void undo() {
        // undo last change
        if(undoStack.empty()) return;
        
        char last=undoStack.top();
        undoStack.pop();
        
        doc.pop_back();;
        redoStack.push(last);
    }

    void redo() {
        // redo changes
        if(redoStack.empty()) return;
        
        char last=redoStack.top();
        redoStack.pop();
        doc.push_back(last);
        undoStack.push(last);
        
    }

    string read() {
        // read the document
        return doc;
    }
};