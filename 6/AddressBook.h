#include <iostream>
#include <vector>
//#include <string>

#include "Entry.h"

struct AddressBook
{
    vector<Entry *> book;

    public:
        void add(Entry *entry)
        {
            book.push_back(entry);
        }

        void print()
        {
            for (int i = 0; i < book.size(); i++)
            {
                book[i]->print();
                std::cout << std::endl;
            }
        }
};