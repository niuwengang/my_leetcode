#include "bits/stdc++.h"
using namespace std;

class Solution
{
  public:
    string mergeAlternately(string word1, string word2)
    {
        const int len1 = word1.size(), len2 = word2.size();
        int p1 = 0, p2 = 0;
        string str;
        while (p1 < len1 ||  p2 < len2 )
        {
            if (p1 < len1 )
            {
                str += word1[p1];
                p1++;
            }
            if (p2 < len2 )
            {
                str += word2[p2];
                p2++;
            }
        }
        return str;
    }
};

// class Solution
// {
//   public:
//     string mergeAlternately(string word1, string word2)
//     {
//         const int len1 = word1.size();
//         const int len2 = word2.size();
//         const int len = max(len1, len2);

//         string str;

//         for (int i = 0; i < len; i++)
//         {
//             if (i < len1 && i < len2)
//             {
//                 str += word1[i];
//                 str += word2[i];
//             }
//             else if (i < len1 && i >= len2)
//             {
//                 str += word1[i];
//             }
//             else if (i < len2 && i >= len1)
//             {
//                 str += word2[i];
//             }
//         }
//         return str;
//     }
// };

int main()
{
    return 0;
}