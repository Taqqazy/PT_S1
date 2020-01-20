#include "makeCss.h"

void makeCss(ofstream &css, bool mode) {
    if(mode) {
        css << ".logo_ent {" << endl;
        css << "    display: block;" << endl;
        css << "    margin: 0 auto 20px;" << endl;
        css << "}" << endl;
    }
    css << ".photo {" << endl;
    css << "    width: 105px;" << endl;
    css << "    height: 135px;" << endl;
    css << "}" << endl;
    css << ".no_photo {" << endl;
    css << "    border: solid red;" << endl;
    css << "    width: 105px;" << endl;
    css << "    height: 135px;" << endl;
    css << "    margin: 0 auto;" << endl;
    css << "}" << endl;
    css << ".no_photo p {" << endl;
    css << "    margin-top: 0;" << endl;
    css << "    font-size: 200%;" << endl;
    css << "    text-align: center;" << endl;
    css << "    vertical-align: middle;" << endl;
    css << "    line-height: 135px;" << endl;
    css << "}" << endl;
    css << ".ent {" << endl;
    css << "    border: solid black;" << endl;
    css << "    padding: 20px;" << endl;
    css << "    width: 90%;" << endl;
    css << "    height: auto;" << endl;
    css << "    text-align: center;" << endl;
    css << "    margin: 0 auto 30px auto;" << endl;
    css << "}" << endl;
    css << ".pers {" << endl;
    css << "    width: auto;" << endl;
    css << "    float: left;" << endl;
    css << "    height: 200px;" << endl;
    css << "    background-color: #FFF;" << endl;
    css << "    border: 1px solid #000;" << endl;
    css << "    margin: 10px;" << endl;
    css << "    text-align: center;" << endl;
    css << "}" << endl;
}
