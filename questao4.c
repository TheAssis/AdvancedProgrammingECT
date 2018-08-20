/*
p = i;                   // ilegal
q = &j;                //
p = &*&i;           //
i = (*&)j;             // ilegal
i = *&j;               //
i = *&*&j;          // ilegal
q = *p;               // ilegal
i = (*p)++ + *q; // legal

*/
