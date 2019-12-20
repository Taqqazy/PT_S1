#include "htmlSyntaxe.h"

void htmlSyntaxe(ofstream &html) {
    html << "<!DOCTYPE html>" << endl;
    html << "<html lang=\"fr\" dir=\"ltr\">" << endl;
    html << "   <head>" << endl;
    html << "       <meta charset=\"utf-8\">" << endl;
    html << "       <title>Projet tutoré S1</title>" << endl;
    html << "   </head>" << endl;
    html << "   <body>" << endl;
}
