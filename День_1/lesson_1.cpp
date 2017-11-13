#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <vector>
 using namespace std;
int main()
    {
    string line;
    getline(std::cin,line);
    istringstream strs(line);
    
    vector<string> words;
    copy(istream_iterator<string>(strs),
        istream_iterator<string>(),
        back_inserter<vector<string> >(words));
 
   string min_str = *words.begin(), max_str = *words.begin();
 
    for(vector<string>iterator i = words.begin(); i != words.end(); ++i)
        {
        if(i->length() > max_str.length())
            max_str = *i;
        if(i->length() < min_str.length())
            min_str = *i;
        }
    cout << endl << "The longest word is \"" << max_str << "\"." << "Length is " << max_str.length() << endl;
   cout << "The shortest word is \"" << min_str << "\"." << "Length is " << min_str.length() << endl;
    }
