#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <iterator>
using namespace std;

struct word_rec_t {
	long int letter_count =0;
	bool dar_found=0 ;
        bool raj_found=0;
	string word_itself ;
    };

int main() {
long int i=0;
string line ,str ;
word_rec_t wordList;
ifstream myfile ("words.txt");
map < long int,string> mydict;
map< long int,string>::iterator it ;
if (myfile.is_open())
 {
  while (getline (myfile ,line ) )
  {
   mydict.insert(pair<long int ,string> (i ,line) );
   i++ ;
  }
myfile.close() ;
 }

 else cout<< "Unable to open file " ;

for ( it=mydict.begin() ; it != mydict.end() ; it++ )
 {
  if( it->second.find("dar") )
  {
	  wordList.dar_found=true;
	  wordList.word_itself  = it ->second;
	  wordList.letter_count = it ->first;
	    }

  else { wordList.dar_found=false ;

 }
  //cout<< wordList.word_itself<<"-- is located at-- " << wordList.letter_count<< endl;
  }

  if(wordList.dar_found)
{ cout<< "word dar found"<<endl;
  cout<< wordList.word_itself<<"-- is located at-- " << wordList.letter_count<< endl;
}
else cout<< "word dar not found"<<endl;

return 0;

}
