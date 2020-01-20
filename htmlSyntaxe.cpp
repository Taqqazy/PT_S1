#include "htmlSyntaxe.h"

void htmlSyntaxe(ofstream &html) {
//prend en parametre une ref au flux de sortie html
//fonction qui envoie dans le flux de sortie la syntaxe de base d'une page HTML
    html << "<!DOCTYPE html>" << endl;
    html << "<html lang=\"en\" dir=\"ltr\">" << endl;
    html << "  <head>" << endl;
    html << "    <link href=\"style.css\" rel=\"stylesheet\" type=\"text/css\"\>" << endl;
    html << "    <link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Montserrat\">" << endl;
    html << "    <link rel=\"stylesheet\" href=\"https://fonts.googleapis.com/css?family=Roboto&display=swap\">" << endl;
    html << "    <meta charset=\"utf-8\">" << endl;
    html << "    <link rel=\"stylesheet\" href=\"style2.css\">" << endl;
    html << "    <title>Los Santos : Office du tourisme</title>" << endl;
    html << "  </head>" << endl;
    html << "  <body>" << endl;
    html << "    <div id=\"banniere\">" << endl;
    html << "      <ul id=\"menu\">" << endl;
    html << "        <li><a href=\"index.html\"><img class=\"logo\" src=\"medias/logo.png\" alt=\"logo_los-santos\"></a></li>" << endl;
    html << "        <li><a href=\"monuments.html\">Monuments</a></li>" << endl;
    html << "        <li><a href=\"contact.html\">Contact</a></li>" << endl;
    html << "        <li><a href=\"about.html\">À propos de nous</a>" << endl;
    html << "        <ul>" << endl;
    html << "          <li><a href=\"personnel.html\">Personnel</a></li>" << endl;
    html << "          <li><a href=\"entreprise.html\">Entreprise</a></li>" << endl;
    html << "        </ul>" << endl;
    html << "        </li>" << endl;
    html << "      </ul>" << endl;
    html << "      <div id=\"text-home\"><h1>Office du tourisme de Los Santos</h1></div>" << endl;
    html << "       </div>" << endl;
}
