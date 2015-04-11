//µ¥´Ê×ª»»³ÌÐò.cpp 
/*
	a program to transform words.
	Takes two arguments:The first is name  of the word transformation file ,
						The second is name of the input to transform			
*/

#include <iostream>
#include <fstream>
#include <sstream> 
#include <map>
#include <string>
#include <stdexcept>
#include <utility>
#include <windows.h> 

using namespace std;

// opens in binding it to the given file
ifstream& open_file(ifstream &in, const string &file)
{
        in.close();     // close in case it was already open
        in.clear();     // clear any existing errors
        // if the open fails, the stream will be in an invalid state
        in.open(file.c_str()); // open the file we were given
        return in; // condition state is good if open succeeded
}

int main(int argc,char* argv[3])
{
	
	//map to hold the word transformation pairs;
	//key is the word to look for in the input ;valu is word to use in the output
	map <string, string> trans_map;
	string key, value;

/*	
	if(argc != 3)
		throw runtime_error("wrong numeber of arguments!");
*/
	//open transformation map and build the map
	ifstream map_file;
	if( !open_file (map_file,argv[1]) )
		throw runtime_error("no transformation!");
	//read transformation map and build the map
	while(map_file >> key >> value)
	{
		pair <string,string> make(key, value);
		trans_map.insert(make);
	}
	//ok,now we are ready to do the transformations;
	//open the input file and check that the open succeded;
	ifstream input; 
	if( !open_file (input, argv[2]) )
		throw runtime_error("no input file!");
	string line;
	//read the text to transform it a line at a time
	while (getline (input, line) )
	{
		istringstream stream(line);//read the line a word at a time
		string word;
		bool firstword = true;     //controls whether a space is printed
		while (stream >> word)
		{
			//ok: the actual mapwork,this part is the heart of the program
			map <string, string>::const_iterator map_it = trans_map.find(word);
			
			//if the word is in the transfomation map;
			if ( map_it != trans_map.end() )
				//repalce it by the transformation value in the map
				word = map_it->second;
			if (firstword)
				firstword = false;
			else
				cout << "\t" ;//print a space between words
			cout << word;     //print the updated word 
		}
		cout << endl;
	}
	system("pause");
	return EXIT_SUCCESS;
}
