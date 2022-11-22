#include <iostream>
class Vector3D {
    public:
    vector3D() {x=0.0;y=0.0;z=0.0;}
    vector3D(doucle xx,double yy,double zz){x=xx;y=yy;z=zz;}
    vector3D sum(const vector3D &v) const{return vector3D(x+v.x,y+v.y,z+v.z);}
    vector3D product(double k)  const {return vector3D(k*x,k*y,k*z);}
    double scalar(const vector3D &v) const{return x*v.x+y*v.y+z*v.z;} 
    ostream &print(ostream &s)  const{return  s  <<'['<<x<<','<<y<<','<<z)
};
    vector3D operator+(const   vector3D &v1,const vector3D &v2) {return v1.sum(v2)};
    double operator  * (const vector3D &v1,const vector3D  &v2)  {return v1.scalar(v2)};
    vector3D operator * (const vector3D &v,double  k){return v.product(k);}
    ostream &operator << (ostream &s,const vector3D &v) {v.print(s);return s;}
    int main (int argc,char **argv){
        vector3D v(1,2,3),w(-1.0,-1.0,1.0);
        cout << v << ''  << w  << '\n';
        cout << (v*w) << '' << (3*v+5*w+(v*w)w << '\n');
    }

