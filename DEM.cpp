#include <iostream>
#include <string>
#include <cmath> 

using namespace std;

double pi = 3.1415;

//固体粒子の物理パラメタ
//摩擦や回転は実装しない
double rad = 0.0002;
double gravity = 9.81;
double rho = 2500;//密度(kg/m^3)
double k = 100;//(N/m)
double e = 0.9;//反発係数(restitution coef.)

double mass = rho*pow(rad*2, 3.0)*pi/6.0;

//計算条件
double delta = 0.0001;
int numPtcl = 100;

//位置などの情報の保存先
double pos[][2];
double vel[][2];
double force[][2];

//粉体初期配置
for(int i = 0; i < numPtcl; ++i){
}


int main(){

}