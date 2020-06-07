/**
**********************************************************************************************************************
Question Link: https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3329/
**********************************************************************************************************************
Solution:
**/
class Trie {
private:
    bool isLeaf;
    Trie *next[26];
public:
    /** Initialize your data structure here. */
    Trie() {
        isLeaf = false;
        for(int i=0;i<26;++i)
            next[i] = NULL;
    }
    
    /** Inserts a word into the trie. */
    void insert(string s) {
        int n = s.length();
        Trie *temp = this;
        for(int i=0;i<n;++i) {
            if(!(temp->next[s[i]-'a'])) {
                temp->next[s[i]-'a'] = new Trie();
            }
            temp = temp->next[s[i]-'a'];
        }
        temp->isLeaf = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string s) {
        Trie *temp = this;
        int n = s.length();
        for(int i=0;i<n;++i) {
            if(!(temp->next[s[i]-'a']))
                return false;
            temp = temp->next[s[i]-'a'];
        }
        return (temp->isLeaf);
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string s) {
        Trie *temp = this;
        int n = s.length();
        for(int i=0;i<n;++i) {
            if(!(temp->next[s[i]-'a']))
                return false;
            temp = temp->next[s[i]-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */