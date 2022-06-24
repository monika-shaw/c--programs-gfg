//
// Created by shawm on 20-06-2022.
//

#ifndef C__PROGRAM_GFG_FACTORIAL_H
#define C__PROGRAM_GFG_FACTORIAL_H

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <=n; ++i) {
        f=f*i;
    }
    return f;
}
#endif //C__PROGRAM_GFG_FACTORIAL_H
