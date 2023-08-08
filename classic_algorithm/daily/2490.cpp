#include <bits/stdc++.h>
using namespace std;

// 单词的最后一个字符和下一个单词的第一个字符相等。
// 最后一个单词的最后一个字符和第一个单词的第一个字符相等

class Solution
{
  public:
    bool isCircularSentence(string sentence)
    {
        istringstream input(sentence);
        string word;
        vector<string> word_vec;
        while (getline(input, word, ' '))
        {
            word_vec.push_back(word);
            if (word_vec.size() >= 2)
            {

                char t1 = word_vec[word_vec.size() - 2].back();
                char t2 = word_vec[word_vec.size() - 1].front();
                if (t1 != t2)
                {
                    return false;
                }
            }
        }
        if (word_vec[0].front() != word_vec[word_vec.size() - 1].back())
        {
            return false;
        }
        return true;
    }
};

int main()
{
    string str = "leetcode exercises sound delightful";
    Solution s;
    std::cout<<s.isCircularSentence(str)<<std::endl;
}