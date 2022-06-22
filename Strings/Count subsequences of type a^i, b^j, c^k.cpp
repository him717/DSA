class Solution{
  public:
    // s : given string
    // return the expected answer
    int fun(string &s) {
        //code here
         int md = 1000000007;
       
           int a = 0;
           int b = 0;
           int c = 0;
           
           for(unsigned int i=0;i<s.length();i++){
               if(s[i]=='a'){
                   a  = (2*a%md+1)%md;
               }
               else if(s[i]=='b'){
                   b = (2*b%md+a%md)%md;
               }
               else if(s[i]=='c'){
                   c = (2*c%md+b%md)%md;
               }
           }
           return c%md;
    }
};
