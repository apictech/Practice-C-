string Solution::countAndSay(int A) {
    string s = "1";
    for(int i=1; i<A; i++){
        string temp = "";
        int c = 1;
        int j=1;
        for(; j<s.length(); j++){
            if(s[j] == s[j-1]) c++;
            else{
                temp += to_string(c) + s[j-1];
                c = 1;
            }
        }
        if(j==s.length()){
            temp += to_string(c) + s[j-1];
        }
        s = temp;
    }
    return s;
}
