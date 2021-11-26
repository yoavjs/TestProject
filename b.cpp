#include "mainheader.h"

ll n;

int main(){
    cin >> n;
    vi a(n);
    for(auto& i : a) cin >> i;
    printf("Version:%s\n", SHELL_NAME);
    return 0;
}
