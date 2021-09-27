// Course: SENG1120
// Assignment: A1
// Name: Toby Dines
// Student Number: c3328008
// Date: 02/09/2021

#ifndef Node_header
#define Node_header
#include "EToll.h"

class Node
{
    public:
        typedef EToll value_type; // type

        Node(); // constructor

        ~Node(); // destructor

        void setNextNode(Node* next_);

        Node* getNextNode() const;

        void setPrevNode(Node* prev_);

        Node* getPrevNode() const;

        void setData(value_type& data_);

        value_type getData() const;

    private:
        value_type data; // the data the Node holds
        Node* next; // a pointer to the next Node
        Node* prev; // a pointer to the previous Node

};

#endif //Node_header


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@&@@@@@@@@@@@@@@@@@@@@@@@@@&&&@@@@@@@@@@@@@@@@@@@@@@@@@&@&%%&@&%############%%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@&&&&&&&&&&&%%%%&&&&@&@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&#%##########%%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@&@&&@@&&&&%%%%%%##%%%%%%%%%%%%&&&&&&&&&&&&@@@@@@@@@@@@@@@@@@@@@@@&&%&%&%%%%#%%%####%%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@&&&@@&@@@@&%%%%%%#####################%%%%%%&&&&@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@%%%%%%####%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%%%###################((((#######%%%%%%&&&&&@&&&&@@@@@@@@@@@@@@&%&&@%%%%#####%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%&%%#########(((((((((((((((((((((((((((####%%&&&&&&&&&@@@@@@@@@@@@&&&&&%%%%#####%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%%%%&##(###((((((((((((((((((((((((((((((((((((((##%%%%%&&&&&@@@@@@@@&@&&&%&&%%%####%%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&%@@@@@@@@@@@@@@@@@@@@@@@@&&&&&%%%%%%%%######((((((((((((((((((((((((///////(((((((/((#####%%%%%%&@@@@@@@@&&&%&&%%#####%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@@@@@@@@@@&&%%%&&&&&&%######((((((((///(////////((/////////////////////((######%%%#&@@@@@@@&@&&%@&######%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@&%%###########(((((((((///////////////////////////////*//**///(((#####%%##%&@@@@@@&&@@@######%%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@&@&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@@@@@@@&@@@@@@@@@@@@@@&%######(((((((((((((((//(////////////////////////////*****,**//(((####%%##%@@@&@&&&@&%######%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&%%#####(((((((((((((/((((////(((((((//////////////**********////((####%###&@@&@&@@&&%######%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@@&@@@&@@&%%#(#(#(((((((((((((((((((//((((((((//////////////**********///((((#%%%###&&@&@@@&&%%%####%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@&&@&&&&%##(((((((((((((((((((((((((((((((((//////////////************//////(##%#%#@@&@&&&&&%%####%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@#%@@@@@@@@@@@&&@@@&@&&%%###((((((((((((((((((((((//////////////////////*********************//#%(#@@&&&&%%%#####%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(&&@@@@@@@@@@@@@@@&&%%###(((((((((((((((((((((//////////////////////*****************,,,,,,/(##%@@@@&%%%######%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@/%@@@@@@@@@@@@@@@@&&%%######((((((((((((((((((((/////////////////*/*************************//#@&&%#%%######%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*&@@&@@@@@@@@@@@@&%##%#(((((((((#((((#############%%%%%%%%%##(((((///////*//*////((##%&&%#####%&%%########%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@(/@&@%&@@@@@@@@@@&%%%##%##(((##%&@/%&&&&&&&&&&&&&&&&%%%%%%%%%#####(((////**//((#######(#####%%%%%%%%%%%#%%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@ #@@%&&@@@@@@@@@@%#(((((####((((((&#((((((((((((///////((######%&&&%%#(//((#%&&&%(//////////%%%%%%%#(%##%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%/@@@%&&&@@@@@@@@%##((((((////((((#&/(#%%%%%%%##%%&&*%%%%##########%&%%%#((&&&####%%%%#%#(/(%%&%%%#*####%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&@@@@@&@@@@@@.&&@&&&&@@@@@@@@&%##(((((((////////@/(((((//((((#%%%#%%%%##(((((##&%(//*(#%&&(####((///(/*##(&%%%/####%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@&&&&&&&&&&&&&&&&@@@@@@@@@@(/@@@%%%%@@@@@@@@%###(((((((((///(//@*//////////((((######(((((#%&%(////**(%&*((((///****/#/&%#**####%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&*@@@&%%%@@@@@@@@@&%##(((((((((((/////#&(/////////((((((((((((%&#((((////**/#&***********/##&#%,#####%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@/@@@@&&&@@@@@@@@@&&%####(((((((((///////((((//(%&&&&%%%%&&&%#((((((((///*,*//****,,*//*//@%&&(#####%%&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#@@@@@@@@@@@@@@@@&%%%#####((((((((((((/////////////(((((((((((((((((((///****/*,,,.,,*//@@@(#######%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@%&@@@@@@@@@@@@@@@@&%%%%#(#(((((((((((((((//////////(((##(#(((((((((//////******/(/****/(@@@#########%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@%@@@@@@@@@@@@@@@@@&%%%#####((((((((((((((((///(/(((##((((####%%&@&&%##(###(#(/(##(/***/@@@***//(####%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@@@@@@@@@@@@@@&&&%%######((((((((((((((((/((((((((((((###########((##%%#(#//////*//@@/***//(#%%%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&%%%%#%####(((((((((((((/////(((((((####%%#%###%%%##%##%####////////@&&&&&@@@&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&&%%%%%%###((#((((((((//////((((###%#%####(#((((((((////((##(//*//(@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@@@@@&&%&&&%%%###%#(##(#(#(##((((////((##%%##((((##%%%%%%%%######(/(#((**//%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@@@@@&&%#%&@&&%%%%%%%############(((((/((#%%#####%#%%%########%&&%%%(###(*//#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@@@&%%###%&&&&%%%%%%%############((((((#%%%#%%%%&%%%%%%%%%%&&@%###(#%##///(%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@&@@@@@&%######%@@&&%%%%%######%%#%#####((((%%#((((##((((/*,**/(#((/////(##(///%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@@@@@@@%#######%%&&&&&%%%%####%#%########((##((((((((##(((///////***////((((/(#&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&@%@@@@@@%########%%&&@&&%%&%%#####%%%#####(###((((((((((#####((((((((((///((/(%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@@@@@%@@@&@%#####(###%%%&&&&&&&%%%#%%%%%######((((((((((((#######%%####((///////%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@&@@@&@&&@&@&@%#####(((####%&@&&@&&&&%%%%%&%#####((##(((((((((((###%%%%%#(///****/#&@%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&@@@&&@&&&@%&@@@&%###&@*&.&@&&@@@.@@@@@(@,@@@&&@&&&%&&&&&.&&&%&&&&&*&&&&&&&&%&%&&&&.@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&@@&&@&&@@&&&@@@&&@%%###&&@.&.#%%%%@.@.@@@(@,@*@(&%.@& &%.@&.&#&* &/&&*&%%,&,&*,&*&*&&.@,*@/@(@#%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&&%&&%@@@&&@@@@&&@&@@@&%###&@&@@&&&&@&@&@@@@@@@@@@@@@@@@@@@@&@@@&@@@&(%&@@&&&&&&&&&&&&@&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@&&&&&&&&&%&@&&&&@@&@@@&@%&&@%%##(((((((((((((###%%&&@@@@&&&&&&%%%%%##%%##%#########(#####(##%&&&&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@&&&%&@&&&&&@&@&&&&&@&&&@@&@@@&@&@&@&%##(((((((((((((((###%%&&@&@@@&&&&&@@&&&&%%%&%%%%%%%%%##%%%%%%&&&@@%%%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@&&%%&&&&&&&&@&&@&@@@@&&&&@@&@@&&%@&&@%&@@&%#((((((((((((((((((##%%%&&&&@@&@@@@@@@@&&&&&&&&&&&&&&&%&%&&&&%%@@@&%%%%%%&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@