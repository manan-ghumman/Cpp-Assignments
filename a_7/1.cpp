#include<bits/stdc++.h>

using namespace std;

class Ademo{
    private:
        string s;
    
    public:
        
        static string trunckstr(string s, int num){
            int i = 0,c =0;
            int length = s.size();
            if(s.at(0) != ' ' && !s.empty())
            while(i != length)
            {
                if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0')
                c++;
                if(c == num)
                break;
                i++;
            }
            return s.substr(0, i);
        }
        // int palindrome(string s)
        // {
        //     int i =0, num = 0;
        //     string s1; int k =0;
        //     int len = s.length();
        //     while(i< len)
        //     {
        //         if(s[i] == ' ' && s[i+1] != ' ' && s[i+1] != '\0' )
        //         {
        //             k=0;
        //             for(int j = i+1; s[j] != ' ' ; j++)
        //             {
        //                 s1[k++] = s[j];

        //             }
        //             if (!s.compare(s1))
        //             {
        //                 num++;
        //             }
        //         }
        //         i++;
        //     }
        //     return num;
        // }
        static int countpalindrome(string s)
        {
            int c =0;
            stringstream ss(s);
            string word;
            while (ss >> word)
            {
                if(ispalindrome(word))
                {
                    c++;
                }
            }
            
            return c;
        }
        static bool ispalindrome(string str)
        {
            int flag=0;
            string::iterator l = str.begin();
            string::iterator r = str.end()-1;
            while(l<r)
            {
                if( *l != *r)
                {
                    flag = 1;
                    break;
                }
                  l++; r--; 
            }
            if(flag)
            {
                return false;
            }
            else
                return true;

        }

        static string chopstr(int chop, string str)
        {
            int c =0;
            int k =0;
            string choppedstr;
            stringstream ss(str);
            char ch;
            while (ss >> ch)
            {
                c++;
                choppedstr.push_back(ch); 
                if(c == 2)
                {
                    c = 0;
                    choppedstr.push_back(' ');
                }

            }

            return choppedstr;
        }


};

int main()
{
    Ademo d;
    string s = "hello mym naman is manan";
    cout << Ademo::trunckstr("The quick brown fox jumps over the lazy dog" , 4) << endl;
    cout << Ademo::countpalindrome(s) << endl;
    cout <<Ademo::chopstr(2,"INFORMATION")<<endl;
    return 0;
}