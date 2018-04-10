/*Implement one of the hashing procedures that we have discussed, and the following related functions:
INSERT (item) DELETE (item) FIND (item) Make sure that your program correctly handles collisions and full hash table! 
Programmar: Bradley Stillings */
#include<iostream>
#include<string>
using namespace std;
const int TSIZE = 256;

// input 
class Hash
{
public:

int key;
int value;

Hash(int key, int value)
{
this->key = key;
this->value = value;
}
};

class H_Map
{
private:
Hash **H_table;

public:   
H_Map()
{
H_table = new Hash * [TSIZE];
for (int i = 0; i< TSIZE; i++)
{
H_table[i] = NULL;
}
}
// hash operation
int H_Function(int key)
{
return key % TSIZE;						// modulus operator key 
}
// insert a number 
void Insert(int key, int value)
{
int hash = H_Function(key);
while (H_table[hash] != NULL && H_table[hash]->key != key)
{
hash = H_Function(hash + 1);
}
if (H_table[hash] != NULL)
delete H_table[hash];
H_table[hash] = new Hash(key, value);
}
// search
int Search(int key)
{
int hash = H_Function(key);

while (H_table[hash]->key != key && H_table[hash] != NULL)
{
hash = H_Function(hash + 1);
}

if (H_table[hash] == NULL)

return -1;
else
return H_table[hash]->value;
}
// remove element
void remove_E(int key)
{
int hash = H_Function(key);

while (H_table[hash] != NULL)
{
if (H_table[hash]->key == key)

break;

hash = H_Function(hash + 1);
}

if (H_table[hash] == NULL)
{
cout<<"No Element found "<<key<<endl;
return;
}
else
{
delete H_table[hash];
}
cout<<"Element Deleted"<<endl;
}
~H_Map()
{
for(int i = 0; i < TSIZE; i++)
{
if(H_table[i] != NULL)

delete H_table[i];

delete[] H_table;
}
}
};

// main menu
int main()
{
H_Map hash;

int key, value;

int selection;

while (1)
{
cout<<"Selection of Operations: "<<endl;

cout<<"1.Insert a element "<<endl;

cout<<"2.Search a element "<<endl;

cout<<"3.Delete a element "<<endl;

cout<<"4.Exit program"<<endl;

cout<<"Enter your choice: ";
cin>>selection;

switch(selection)
{
case 1:
cout<<"Enter element: ";
cin>>value;

cout<<"Enter key to insert: ";
cin>>key;

hash.Insert(key, value);

break;

case 2:
cout<<"Enter key of the element to be searched: ";
cin>>key;

if (hash.Search(key) == -1)
{
cout<<"No element found: "<<key<<endl;

continue;
}
else
{
cout<<"Element at the key provided "<<key<<" : ";

cout<<hash.Search(key)<<endl;
}
break;

case 3:
cout<<"Enter key to be deleted: ";
cin>>key;

hash.remove_E(key);
break;

case 4:

exit(1);

default:
cout<<"Enter a option";
}
}
return 0;
}
