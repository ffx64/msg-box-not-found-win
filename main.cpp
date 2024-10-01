#include <iostream>
#include <winuser.h>

int display_message_error() {
  int msgbox =
      MessageBox(NULL,
                 (LPCWSTR)L"O hardware do seu computador não é compatível com este software.\nDeseja tentar novamente ?",
                 (LPCWSTR)L"Windows Error",
                 MB_ICONWARNING | MB_CANCELTRYCONTINUE | MB_DEFBUTTON2);
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
