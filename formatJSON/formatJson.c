#include <stdio.h>
#include <ctype.h>

#define SPACE "    "
#define DoIndent(indent) do{int __indent=(indent); while(__indent-->0){printf(SPACE);}} while(0)

int main(void){
    int c;
    int indent=0;
    while((c=getchar()) != EOF){
        while(isblank(c) || c=='\n'){
            c = getchar();
        }

        if(c=='\"'){ //格式化string
            putchar(c);
            while((c=getchar()) != '\"'){
                putchar(c);
                if(c=='\\'){
                    putchar(getchar());
                }
            }
            putchar(c);
            continue;
        }

        if(c=='{'||c=='['){
            putchar(c);
            putchar('\n');
            DoIndent(++indent);
        }else if(c == '}' || c== ']'){
            putchar('\n');
            DoIndent(--indent);
            putchar(c);
        }else if(c==','){
            putchar(c);
            putchar('\n');
            DoIndent(indent);
        }else if(c==':'){
            putchar(c);
            putchar(' ');
        }else{
            putchar(c);
        }
    }
    return 0;
}

