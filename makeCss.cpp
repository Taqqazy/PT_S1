#include "makeCss.h"

void makeCss(ofstream &css, bool mode) {
    if(mode) {
        css << ".logo_ent {" << endl;
        css << "    display: block;" << endl;
        css << "    margin-left: auto;" << endl;
        css << "    margin-right: auto;" << endl;
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
    css << "}" << endl;
    css << ".no_photo p {" << endl;
    css << "    margin-top: 0;" << endl;
    css << "    font-size: 200%;" << endl;
    css << "    text-align: center;" << endl;
    css << "    vertical-align: middle;" << endl;
    css << "    line-height: 135px;" << endl;
    css << "}" << endl;
}
