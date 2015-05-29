#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string sentence;
	string buffer;
	vector<string> words;
	string output;

	cout << "Enter a sentence to have reversed: ";
	getline(cin, sentence);
	stringstream ss(sentence);

	while (ss >> buffer)
		words.push_back(buffer);

	for (int n = words.size() - 1; n >= 0; n--)
	{
		if (n != 0)
			output += words[n] + " ";
		else
			output += words[n];
	}

	cout << output;

	std::	getchar();
	return 0;
}