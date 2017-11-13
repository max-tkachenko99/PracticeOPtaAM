#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <vector>
 
int main()
    {
    std::string line;
    std::getline(std::cin,line);
    std::istringstream strs(line);
    
    std::vector<std::string> words;
    std::copy(std::istream_iterator<std::string>(strs),
        std::istream_iterator<std::string>(),
        std::back_inserter<std::vector<std::string> >(words));
 
    std::string min_str = *words.begin(), max_str = *words.begin();
 
    for(std::vector<std::string>::iterator i = words.begin(); i != words.end(); ++i)
        {
        if(i->length() > max_str.length())
            max_str = *i;
        if(i->length() < min_str.length())
            min_str = *i;
        }
    std::cout << std::endl << "The longest word is \"" << max_str << "\"." << "Length is " << max_str.length() << std::endl;
    std::cout << "The shortest word is \"" << min_str << "\"." << "Length is " << min_str.length() << std::endl;
    }
