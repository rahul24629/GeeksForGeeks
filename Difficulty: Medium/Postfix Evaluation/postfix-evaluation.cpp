class Solution {
  public:
    int evaluatePostfix(vector<string>& arr) {
        stack<int> st;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] == "+" || arr[i] == "-" || arr[i] == "*" || arr[i] == "/" || arr[i] == "^") {

                int second = st.top();
                st.pop();

                int first = st.top();
                st.pop();

                if(arr[i] == "+") {
                    st.push(first + second);
                }
                else if(arr[i] == "-") {
                    st.push(first - second);
                }
                else if(arr[i] == "*") {
                    st.push(first * second);
                }
                else if(arr[i]=="/"){
    int res = first / second;

    if((first % second) != 0 &&
       ((first < 0) ^ (second < 0)))
    {
        res--;
    }

    st.push(res);
}
                else {
                    int power = 1;
                    for(int j = 0; j < second; j++) {
                        power *= first;
                    }
                    st.push(power);
                }
            }
            else {
                st.push(stoi(arr[i]));
            }
        }

        return st.top();
    }
};