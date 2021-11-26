#include "mainheader.h"
#include "cmds.h"


void welcome_msg(){
    printf("Wunpaa Shell VERSION %s\nAll rights reserved to Yoav Shifman and Gefen Zadok.\n", SHELL_VERSION);
}

handle_cmds_map cmds_map;

void handle_cmd(string full_cmd){
    int first_space = full_cmd.find(" ");
    if(first_space == -1) first_space = full_cmd.size();
    string cmd = full_cmd.substr(0, first_space);
    if(cmds_map[cmd]){
        cmds_map[cmd](full_cmd.substr(min(first_space+1, (int)full_cmd.size()), full_cmd.size()));
    }
    else fprintf(stderr, "%s: %s: command not found.\n", SHELL_NAME, cmd.c_str());
}

int main(){
    welcome_msg();

    load_all_cmds(cmds_map);

    string cmd;
    do{
        cout << ">";
        getline(cin, cmd);
        handle_cmd(cmd);
    } while(true);
    return 0;
}
