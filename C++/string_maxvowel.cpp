#include<bits/stdc++.h>

using namespace std;

class trydemo{
    private:
    string str;
    public:
    trydemo(string s)
    {
        str=s;
    }

    void maxvowel(){
        int maxcount=0;
        int count=0;
        stringstream ss(str);
        string word;
        string word_with_max_vowels = "";

        while(ss>>word){
            count=0;
        string::iterator beg=word.begin();
        string::iterator end=word.end();
         while(beg!=end){
            char c=tolower(*beg);
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                count++;
                
            }
            if(count>maxcount){
                maxcount=count;
                word_with_max_vowels=word;
            }
            beg++;
        }
    }
    cout<<"Word with maximum vowels: "<<word_with_max_vowels<<endl;
    }
};
int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    trydemo t(str);
    t.maxvowel();
    return 0;
}