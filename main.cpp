#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include "pullsh.h"

using namespace std;

int main()
{
	// read file

	string csv_filename = "perso.csv";

	ifstream csv(csv_filename);
	if(!csv.is_open())
	{
		cout << "csv file not found" << endl;
		exit(1);
	}


	string line;
	while(getline(csv, line))
	{
		vector<string>vectemp=lineToVec(line);
		cout << vectemp[1];
	}


	// write file
	string html_filename = "output.html";

	ofstream html(html_filename);
	if(!html.is_open())
	{
		cout << "could not open html file" << endl;
		exit(1);
	}

	html << "<html>" << endl;
	// TODO
	html << "</html>" << endl;
}

