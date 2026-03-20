// User function template for C++
class Solution {
  public:
    bool isVowel(char c){
        return (c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ||
                c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U');
    }

    string removeVowels(string& s) {
        // Your code goes here
        int j=0;
        for(int i=0;i<s.size();i++){
            if(!isVowel(s[i])){
                s[j]=s[i];
                j++;
            }
        }
        s.resize(j);
        return s;
        
    }
};