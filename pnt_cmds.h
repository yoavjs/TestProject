#include "mainheader.h"
#include "pnt_cmd.cpp"

void load_pnt_cmds(handle_cmds_map& handle_cmds){
    handle_cmds["pnt"] = &handle_pnt;
}
