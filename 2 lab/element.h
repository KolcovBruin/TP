#pragma once
struct ELMT
{
    int value;
    ELMT *prev;
    ELMT *next;
};


struct Unit
{
    int value=0;
    Unit *prev=nullptr;
};
