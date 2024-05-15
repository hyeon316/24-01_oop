#include "health.h"
#include<cmath>

CHealth::CHealth(int a){        //health.h에 int a constructor 있지만
                                // 여기에 만들어서 덮어쓴다?
    age = a; 
}

void CHealth::faren2cel(){      //화씨에서 섭씨로
    cel = (faren - 32) * 5.0 / 9.0;
}

void CHealth::measureCel(){     //체온 측정 후 화씨로 변환
    cel = rand() % 10 +30.0;
    cel2faren();
}