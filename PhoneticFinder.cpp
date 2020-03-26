#include "PhoneticFinder.hpp"
#include <iostream>


using namespace std;

namespace phonetic{
    bool check_equal(string w, string word)
    {
        if(w.length()!=word.length())
        {
            return false;
        }
        for(int i=0; i<w.length(); i++)
        {
            if((word[i] != 'v' && word[i] != 'V' && word[i] != 'w' && word[i] != 'W') && (w[i] != 'v' && w[i] != 'V' && w[i] != 'w' && w[i] != 'W'))
            {
                if((word[i] != 'P' && word[i] != 'p' && word[i] != 'F' && word[i] != 'f' && word[i] != 'B' && word[i] != 'b') && (w[i] != 'P' && w[i] != 'p' && w[i] != 'F' && w[i] != 'f' && w[i] != 'B' && w[i] != 'b'))
                {
                    if((word[i] != 'g' && word[i] != 'G' && word[i] != 'j' && word[i] != 'J') && (w[i] != 'G' && w[i] != 'g' && w[i] != 'J' && w[i] != 'J'))
                    {
                        if((word[i] != 'c' && word[i] != 'C' && word[i] != 'k' && word[i] != 'K' && word[i] != 'q' && word[i] != 'Q') && (w[i] != 'c' && w[i] != 'C' && w[i] != 'k' && w[i] != 'K' && w[i] != 'q' && w[i] != 'Q'))
                        {
                            if((word[i] != 'S' && word[i] != 's' && word[i] != 'Z' && word[i] != 'z') && (w[i] != 's' && w[i] != 'S' && w[i] != 'z' && w[i] != 'Z'))
                            {
                                if((word[i] != 'd' && word[i] != 'D' && word[i] != 't' && word[i] != 'T') && (w[i] != 'd' && w[i] != 'D' && w[i] != 't' && w[i] != 'T'))
                                {
                                    if((word[i] != 'o' && word[i] != 'O' && word[i] != 'u' && word[i] != 'U') && (w[i] != 'o' && w[i] != 'O' && w[i] != 'u' && w[i] != 'U'))
                                    {
                                        if((word[i] != 'i' && word[i] != 'I' && word[i] != 'y' && word[i] != 'Y') && (w[i] != 'i' && w[i] != 'I' && w[i] != 'y' && w[i] != 'Y'))
                                        {
                                            if(w[i] != word[i])
                                            {
                                                return false;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }

    std::string find(std::string text, std::string word)
    {
        string w;
        for(int i = 0; i<text.length(); i++)
        {
            if(text[i] != ' ')
            {
                w += text[i];
            }
            else
            {
                if(check_equal(w, word))
                {
                    return w;
                }
                w = "";   
            }
        }
        return "no word";
        
    } 
}