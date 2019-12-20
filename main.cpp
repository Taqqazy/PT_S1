#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include "lineToVec.h"
#include "htmlSyntaxe.h"

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

    string html_filename = "output.html";

	ofstream html(html_filename);
	if(!html.is_open())
	{
		cout << "could not open html file" << endl;
		exit(1);
	}

    htmlSyntaxe(html);

	string line;
	while(getline(csv, line))
	{
		vector<string>vectemp=lineToVec(line);
		html << "       <p>";
		for(unsigned int i=0; i<5; i++)
        {
            html << vectemp[i] << " ";
        }
        html << "</p>" << endl;
	}

	html << "   </body>" << endl;
	html << "</html>";
}

