#include <iostream>
#include <Math.h>
using namespace std;

class Ratio{
    friend ostream &operator<< (ostream &output, const Ratio &rat);
    friend istream &operator>> (istream &input, Ratio &rat);
private:
    int p, q;
    int gcd(int a, int b){
        if (b==0) return abs(a);
        return gcd(b, a%b);
    }
    void ratReduction(){
        int reductor = gcd(p, q);
        p = (p/reductor);
        q = (q/reductor);
    }
public:
    Ratio(){
        p=0; q=0;
    };

    Ratio(int _p, int _q){
        p=_p;
        q=_q;
        ratReduction();
    }

    Ratio(const Ratio &rat){
        p=rat.p;
        q=rat.q;
    }

    Ratio operator + (Ratio a){
        p=(p*a.q+a.p*q);
        q=q*a.q;
        return Ratio(p,q);
    }

    Ratio operator - (Ratio a){
        p=p*a.q-a.p*q;
        q=q*a.q;
        return Ratio(p,q);
    }

    Ratio operator * (Ratio a){
        p=p*a.p;
        q=q*a.q;
        return Ratio(p,q);
    }

    Ratio operator / (Ratio a){
        p=p*a.q;
        q=q*a.p;
        return Ratio(p,q);
    }

    Ratio operator ++ (int){
        p=p+q;
        return Ratio(p,q);
    }
};



ostream &operator<< (ostream &output, const Ratio &rat){
    int p=abs(rat.p); int q=abs(rat.q);
    if (rat.p<0 && rat.q<0){
    cout<<"("<<p<<"/"<<q<<")";}
    if ((rat.p<0 && rat.q>0) || (rat.p>0 && rat.q<0)){
        cout<<"-("<<p<<"/"<<q<<")";}
    if (p==0) cout<<"("<<0<<"/"<<0<<")";
    if (q==0 && p!=0) cout<<"invalid ratio";
    if (rat.p>0 && rat.q>0) cout<<"("<<p<<"/"<<q<<")";
}

istream &operator>> (istream &input, Ratio &rat){
    input>>rat.p;
    input>>rat.q;
    return input;
}


int main() {
    Ratio a, b;
    cin>>a>>b;
    a=a+b;
    cout<<a<<endl;
    a=a-b;
    cout<<a<<endl;
    a=a/a;
    cout<<a<<endl;
    a=a*b;
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
    return 0;
}
