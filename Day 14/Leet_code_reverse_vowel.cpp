/* Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example 1:
Input: s = "hello"
Output: "holle"

Example 2:
Input: s = "leetcode"
Output: "leotcede" */

class Solution {
public:
    bool checkvowel(char ch){
        return ch=='a' || ch=='e' || ch=='o' || ch=='i' || ch=='u'||ch=='A' || ch=='E' ||ch=='O' || ch=='U' || ch=='I';
    }
    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j){
            if(!checkvowel(s[i])) i++;
            else if(!checkvowel(s[j])) j--;
            else if(i<j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};
