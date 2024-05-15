#pragma once
class CHealth{
public:
    CHealth(){ };
    CHealth(int a);

    //member data
    int age;
    float cel, faren;

    //member function
    void cel2faren(){       //섭씨 -> 화씨 function
        faren = cel *9.0 /5.0 +32.0;
    }

    void faren2cel();
    void measureCel();
};