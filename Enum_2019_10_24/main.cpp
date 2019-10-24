#include <iostream>

using namespace std;

enum error_e {ERR_OK =0,ERR_ARG,ERR_OVFL};

error_e check(int var)
{
    error_e e = ERR_OK;
    if(var<0){
        e=ERR_ARG;
    }
    if(var>100){
        e=ERR_OVFL;
    }
    return e;
}
int main()
{
    int a;

    while(true){
     cout << "Argumentum?";
     cin >> a;
     error_e err=check(a);
     switch(err){
      case ERR_OK:
      cout<<"Ok"<<endl;
      break;
      case ERR_ARG:
        cout<<"Negative!"<<endl;
        break;
      case ERR_OVFL:
        cout<<"Too big"<<endl;
        break;
      default:
        cout<<"What??"<<endl;
        break;
     }
    }
    return 0;

}
