#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

int main(int argc, char **argv)
{
	if(argc != 2)
	{
		cout << "Usage: " << argv[0] << " csv" << endl;
		exit(1);
	}

	// read file

	string csv_filename = argv[1];

	ifstream csv(csv_filename);
	if(!csv.is_open())
	{
		cout << "csv file not found" << endl;
		exit(1);
	}

	html << "<!doctype html>" << endl;
	html << "<html lang=\"fr\">" << endl;
	html << "<head>" << endl;
		html << "    <meta charset=\"utf-8\">" << endl;
		html << "    <title>PT_S1</title>" << endl;
	html << "</head>" << endl;
	html << "<body>" << endl;

	string line;
	while(getline(csv, line))
	{
		cout << line << endl;
	}

	html << "</body>" << endl;
	html << "</html>" << endl;

	// write file
	string html_filename = "output.html";

	ofstream html(html_filename);
	if(!html.is_open())
	{
		cout << "could not open html file" << endl;
		exit(1);
	}
}
