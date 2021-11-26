#include "mainheader.h"

#include "pnt_cmds.h"
#include "set_cmds.h"

void load_all_cmds(handle_cmds_map& handle_cmds){
    load_pnt_cmds(handle_cmds);
    load_set_cmds(handle_cmds);
}
