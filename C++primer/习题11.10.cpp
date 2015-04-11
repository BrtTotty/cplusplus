#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
 
using std :: cout;
using std :: cin;
using std :: endl;
using std :: string;
using std :: vector;

string make_plural(const vector <string> :: size_type num, const string &s1,const string &s2)
{
	return (num >= 1)? s1+s2 : s1;
}
bool isShorter(const string &s1,const string &s2)
{
	return ( s1.size() < s2.size() ); 
}
bool longer_6(const string &s)
{
	return (s.size() >= 6);
}
int main()
{
	vector <string> words;
	string word;
	cout << " please input some strings :(Ctrl + Z to end)" << endl;
	while ( cin >> word)
	{
		words.push_back(word);
	}
	cin.clear();
	
/*	sort (words.begin(), words.end());
	vector <string> :: iterator words_end = unique(words.begin(),words.end());
	words.erase(words_end, words.end() );
	stable_short( words.bebin(),words.end(), isShorter); 
*/ 	int num = 0;
	for ( vector <string> :: iterator it = words.begin(); it != words.end(); ++it)
	{
		it= find_if(it,words.end(),longer_6);
		cout << *it << endl; 
		++num;
	}
//	vector <string> :: size_type num = count_if(words.begin(),words.end(),longer_6);
	cout << num << " " << make_plural(num,"word","s") << " have(has) 6 characters or more" << endl;
	system ("PAUSE");
	return 0;
} 
