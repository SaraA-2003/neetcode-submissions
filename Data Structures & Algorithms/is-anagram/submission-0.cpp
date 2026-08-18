class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int size;
        if(std::size(t) > std::size(s)){
            size = std::size(t);
        }
        else if (std::size(s) > std::size(t)){
            size = std::size(s);
        }
        else 
        size = std::size(t);



        for ( int i=0 ; i< size; i++){
            if (s[i] == t[i]){
                continue;
            }
            else {
                return false;
            }
        }
        return true;
        
    }
};
