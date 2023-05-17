class Solution {
public:
    int lengthOfLastWord(string s) {
      int n=s.length();
      int j=0;
      while(s[n-1]==' '){
        n--;
      }
      for(int i=0;i<n;i++){
          if(s[i]==' '){
            j=i;
            j++;
          }
      }
      
      return (n-j);  
    }
};
