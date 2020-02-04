#include<bits/stdc++.h>
using namespace std;
class Life{
public:
  void startLife(){
    var BIRTH=new birth();
    const var DEATH= new death(BIRTH);
    Dream dreams= new dreams(BIRTH,DEATH);
    while(true){
      if(BIRTH.time != DEATH.time)
      {
        if(BIRTH.time != "31-DEC-* 23:59:59 99" )
        {
          workhard(dreams);
          BIRTH.incrementTimeOneUnit();
          }
        else{
          wishHappyNewYear();
          workhard(dreams);
          BIRTH.incrementTimeOneUnit();
        }
      }
      else{
        endLife();
      }
  }
}
  void endLife(){
    startLife();
  }
};
