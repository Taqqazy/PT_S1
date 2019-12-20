#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include "lineToVec.h"

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

    html << "<!DOCTYPE html>" << endl;
    html << "<html lang=\"fr\" dir=\"ltr\">" << endl;
    html << "   <head>" << endl;
    html << "       <meta charset=\"utf-8\">" << endl;
    html << "       <title>Projet tutoré S1</title>" << endl;
    html << "   </head>" << endl;
    html << "   <body>" << endl;

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

