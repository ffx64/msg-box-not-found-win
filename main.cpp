#include <iostream>
#include <windows.h>

int display_message_error() {
    int msgbox = MessageBox(NULL,
    "Your computer's hardware is not compatible with this software.\nWould you like to try again?",
    "Windows Error",
    MB_YESNO | MB_OKCANCEL | MB_ICONERROR);
}

int main(void) {
    int msgbox_id;

    while(true) {
        msgbox_id = display_message_error();

        switch (msgbox_id) {
        case IDCANCEL:
            exit(0);
        case IDTRYAGAIN:
        case IDCONTINUE:
            exit(0);
        }
    }
    return 0;
}
